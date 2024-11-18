#include "utils_hitscan.h"





customColisionBox* hitscan_colisionbox(ofVec3f start, ofVec3f dir, vector<int> groups) {
    GLfloat min_t = 1000000.0;
    customColisionBox* min_colisionBox = NULL;
    for (int i=0; i<(int)globalcolisionBoxes.size(); i++) {

        for (int j=0; j<(int)groups.size(); j++) {
            // only check colisionBoxes that are in the groups
            if (globalcolisionBoxes[i]->group == groups[j]) {
                customColisionBox* colisionBox = globalcolisionBoxes[i];
                GLfloat t = raycast(start, dir, colisionBox);
                if (t >= 0.0 && t < min_t) {
                    min_t = t;
                    min_colisionBox = colisionBox;
                }
            }
            break;
        }

    }
    return min_colisionBox;
}

GLfloat hitscan_distance(ofVec3f start, ofVec3f dir, vector<int> groups) {
    GLfloat min_t = 1000000.0f;
    for (int i=0; i<(int)globalcolisionBoxes.size(); i++) {

        for (int j=0; j<(int)groups.size(); j++) {
            // only check colisionBoxes that are in the groups
            if (globalcolisionBoxes[i]->group == groups[j]) {
                customColisionBox* colisionBox = globalcolisionBoxes[i];
                GLfloat t = raycast(start, dir, colisionBox);
                if (t >= 0.0f && t < min_t) {
                    min_t = t;
                }
            }
            break;
        }

    }
    return min_t;
}




/* [ATENÇÃO] Função adaptada de "https://gdbooks.gitbooks.io/3dcollisions/content/Chapter3/raycast_aabb.html" */
GLfloat raycast(ofVec3f start, ofVec3f dir, customColisionBox* colisionBox) {
    GLfloat t1 = (colisionBox->abs_minX - start.x) / dir.x;
    GLfloat t2 = (colisionBox->abs_maxX - start.x) / dir.x;
    GLfloat t3 = (colisionBox->abs_minY - start.y) / dir.y;
    GLfloat t4 = (colisionBox->abs_maxY - start.y) / dir.y;
    GLfloat t5 = (colisionBox->abs_minZ - start.z) / dir.z;
    GLfloat t6 = (colisionBox->abs_maxZ - start.z) / dir.z;

    GLfloat tmin = max(max(min(t1, t2), min(t3, t4)), min(t5, t6));
    GLfloat tmax = min(min(max(t1, t2), max(t3, t4)), max(t5, t6));

    // if tmax < 0, ray (line) is intersecting AABB, but whole AABB is behind us
    if (tmax < 0.0f) {
        return -1.0f;
    }

    // if tmin > tmax, ray doesn't intersect AABB
    if (tmin > tmax) {
        return -1.0f;
    }

    if (tmin < 0.0f) {
        return tmax;
    }
    return tmin;
}
#include "customMaterials.h"


custommaterial mat_greybricks = {
    .ambi = { 0.3, 0.3, 0.3, 1.0 },
    .difu = { 0.4, 0.4, 0.4, 1.0 },
    .spec = { 0.2, 0.2, 0.2, 1.0 },
    .coef = (GLint)(0.1 * 128)
};

custommaterial mat_bluebricks = {
    .ambi = { 0.0, 0.0, 0.3, 1.0 },
    .difu = { 0.0, 0.0, 0.8, 1.0 },
    .spec = { 0.2, 0.2, 0.5, 1.0 },
    .coef = (GLint)(0.2 * 128)
};

custommaterial mat_redbricks = {
    .ambi = { 0.3, 0.0, 0.0, 1.0 },
    .difu = { 0.8, 0.0, 0.0, 1.0 },
    .spec = { 0.5, 0.2, 0.2, 1.0 },
    .coef = (GLint)(0.3 * 128)
};

custommaterial mat_wood = {
    .ambi = { 0.2, 0.1, 0.05, 1.0 },
    .difu = { 0.4, 0.2, 0.1, 1.0 },
    .spec = { 0.1, 0.05, 0.025, 1.0 },
    .coef = (GLint)(0.1 * 128)
};

custommaterial mat_cyanmetal = {
    .ambi = { 0.0, 0.1, 0.06, 1.0 },
    .difu = { 0.0, 0.50980392, 0.50980392, 1.0 },
    .spec = { 0.50196078, 0.50196078, 0.50196078, 1.0 },
    .coef = (GLint)(0.25 * 128)
};

custommaterial mat_clothes = {
    .ambi = { 0.25, 0.2, 0.2, 1.0 },
    .difu = { 0.6, 0.5, 0.5, 1.0 },
    .spec = { 0.3, 0.3, 0.3, 1.0 },
    .coef = (GLint)(0.3 * 128)
};

custommaterial mat_emerald = {
    .ambi = { 0.0215, 0.1745, 0.0215, 0.55 },
    .difu = { 0.07568, 0.61424, 0.07568, 0.55 },
    .spec = { 0.633, 0.727811, 0.633, 0.55 },
    .coef = (GLint)(0.6 * 128)
};

custommaterial mat_blood = {
    .ambi = { 0.3, 0.0, 0.0, 1.0 },
    .difu = { 0.6, 0.0, 0.0, 1.0 },
    .spec = { 0.3, 0.0, 0.0, 1.0 },
    .coef = (GLint)(0.1 * 128)
};




void loadmaterial(struct custommaterial *material) {
	glMaterialfv(GL_FRONT, GL_AMBIENT, material->ambi);
	glMaterialfv(GL_FRONT, GL_DIFFUSE, material->difu);
	glMaterialfv(GL_FRONT, GL_SPECULAR, material->spec);
	glMaterialf(GL_FRONT, GL_SHININESS, material->coef);
}
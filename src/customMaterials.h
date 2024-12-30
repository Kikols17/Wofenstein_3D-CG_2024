#ifndef CUSTOMMATERIALS_H
#define CUSTOMMATERIALS_H

#include "ofMain.h"


struct custommaterial {
    GLfloat ambi[4];
    GLfloat difu[4];
    GLfloat spec[4];
    GLint coef;
};


void loadmaterial(struct custommaterial *material);




//struct custommaterial mat_greybricks;
//struct custommaterial mat_bluebricks;
//struct custommaterial mat_redbricks;
//struct custommaterial mat_wood;
//struct custommaterial mat_cyanmetal;
//struct custommaterial mat_clothes;
//struct custommaterial mat_emerald;

//custommaterial mat_greybricks = {
//    { 0.3, 0.3, 0.3, 1.0 },
//    { 0.4, 0.4, 0.4, 1.0 },
//    { 0.2, 0.2, 0.2, 1.0 },
//    (GLint)(0.1 * 128)
//};
//
//custommaterial mat_bluebricks = {
//    { 0.0, 0.0, 0.3, 1.0 },
//    { 0.0, 0.0, 0.8, 1.0 },
//    { 0.2, 0.2, 0.5, 1.0 },
//    (GLint)(0.2 * 128)
//};
//
//custommaterial mat_redbricks = {
//    { 0.3, 0.0, 0.0, 1.0 },
//    { 0.8, 0.0, 0.0, 1.0 },
//    { 0.5, 0.2, 0.2, 1.0 },
//    (GLint)(0.3 * 128)
//};
//
//custommaterial mat_wood = {
//    { 0.2, 0.1, 0.05, 1.0 },
//    { 0.4, 0.2, 0.1, 1.0 },
//    { 0.1, 0.05, 0.025, 1.0 },
//    (GLint)(0.1 * 128)
//};
//
//custommaterial mat_cyanmetal = {
//    { 0.0, 0.1, 0.06, 1.0 },
//    { 0.0, 0.50980392, 0.50980392, 1.0 },
//    { 0.50196078, 0.50196078, 0.50196078, 1.0 },
//    (GLint)(0.25 * 128)
//};
//
//custommaterial mat_clothes = {
//    { 0.25, 0.2, 0.2, 1.0 },
//    { 0.6, 0.5, 0.5, 1.0 },
//    { 0.3, 0.3, 0.3, 1.0 },
//    (GLint)(0.3 * 128)
//};
//
//custommaterial mat_emerald = {
//    { 0.0215, 0.1745, 0.0215, 0.55 },
//    { 0.07568, 0.61424, 0.07568, 0.55 },
//    { 0.633, 0.727811, 0.633, 0.55 },
//    (GLint)(0.6 * 128)
//};



#endif
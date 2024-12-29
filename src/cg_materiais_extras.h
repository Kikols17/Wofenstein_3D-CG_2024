#ifndef MATERIALS_H
#define MATERIALS_H
#include "ofMain.h"


struct material {
	GLfloat amb[4];
	GLfloat dif[4];
	GLfloat spec[4];
	GLint coef;
};


#endif
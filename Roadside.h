#ifndef ROADSIDE_H
#define ROADSIDE_H
#include "glut.h"
#include "StaticObject.h"


class Roadside : public StaticObject {

	public:

	Roadside(){
		collxmin = -6.0;
		collxmax = 6.0;
		collymin = -0.5;
		collymax = 0.2;
	}

	~Roadside(){}

	int answerToColision(){ return 4; }			// 4 = ground

	void draw(){
		Vector3* vector = getPosition();

		GLfloat mat_specular[] = { 0.0, 1.0, 0.0, 0.7 };
		GLfloat shininess = 0.60;

		glPushMatrix();
		glTranslatef(vector->getX(), vector->getY(), vector->getZ());

		glMaterialfv(GL_FRONT, GL_SPECULAR, mat_specular);
		glMaterialf(GL_FRONT, GL_SHININESS, shininess);

		glPushMatrix();
		glTranslatef(0.0, 0.0, 0.0);
		glScalef(11.0, 1.0, 1.0);
		glColor3f(0.0, 0.25, 0.0);
		glutSolidCube(1.0);
		glPopMatrix();

		glPopMatrix();
	}

};

#endif
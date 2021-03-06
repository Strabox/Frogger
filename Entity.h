#ifndef ENTITY_H
#define ENTITY_H

#include "glut.h"
#include "Vector3.h"


class Entity {

protected:

	Vector3 _position;

	GLuint textureID;

	char* texels;

public:

	Entity(){}

	~Entity(){}

	Vector3 getPosition(){ 
		return _position; 
	}

	void setPosition(const Vector3 &p){ 
		_position = p; 
	}

	void setPosition(double x, double y, double z){ 
		_position.set(x, y, z); 
	}

	virtual int loadSelfTexture(){
		return 0;
	}

};

#endif
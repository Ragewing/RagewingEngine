#include "Init.h"

Init* Init::p_instance = 0;
InitDestroyer Init::destroyer;

InitDestroyer::~InitDestroyer(){
	delete p_instance;
}

void InitDestroyer::initialize(Init* p){
	p_instance = p;
}

Init& Init::getInstance(){
	if (!p_instance){
		p_instance = new Init();
		destroyer.initialize(p_instance);
	}

	return* p_instance;
}

Init::Init(){
	GLenum err = glewInit();
	if (err != GLEW_OK){
		fprintf(stderr, "Init: GLEW error");
		return;
	}
}
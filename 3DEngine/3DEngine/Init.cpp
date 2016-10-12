#include "Init.h"

void Init::start(){
	GLenum err = glewInit();
	if (err != GLEW_OK){
		fprintf(stderr, "Init: GLEW error");
		return;
	}
}
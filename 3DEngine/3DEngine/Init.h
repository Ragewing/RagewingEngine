#pragma once

#include <GL/glew.h>
#include <Windows.h>
#include <iostream>

class Init{
private:
	Init& instance;

public:
	static void start();
};
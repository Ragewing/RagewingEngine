#pragma once

#include <GL/glew.h>
#include <GL/freeglut.h>
#include <Windows.h>
#include <iostream>

class Init;

class InitDestroyer{
private:
	Init* p_instance;

public:
	~InitDestroyer();
	void initialize(Init* p);
};

class Init{
private:
	static Init* p_instance;
	static InitDestroyer destroyer;

protected:
	Init();
	Init(const Init&);
	Init& operator = (Init&);
	friend class InitDestroyer;

public:
	static Init& getInstance();
};
#include <glad.h>
#include <glfw3.h>
#include<iostream>

void main(){
	float vertices[] = {
		-0.5,-0.5,0.0,
		0.5,-0.5,0.0,
		0.0,-0.5,0.0
	};
	unsigned int VBO;
	glGenBuffers(1, &VBO);
	glBindBuffer(GL_ARRAY_BUFFER, VBO);
	glBufferData(GL_ARRAY_BUFFER, sizeof(vertices), vertices, GL_STATIC_DRAW);
}
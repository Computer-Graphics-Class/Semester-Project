// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include "mercury.cpp"

using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void refluxAddF();
void refluxAddL();
void refluxAddU();
void refluxAddX();
void refluxkeys(unsigned char key, int x, int y)
{
    if(key == 'f')
    {
            glutDisplayFunc(refluxAddF);
    }
    if(key == 'l')
    {
            glutDisplayFunc(refluxAddL);
    }
    if(key == 'u')
    {
         glutDisplayFunc(refluxAddU);
    }
    if(key == 'x')
    {
            glutDisplayFunc(refluxAddX);
    }
    if(key == 'm')
    {
            glutDisplayFunc(mercury);
    }
    glutPostRedisplay();
}

void reflux()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,495,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'e');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(refluxkeys);
}

void refluxAddF()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,475,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'f');
    glutPostRedisplay();
    glutSwapBuffers();
}

void refluxAddL()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,455,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'l');
    glutPostRedisplay();
    glutSwapBuffers();
}

void refluxAddU()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,435,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'u');
    glutPostRedisplay();
    glutSwapBuffers();
}


void refluxAddX()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,415,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'x');
    glutPostRedisplay();
    glutSwapBuffers();
}



// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include "cosine.cpp"


using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void mercuryAddE();
void mercuryAddR();
void mercuryAddC();
void mercuryAddU();
void mercuryAddR();
void mercuryAddY();
void mercuryAddr();
void mercurykeys(unsigned char key, int x, int y)
{
    if(key == 'e')
    {
        glutDisplayFunc(mercuryAddE);
    }
   
    if(key == 'c')
    {
            glutDisplayFunc(mercuryAddC);
    }
    if(key == 'u')
    {
         glutDisplayFunc(mercuryAddU);
    }
    if(key == 'r')
    {
            glutDisplayFunc(mercuryAddR);
    }
    if(key == 'R')
    {
            glutDisplayFunc(mercuryAddr);
    }
    if(key == 'y')
    {
            glutDisplayFunc(mercuryAddY);
    }
     if(key == 'o')
    {
            glutDisplayFunc(cosine);
    }
   
    glutPostRedisplay();
}

void mercury()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,435,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'm');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(mercurykeys);
}

void mercuryAddE()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(115,435,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'e');
    glutPostRedisplay();
    glutSwapBuffers();
}

void mercuryAddr()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(135,435,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'r');
    glutPostRedisplay();
    glutSwapBuffers();
}

void mercuryAddC()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,435,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'c');
    glutPostRedisplay();
    glutSwapBuffers();
}

void mercuryAddU()
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

void mercuryAddR()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(195,435,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'r');
    glutPostRedisplay();
    glutSwapBuffers();
}

void mercuryAddY()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(215,435,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'y');
    glutPostRedisplay();
    glutSwapBuffers();
}



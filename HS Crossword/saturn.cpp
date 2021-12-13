// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>


using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void saturnAddA();
void saturnAddT();
void saturnAddU();
void saturnAddR();
void saturnAddN();
void saturnkeys(unsigned char key, int x, int y)
{
    if(key == 'a')
    {
        glutDisplayFunc(saturnAddA);
    }
    if(key == 't')
    {
            glutDisplayFunc(saturnAddT);
    }
    if(key == 'u')
    {
            glutDisplayFunc(saturnAddU);
    }
    if(key == 'r')
    {
         glutDisplayFunc(saturnAddR);
    }
    if(key == 'n')
    {
            glutDisplayFunc(saturnAddN);
    }
    glutPostRedisplay();
}

void saturn()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 's');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(saturnkeys);
}

void saturnAddA()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(115,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'a');
    glutPostRedisplay();
    glutSwapBuffers();
}

void saturnAddT()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(135,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 't');
    glutPostRedisplay();
    glutSwapBuffers();
}

void saturnAddU()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'u');
    glutPostRedisplay();
    glutSwapBuffers();
}

void saturnAddR()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'r');
    glutPostRedisplay();
    glutSwapBuffers();
}


void saturnAddN()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(195,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'n');
    glutPostRedisplay();
    glutSwapBuffers();
}



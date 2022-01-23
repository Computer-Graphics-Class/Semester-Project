// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include "levelpass.cpp"

using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void experimentAddP();
void experimentAddE();
void experimentAddR();
void experimentAddI();
void experimentAddM();
void experimentAdde();
void experimentAddN();
void experimentAddT();
void experimentkeys(unsigned char key, int x, int y)
{
    if(key == 'p')
    {
        glutDisplayFunc(experimentAddP);
    }
   
    if(key == 'e')
    {
            glutDisplayFunc(experimentAddE);
    }
    if(key == 'r')
    {
         glutDisplayFunc(experimentAddR);
    }
    if(key == 'i')
    {
            glutDisplayFunc(experimentAddI);
    }
    if(key == 'm')
    {
            glutDisplayFunc(experimentAddM);
    }
    if(key == 'E')
    {
            glutDisplayFunc(experimentAdde);
    }
     if(key == 'n')
    {
            glutDisplayFunc(experimentAddN);
    }
     if(key == 't')
    {
           glutDisplayFunc(levelPass);
    }
 
   
    glutPostRedisplay();
}

void experiment()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(75,235,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'x');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(experimentkeys);
}

void experimentAddP()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,235,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'p');
    glutPostRedisplay();
    glutSwapBuffers();
}

void experimentAddE()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(115,235,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'e');
    glutPostRedisplay();
    glutSwapBuffers();
}

void experimentAddR()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(135,235,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'r');
    glutPostRedisplay();
    glutSwapBuffers();
}

void experimentAddI()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,235,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'i');
    glutPostRedisplay();
    glutSwapBuffers();
}

void experimentAddM()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,235,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'm');
    glutPostRedisplay();
    glutSwapBuffers();
}

void experimentAdde()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(195,235,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'e');
    glutPostRedisplay();
    glutSwapBuffers();
}


void experimentAddN()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(215,235,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'n');
    glutPostRedisplay();
    glutSwapBuffers();
}

void experimentAddT()
{
    glutDisplayFunc(levelPass);
}


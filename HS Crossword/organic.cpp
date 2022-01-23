//for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include "nucleus.cpp"


using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void organicAddG();
void organicAddA();
void organicAddN();
void organicAddI();
void organicAddC();
void organickeys(unsigned char key, int x, int y)
{
    if(key == 'g')
    {
        glutDisplayFunc(organicAddG);
    }
   
    if(key == 'a')
    {
            glutDisplayFunc(organicAddA);
    }
    if(key == 'n')
    {
         glutDisplayFunc(organicAddN);
    }
    if(key == 'i')
    {
            glutDisplayFunc(organicAddI);
    }
    if(key == 'c')
    {
            glutDisplayFunc(organicAddC);
    }
     if(key == 'u')
    {
            glutDisplayFunc(nucleus);
    }
   
    glutPostRedisplay();
}

void organic()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(75,375,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'r');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(organickeys);
}

void organicAddG()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,375,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'g');
    glutPostRedisplay();
    glutSwapBuffers();
}

void organicAddA()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(115,375,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'a');
    glutPostRedisplay();
    glutSwapBuffers();
}

void organicAddN()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(135,375,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'n');
    glutPostRedisplay();
    glutSwapBuffers();
}

void organicAddI()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,375,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'i');
    glutPostRedisplay();
    glutSwapBuffers();
}

void organicAddC()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,375,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'c');
    glutPostRedisplay();
    glutSwapBuffers();
}



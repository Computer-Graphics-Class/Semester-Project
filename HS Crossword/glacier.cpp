// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include "gulf.cpp"


using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void glacierAddL();
void glacierAddA();
void glacierAddC();
void glacierAddI();
void glacierAddE();
void glacierAddR();
void glacierkeys(unsigned char key, int x, int y)
{
    if(key == 'l')
    {
        glutDisplayFunc(glacierAddL);
    }
    if(key == 'a')
    {
            glutDisplayFunc(glacierAddA);
    }
    if(key == 'c')
    {
            glutDisplayFunc(glacierAddC);
    }
    if(key == 'i')
    {
         glutDisplayFunc(glacierAddI);
    }
    if(key == 'e')
    {
            glutDisplayFunc(glacierAddE);
    }
    if(key == 'r')
    {
            glutDisplayFunc(glacierAddR);
    }
    if(key == 'u')
    {
            glutDisplayFunc(gulf);
    }
    glutPostRedisplay();
}

void glacier()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(35,535,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'g');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(glacierkeys);
}

void glacierAddL()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(55,535,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'l');
    glutPostRedisplay();
    glutSwapBuffers();
}

void glacierAddA()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(75,535,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'a');
    glutPostRedisplay();
    glutSwapBuffers();
}

void glacierAddC()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,535,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'c');
    glutPostRedisplay();
    glutSwapBuffers();
}

void glacierAddI()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(115,535,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'i');
    glutPostRedisplay();
    glutSwapBuffers();
}


void glacierAddE()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(135,535,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'e');
    glutPostRedisplay();
    glutSwapBuffers();
}


void glacierAddR()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,535,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'r');
    glutPostRedisplay();
    glutSwapBuffers();
}



// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include "experiment.cpp"


using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void nucleusAddC();
void nucleusAddL();
void nucleusAddE();
void nucleusAddU();
void nucleusAddS();
void nucleuskeys(unsigned char key, int x, int y)
{
    
    if(key == 'c')
    {
            glutDisplayFunc(nucleusAddC);
    }
    if(key == 'l')
    {
         glutDisplayFunc(nucleusAddL);
    }
    if(key == 'e')
    {
            glutDisplayFunc(nucleusAddE);
    }
    if(key == 'u')
    {
            glutDisplayFunc(nucleusAddU);
    }
    if(key == 's')
    {
            glutDisplayFunc(nucleusAddS);
    }
     if(key == 'x')
    {
            glutDisplayFunc(experiment);
    }
   
    glutPostRedisplay();
}

void nucleus()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(75,295,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'u');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(nucleuskeys);
}


void nucleusAddC()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,295,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'c');
    glutPostRedisplay();
    glutSwapBuffers();
}

void nucleusAddL()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(115,295,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'l');
    glutPostRedisplay();
    glutSwapBuffers();
}

void nucleusAddE()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(135,295,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'e');
    glutPostRedisplay();
    glutSwapBuffers();
}

void nucleusAddU()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,295,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'u');
    glutPostRedisplay();
    glutSwapBuffers();
}

void nucleusAddS()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,295,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 's');
    glutPostRedisplay();
    glutSwapBuffers();
}



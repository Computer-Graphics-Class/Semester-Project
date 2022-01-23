// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include "organic.cpp"


using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void pollinateAddO();
void pollinateAddL();
void pollinateAddl();
void pollinateAddI();
void pollinateAddN();
void pollinateAddA();
void pollinateAddT();
void pollinateAddE();
void pollinatekeys(unsigned char key, int x, int y)
{
    if(key == 'o')
    {
        glutDisplayFunc(pollinateAddO);
    }
   
    if(key == 'l')
    {
            glutDisplayFunc(pollinateAddL);
    }
    if(key == 'L')
    {
         glutDisplayFunc(pollinateAddl);
    }
    if(key == 'i')
    {
            glutDisplayFunc(pollinateAddI);
    }
    if(key == 'n')
    {
            glutDisplayFunc(pollinateAddN);
    }
    if(key == 'a')
    {
            glutDisplayFunc(pollinateAddA);
    }
   if(key == 't')
    {
            glutDisplayFunc(pollinateAddT);
    }
    if(key == 'e')
    {
            glutDisplayFunc(pollinateAddE);
    }
     if(key == 'r')
    {
            glutDisplayFunc(organic);
    }
    glutPostRedisplay();
}

void pollinate()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(55,395,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'p');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(pollinatekeys);
}

void pollinateAddO()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(55,375,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'o');
    glutPostRedisplay();
    glutSwapBuffers();
}

void pollinateAddL()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(55,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'l');
    glutPostRedisplay();
    glutSwapBuffers();
}

void pollinateAddl()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(55,335,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'l');
    glutPostRedisplay();
    glutSwapBuffers();
}

void pollinateAddI()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(55,315,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'i');
    glutPostRedisplay();
    glutSwapBuffers();
}

void pollinateAddN()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(55,295,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'n');
    glutPostRedisplay();
    glutSwapBuffers();
}

void pollinateAddA()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(55,275,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'a');
    glutPostRedisplay();
    glutSwapBuffers();
}

void pollinateAddT()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(55,255,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 't');
    glutPostRedisplay();
    glutSwapBuffers();
}


void pollinateAddE()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(55,235,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'e');
    glutPostRedisplay();
    glutSwapBuffers();
}


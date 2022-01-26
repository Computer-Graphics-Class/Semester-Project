// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include "summit.cpp"

using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void deforestationAddF();
void deforestationAddO();
void deforestationAddR();
void deforestationAddE();
void deforestationAddS();
void deforestationAddT();
void deforestationAddA();
void deforestationAddt();
void deforestationAddI();
void deforestationAddo();
void deforestationAddN();
void deforestationkeys(unsigned char key, int x, int y)
{
    if(key == 'f')
    {
            glutDisplayFunc(deforestationAddF);
    }
    if(key == 'o')
    {
            glutDisplayFunc(deforestationAddO);
    }
    if(key == 'r')
    {
         glutDisplayFunc(deforestationAddR);
    }
    if(key == 'e')
    {
            glutDisplayFunc(deforestationAddE);
    }
     if(key == 's')
    {
            glutDisplayFunc(deforestationAddS);
    }
    if(key == 't')
    {
            glutDisplayFunc(deforestationAddT);
    }
    if(key == 'a')
    {
            glutDisplayFunc(deforestationAddA);
    }
    if(key == 'T')
    {
            glutDisplayFunc(deforestationAddt);
    }
    if(key == 'i')
    {
            glutDisplayFunc(deforestationAddI);
    }
    if(key == 'O')
    {
            glutDisplayFunc(deforestationAddo);
    }
    if(key == 'n')
    {
            glutDisplayFunc(deforestationAddN);
    }
    if(key == 'u')
    {
            glutDisplayFunc(summit);
    }
    glutPostRedisplay();
}

void deforestation()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'd');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(deforestationkeys);
}

void deforestationAddF()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(135,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'f');
    glutPostRedisplay();
    glutSwapBuffers();
}

void deforestationAddO()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'o');
    glutPostRedisplay();
    glutSwapBuffers();
}

void deforestationAddR()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'r');
    glutPostRedisplay();
    glutSwapBuffers();
}


void deforestationAddE()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(195,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'e');
    glutPostRedisplay();
    glutSwapBuffers();
}


void deforestationAddS()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(215,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 's');
    glutPostRedisplay();
    glutSwapBuffers();
}

void deforestationAddT()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(235,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 't');
    glutPostRedisplay();
    glutSwapBuffers();
}

void deforestationAddA()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(255,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'a');
    glutPostRedisplay();
    glutSwapBuffers();
}

void deforestationAddt()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(275,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 't');
    glutPostRedisplay();
    glutSwapBuffers();
}

void deforestationAddI()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(295,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'i');
    glutPostRedisplay();
    glutSwapBuffers();
}

void deforestationAddo()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(315,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'o');
    glutPostRedisplay();
    glutSwapBuffers();
}

void deforestationAddN()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(335,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'n');
    glutPostRedisplay();
    glutSwapBuffers();
}




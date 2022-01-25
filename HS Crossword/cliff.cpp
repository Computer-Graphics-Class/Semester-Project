// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include "island.cpp"


using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void cliffAddI();
void cliffAddF();
void cliffAddf();
void cliffkeys(unsigned char key, int x, int y)
{
    if(key == 'i')
    {
            glutDisplayFunc(cliffAddI);
    }
    if(key == 'f')
    {
            glutDisplayFunc(cliffAddF);
    }
    if(key == 'F')
    {
         glutDisplayFunc(cliffAddf);
    }
    if(key == 's')
    {
         glutDisplayFunc(island);
    }
   
    glutPostRedisplay();
}

void cliff()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'l');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(cliffkeys);
}


void cliffAddI()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,495,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'i');
    glutPostRedisplay();
    glutSwapBuffers();
}

void cliffAddF()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,475,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'f');
    glutPostRedisplay();
    glutSwapBuffers();
}

void cliffAddf()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,455,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'f');
    glutPostRedisplay();
    glutSwapBuffers();
}





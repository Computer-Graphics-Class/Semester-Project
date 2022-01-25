// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include  "cliff.cpp"


using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 
void gulfAddL();
void gulfAddF();
void gulfkeys(unsigned char key, int x, int y)
{
    if(key == 'l')
    {
        glutDisplayFunc(gulfAddL);
    }
    if(key == 'f')
    {
            glutDisplayFunc(gulfAddF);
    }
    if(key == 'L')
    {
            glutDisplayFunc(cliff);
    }
    glutPostRedisplay();
}

void gulf()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(35,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'u');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(gulfkeys);
}

void gulfAddL()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(35,495,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'l');
    glutPostRedisplay();
    glutSwapBuffers();
}

void gulfAddF()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(35,475,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'f');
    glutPostRedisplay();
    glutSwapBuffers();
}






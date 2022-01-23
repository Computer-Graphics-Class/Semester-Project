// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include "pollinate.cpp"


using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void cosineAddS();
void cosineAddI();
void cosineAddN();
void cosineAddE();
void cosinekeys(unsigned char key, int x, int y)
{
    if(key == 's')
    {
        glutDisplayFunc(cosineAddS);
    }
   
    if(key == 'i')
    {
            glutDisplayFunc(cosineAddI);
    }
    if(key == 'n')
    {
         glutDisplayFunc(cosineAddN);
    }
    if(key == 'e')
    {
            glutDisplayFunc(cosineAddE);
    }
     if(key == 'p')
    {
            glutDisplayFunc(pollinate);
    }
   
    glutPostRedisplay();
}

void cosine()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,415,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'o');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(cosinekeys);
}

void cosineAddS()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,395,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 's');
    glutPostRedisplay();
    glutSwapBuffers();
}

void cosineAddI()
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

void cosineAddN()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,355,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'n');
    glutPostRedisplay();
    glutSwapBuffers();
}

void cosineAddE()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,335,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'e');
    glutPostRedisplay();
    glutSwapBuffers();
}

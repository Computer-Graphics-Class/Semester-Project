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

void arcticAddC();
void arcticAddT();
void arcticAddI();
void arcticAddc();
void arctickeys(unsigned char key, int x, int y)
{
    if(key == 'c')
    {
        glutDisplayFunc(arcticAddC);
    }
    if(key == 't')
    {
            glutDisplayFunc(arcticAddT);
    }
    if(key == 'i')
    {
            glutDisplayFunc(arcticAddI);
    }
    if(key == 'c')
    {
         glutDisplayFunc(arcticAddc);
    }
    
    glutPostRedisplay();
}

void arctic()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'r');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(arctickeys);
}

void arcticAddC()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(115,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'c');
    glutPostRedisplay();
    glutSwapBuffers();
}

void arcticAddT()
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

void arcticAddI()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'i');
    glutPostRedisplay();
    glutSwapBuffers();
}

void arcticAddc()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'c');
    glutPostRedisplay();
    glutSwapBuffers();
}







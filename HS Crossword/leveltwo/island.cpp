// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include "seashore.cpp"


using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void islandAddL();
void islandAddA();
void islandAddN();
void islandAddD();
void islandkeys(unsigned char key, int x, int y)
{
    if(key == 'l')
    {
        glutDisplayFunc(islandAddL);
    }
    if(key == 'a')
    {
            glutDisplayFunc(islandAddA);
    }
    if(key == 'n')
    {
            glutDisplayFunc(islandAddN);
    }
    if(key == 'd')
    {
         glutDisplayFunc(islandAddD);
    }
    if(key == 'e')
    {
         glutDisplayFunc(seashore);
    }
    
    glutPostRedisplay();
}

void island()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(115,495,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 's');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(islandkeys);
}

void islandAddL()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(135,495,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'l');
    glutPostRedisplay();
    glutSwapBuffers();
}

void islandAddA()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,495,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'a');
    glutPostRedisplay();
    glutSwapBuffers();
}

void islandAddN()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,495,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'n');
    glutPostRedisplay();
    glutSwapBuffers();
}

void islandAddD()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(195,495,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'd');
    glutPostRedisplay();
    glutSwapBuffers();
}







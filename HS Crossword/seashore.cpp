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

void seashoreAddA();
void seashoreAddS();
void seashoreAddH();
void seashoreAddO();
void seashoreAddR();
void seashoreAddE();
void seashorekeys(unsigned char key, int x, int y)
{
   
    if(key == 'a')
    {
            glutDisplayFunc(seashoreAddA);
    }
     if(key == 's')
    {
        glutDisplayFunc(seashoreAddS);
    }
    if(key == 'h')
    {
            glutDisplayFunc(seashoreAddH);
    }
    if(key == 'o')
    {
         glutDisplayFunc(seashoreAddO);
    }
     if(key == 'r')
    {
            glutDisplayFunc(seashoreAddR);
    }
    if(key == 'e')
    {
            glutDisplayFunc(seashoreAddE);
    }
    
    glutPostRedisplay();
}

void seashore()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'e');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(seashorekeys);
}

void seashoreAddA()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(115,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'a');
    glutPostRedisplay();
    glutSwapBuffers();
}

void seashoreAddS()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(135,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 's');
    glutPostRedisplay();
    glutSwapBuffers();
}

void seashoreAddH()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(155,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'h');
    glutPostRedisplay();
    glutSwapBuffers();
}

void seashoreAddO()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'o');
    glutPostRedisplay();
    glutSwapBuffers();
}

void seashoreAddR()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(195,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'r');
    glutPostRedisplay();
    glutSwapBuffers();
}

void seashoreAddE()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(195,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'e');
    glutPostRedisplay();
    glutSwapBuffers();
}






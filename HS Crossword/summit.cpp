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

void summitAddM();
void summitAddm();
void summitAddI();
void summitAddT();
void summitkeys(unsigned char key, int x, int y)
{
    if(key == 'm')
    {
        glutDisplayFunc(summitAddM);
    }
    if(key == 'M')
    {
            glutDisplayFunc(summitAddm);
    }
    if(key == 'i')
    {
            glutDisplayFunc(summitAddI);
    }
    if(key == 't')
    {
         glutDisplayFunc(summitAddT);
    }
    
    glutPostRedisplay();
}

void summit()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
  
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(95,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'u');
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(summitkeys);
}

void summitAddM()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(115,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'm');
    glutPostRedisplay();
    glutSwapBuffers();
}

void summitAddm()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(135,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 'm');
    glutPostRedisplay();
    glutSwapBuffers();
}

void summitAddI()
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

void summitAddT()
{
	//glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
    //Display the text
    glColor3f(0,0,1);
    glRasterPos3f(175,515,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, 't');
    glutPostRedisplay();
    glutSwapBuffers();
}







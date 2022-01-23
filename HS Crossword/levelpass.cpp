// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include "leveltwo.cpp"

using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void addLetter();
void levelPassKeys(unsigned char key, int x, int y)
{
    if(key == 'N')
    {
        glutDisplayFunc(levelTwo);
    }

    if(key == 'n')
    {
        glutDisplayFunc(levelTwo);
    }

	if(key == 'Z')
    {
        glutHideWindow();
    }
 
   
    glutPostRedisplay();
}

void levelPass()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
  
   	glClearColor(0, 0, 0, 0);
	glColor3f(1,0,0);
	glRasterPos3f(300,350,0);
	char msg1[] = "LEVEL PASSED!!!";
	for(int i=0; i<strlen(msg1); i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg1[i]);
	}

	glColor3f(0,0,1);
	glRasterPos3f(300,150,0);
	char msg2[] = "Press N to start the next level";
	for(int i=0; i<strlen(msg2); i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg2[i]);
	}

   	glColor3f(0,0,1);
		glRasterPos3f(650,20,0);
		char msg3[] = "Press Z to exit";
		for(int i=0; i<strlen(msg3); i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg3[i]);
		}
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(levelPassKeys);
}





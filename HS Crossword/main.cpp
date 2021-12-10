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

void init()
{
    // Set display window color to as glClearColor(R,G,B,Alpha)
    glClearColor(1, 1,1, 0);
    // Set projection parameters.
    glMatrixMode(GL_PROJECTION);
    // Set 2D Transformation as gluOrtho2D(Min Width, Max Width, Min Height, Max Height)
    gluOrtho2D(0.0, 800, 0.0, 600);
}


void home()
{   
    //glClear(GL_COLOR_BUFFER_BIT);     // Clear display window

	glClearColor(0, 0, 0, 0);
	glColor3f(1,0,0);
	glRasterPos3f(300,350,0);
	char msg1[] = "HS CROSSWORDS";
	for(int i=0; i<strlen(msg1); i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg1[i]);
	}

	glColor3f(0,0,1);
	glRasterPos3f(300,150,0);
	char msg2[] = "Press X to start the game";
	for(int i=0; i<strlen(msg2); i++)
	{
	glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg2[i]);
	}
    // Process all OpenGL routine s as quickly as possible
    glFlush();
}

void display()
{
	glClear(GL_COLOR_BUFFER_BIT|GL_DEPTH_BUFFER_BIT);
	glClearColor(0.552, 0.6, 0.682, 0);
	
	glColor3f(0,0,1);
		glRasterPos3f(0,580,0);
		char msg1[] = "Start from the top, left to right, and diagonally from the left most to right";
		for(int i=0; i<strlen(msg1); i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg1[i]);
		}
		
		glColor3f(0,0,1);
		glRasterPos3f(650,20,0);
		char msg2[] = "Press Z to exit";
		for(int i=0; i<strlen(msg2); i++)
		{
			glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg2[i]);
		}
	glutPostRedisplay();
	glutSwapBuffers();
}

void exit()
{
    glutHideWindow();
}

void keys(unsigned char key, int x, int y)
{
    if(key == 'X')
    {
        glutDisplayFunc(display);
    }

	if(key == 'Z')
    {
        glutDisplayFunc(exit);
    }
    glutPostRedisplay();
}

int main(int argc, char** argv)
{
    // Initialize GLUT
    glutInit(&argc, argv);
    // Set display mode
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    // Set top - left display window position.
    glutInitWindowPosition(50, 10);
    // Set display window width and height
    glutInitWindowSize(900, 650);
    // Create display window with the given title
    glutCreateWindow("HS Crosswords");
    // Execute initialization procedure
    init();
    // Send graphics to display window
    glutDisplayFunc(home);
    glutKeyboardFunc(keys);
    // Display everything and wait.
    glutMainLoop();
}




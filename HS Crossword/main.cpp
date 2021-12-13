// for MS Windows
//#include<Windows.h>       
#include <stdio.h>
#include <stdlib.h> //make sure stdlib goes before glut
#include <glut.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include <gl/GL.h>
#include "earth.cpp"


using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 


void earth();
void display();
void keys();
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
    glColor3f(1, 0, 0);
    glRasterPos3f(250, 350, 0);
    char msg1[] = "WELCOME TO H.S CROSSWORD";

    for (int i = 0; i < strlen(msg1); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24, msg1[i]);
    }

    glColor3f(1, 1, 1);
    glRasterPos3f(300, 300, 0);
    char inst[] = "Let's test your knowledge";

    for (int i = 0; i < strlen(inst); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, inst[i]);
    }

    glColor3f(1, 1, 1);
    glRasterPos3f(230, 270, 0);
    char msg2[] = "Press X to start the game, Press Z to exit";
    for (int i = 0; i < strlen(msg2); i++)
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
	
	glColor3f(0,0,0);
    glRasterPos3f(5,580,0);
    char msg1[] = "Start from the top, left to right, and diagonally from the left most to right";
    for(int i=0; i<strlen(msg1); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg1[i]);
    }

    glColor3f(0,0,1);
     glRasterPos3f(420,550,0);
    char title[] = "Level 1 Questions to answer: (Science)";
    for(int j=0; j<strlen(title); j++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, title[j]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(420,520,0);
    char question2[] = "1. Which planet supports life?";
    for(int k=0; k<strlen(question2); k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question2[k]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(420,480,0);
    char question3[] = "2. How many colors does a rainbow have?";
    for(int l=0; l<strlen(question3); l++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question3[l]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(420,460,0);
    char question4[] = "3. Changing the direction of a wave results in?";
    for(int m=0; m<strlen(question4); m++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question4[m]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(420,440,0);
    char question5[] = "4. Which planet is the nearest to the sun?";
    for(int n=0; n<strlen(question5); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question5[n]);
    }


        //Draw the first word boxes
        int a = 30;
        int b = 550;
        int c = 50;
        int d = 530;
        for (int i = 0; i < 5; i++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(a, b);
            glVertex2i(c, b);
            glVertex2i(c, d);
            glVertex2i(a, d);
            glEnd();

             //lines of square
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(a, b); 
            glVertex2i(c, b); 
            glVertex2i(c, b);
            glVertex2i(c, d);
            glVertex2i(c, d);                                               
            glVertex2i(a, d);
            glVertex2i(a, d); 
            glVertex2i(a, b);
            glEnd();

            //increment x coordinates for the square
            a = a+20;
            c = c+20;
        }  

        //Draw the second word boxes
        int e = 90;
        int f = 530;
        int g = 110;
        int h = 510;
        for (int i = 0; i < 6; i++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(e, f);
            glVertex2i(g, f);
            glVertex2i(g, h);
            glVertex2i(e, h);
            glEnd();

             //lines of square
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(e, f); 
            glVertex2i(g, f); 
            glVertex2i(g, f);
            glVertex2i(g, h);
            glVertex2i(g, h);                                               
            glVertex2i(e, h);
            glVertex2i(e, h); 
            glVertex2i(e, f);
            glEnd();

            e = e+20;
            g = g+20;
        }  
        
        //Draw the third horizontal word boxes
        int i = 170;
        int j = 530;
        int k = 190;
        int l = 510;
        for (int arr = 0; arr < 6; arr++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(i, j);
            glVertex2i(k, j);
            glVertex2i(k, l);
            glVertex2i(i, l);
            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(i, j); 
            glVertex2i(k, j); 
            glVertex2i(k, j);
            glVertex2i(k, l);
            glVertex2i(k, l);                                               
            glVertex2i(i, l);
            glVertex2i(i, l); 
            glVertex2i(i, j);
            glEnd();

            j = j-20;
            l = l-20;
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

void keys(unsigned char key, int x, int y)
{
    if(key == 'X')
    {
        glutDisplayFunc(display);
    }

	if(key == 'Z')
    {
        glutHideWindow();
    }

    if(key == 'e')
    {
            glutDisplayFunc(earth);
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




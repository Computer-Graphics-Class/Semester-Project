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

void levelTwoKeys(unsigned char key, int x, int y)
{
    glutPostRedisplay();
}

void levelTwo()
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
     glRasterPos3f(410,550,0);
    char title[] = "Level 2 Questions to answer: (Geography)";
    for(int j=0; j<strlen(title); j++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, title[j]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,520,0);
    char question1[] = "1. A large mass of ice"; //glacier
    for(int k=0; k<strlen(question1); k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question1[k]);
    }
    
    glColor3f(0,0,0);
    glRasterPos3f(410,500,0);
    char question2[] = "2. A large area of sea partly surrounded by land"; //gulf
    for(int k=0; k<strlen(question2); k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question2[k]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,480,0);
    char question3[] = "3. High rock area with a very steep side"; //cliff
    //ans= reflux
    for(int l=0; l<strlen(question3); l++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question3[l]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,460,0);
    char question4[] = "4. Land completely surrounded by water"; //island
    for(int n=0; n<strlen(question4); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question4[n]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,440,0);
    char question5[] = "5. Land along the edge of the sea"; //seashore
    for(int n=0; n<strlen(question5); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question5[n]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,420,0);
    char question6[] = "6. The north pole region";  //arctic
    for(int n=0; n<strlen(question6); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question6[n]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,400,0);
    char question7[] = "7. A small hill of sand formed by the wind";  //dune
    for(int n=0; n<strlen(question7); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question7[n]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,380,0);
    char question8[] = "8. Regarding using the sun's energy"; //solar
    for(int n=0; n<strlen(question8); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question8[n]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,360,0);
    char question9[] = "9. The cutting down of trees";  //deforestation
    for(int n=0; n<strlen(question9); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question9[n]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,360,0);
    char question10[] = "10. THe highest point of something";  //summit
    for(int n=0; n<strlen(question10); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question10[n]);
    }


    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(levelTwoKeys);
}



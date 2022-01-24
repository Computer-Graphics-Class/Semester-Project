// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
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
	
	glColor3f(0,0,0);
    glRasterPos3f(5,580,0);
    char msg1[] = "Start from the top, left to right, and diagonally from the left most to right";
    for(int i=0; i<strlen(msg1); i++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, msg1[i]);
    }

    glColor3f(0,0,1);
     glRasterPos3f(410,550,0);
    char title[] = "Level 1 Questions to answer: (Science)";
    for(int j=0; j<strlen(title); j++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, title[j]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,520,0);
    char question1[] = "1. Which planet supports life?";
    for(int k=0; k<strlen(question1); k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question1[k]);
    }
    
    glColor3f(0,0,0);
    glRasterPos3f(410,500,0);
    char question2[] = "2. Which planet has a ring around it?";
    for(int k=0; k<strlen(question2); k++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question2[k]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,480,0);
    char question3[] = "3. Changing the direction of a wave results in?";
    //ans= reflux
    for(int l=0; l<strlen(question3); l++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question3[l]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,460,0);
    char question4[] = "4. Which planet is the nearest to the sun?";
    for(int n=0; n<strlen(question4); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question4[n]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,440,0);
    char question5[] = "5. The opposite of sine";
    for(int n=0; n<strlen(question5); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question5[n]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,420,0);
    char question6[] = "6. Transferring pollen from the male anther to female stigma";
    for(int n=0; n<strlen(question6); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question6[n]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,400,0);
    char question7[] = "7. Relating to living matter";
    for(int n=0; n<strlen(question7); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question7[n]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,380,0);
    char question8[] = "8. The brain of the cell";
    for(int n=0; n<strlen(question8); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question8[n]);
    }

    glColor3f(0,0,0);
    glRasterPos3f(410,360,0);
    char question9[] = "9. Something to test a theory or a science fact";
    for(int n=0; n<strlen(question9); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question9[n]);
    }
    //Display the label
    glColor3f(0,0,0);
    glRasterPos3f(20,535,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '1');
        //Draw the first word boxes(earth)
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

        glColor3f(0,0,0);
        glRasterPos3f(80,515,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '2');
        //Draw the second word boxes(saturn)
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

             //lines of squere
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

        glColor3f(0,0,0);
        glRasterPos3f(175,535,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '3');
        //Draw the third horizontal word boxes(reflux)
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

        glColor3f(0,0,0);
        glRasterPos3f(80,435,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '4');
          //Draw the fourth word boxes(mercury)
        int m = 90;
        int n = 450;
        int o = 110;
        int p = 430;
        for (int i = 0; i < 7; i++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(m, n);
            glVertex2i(o, n);
            glVertex2i(o, p);
            glVertex2i(m, p);
            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(m, n); 
            glVertex2i(o, n); 
            glVertex2i(o, n);
            glVertex2i(o, p);
            glVertex2i(o, p);                                               
            glVertex2i(m, p);
            glVertex2i(m, p); 
            glVertex2i(m, n);
            glEnd();

            m = m+20;
            o = o+20;
        }  

        glColor3f(0,0,0);
        glRasterPos3f(155,455,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '5');
        //Draw the fifth word boxes(cosine)
        int mm = 150;
        int nn = 430;
        int oo = 170;
        int pp = 410;
        for (int ii = 0; ii < 5; ii++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(mm, nn);
            glVertex2i(oo, nn);
            glVertex2i(oo, pp);
            glVertex2i(mm, pp);
            glEnd();

             //lines of square
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(mm, nn); 
            glVertex2i(oo, nn); 
            glVertex2i(oo, nn);
            glVertex2i(oo, pp);
            glVertex2i(oo, pp);                                               
            glVertex2i(mm, pp);
            glVertex2i(mm, pp); 
            glVertex2i(mm, nn);
            glEnd();

            nn = nn-20;
            pp = pp-20;
        }  
        
        glColor3f(0,0,0);
        glRasterPos3f(55,415,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '6');
        //Draw the sixth horizontal word boxes (pollinate)
        int q = 50;
        int r = 410;
        int s = 70;
        int t = 390;
        for (int ar = 0; ar < 9; ar++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(q, r);
            glVertex2i(s, r);
            glVertex2i(s, t);
            glVertex2i(q, t);
            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(q, r); 
            glVertex2i(s, r); 
            glVertex2i(s, r);
            glVertex2i(s, t);
            glVertex2i(s, t);                                               
            glVertex2i(q, t);
            glVertex2i(q, t); 
            glVertex2i(q, r);
            glEnd();

            r = r-20;
            t = t-20;
        }  

        glColor3f(0,0,0);
        glRasterPos3f(35,375,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '7');
         //Draw the seventh word boxes(organic)
        int u = 70;
        int v = 390;
        int w = 90;
        int x = 370;
        for (int i = 0; i < 6; i++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(u, v);
            glVertex2i(w, v);
            glVertex2i(w, x);
            glVertex2i(u, x);
            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(u, v); 
            glVertex2i(w, v); 
            glVertex2i(w, v);
            glVertex2i(w, x);
            glVertex2i(w, x);                                               
            glVertex2i(u, x);
            glVertex2i(u, x); 
            glVertex2i(u, v);
            glEnd();

            u = u+20;
            w = w+20;
        }  

        glColor3f(0,0,0);
        glRasterPos3f(35,295,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '8');
         //Draw the eigth word boxes(nucleus)
        int aa = 70;
        int ab = 310;
        int ac = 90;
        int ad = 290;
        for (int i = 0; i < 6; i++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(aa, ab);
            glVertex2i(ac, ab);
            glVertex2i(ac, ad);
            glVertex2i(aa, ad);
            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(aa, ab); 
            glVertex2i(ac, ab); 
            glVertex2i(ac, ab);
            glVertex2i(ac, ad);
            glVertex2i(ac, ad);                                               
            glVertex2i(aa, ad);
            glVertex2i(aa, ad); 
            glVertex2i(aa, ab);
            glEnd();

            aa = aa+20;
            ac = ac+20;
        } 
        
        glColor3f(0,0,0);
        glRasterPos3f(35,235,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '9');
         //Draw the nineth word boxes(experiment)
        int ba = 70;
        int bb = 250;
        int bc = 90;
        int bd = 230;
        for (int i = 0; i < 9; i++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(ba, bb);
            glVertex2i(bc, bb);
            glVertex2i(bc, bd);
            glVertex2i(ba, bd);
            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(ba, bb); 
            glVertex2i(bc, bb); 
            glVertex2i(bc, bb);
            glVertex2i(bc, bd);
            glVertex2i(bc, bd);                                               
            glVertex2i(ba, bd);
            glVertex2i(ba, bd); 
            glVertex2i(ba, bb);
            glEnd();

            ba = ba+20;
            bc = bc+20;
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

    if(key == 'x')
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
    
    if(key == 's')
    {
            glutDisplayFunc(saturn);
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
    glutInitWindowSize(1000, 650);
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




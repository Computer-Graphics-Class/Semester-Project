// for MS Windows
//#include<Windows.h>   
#include <GL/glut.h>      
#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <iostream>
#include <string.h>
#include <fstream>
#include "leveltwo/glacier.cpp"

using namespace std;
//Note: GLglut.h path depending on the system in use  
//Linux compile: 

void levelTwoKeys(unsigned char key, int x, int y)
{
	if(key == 'Z')
    {
        glutHideWindow();
    }

    if(key == 'g')
    {
            glutDisplayFunc(glacier);
    }
    
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
    glRasterPos3f(410,340,0);
    char question10[] = "10. The highest point of something";  //summit
    for(int n=0; n<strlen(question10); n++)
    {
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, question10[n]);
    }


     //Display the label
    glColor3f(0,0,0);
    glRasterPos3f(20,535,0);
    glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '1');
        //Draw the first word boxes(glacier)
        int ta = 30;
        int tb = 550;
        int tc = 50;
        int td = 530;
        for (int ti = 0; ti < 7; ti++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(ta, tb);
            glVertex2i(tc, tb);
            glVertex2i(tc, td);
            glVertex2i(ta, td);
            glEnd();

             //lines of square
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(ta, tb); 
            glVertex2i(tc, tb); 
            glVertex2i(tc, tb);
            glVertex2i(tc, td);
            glVertex2i(tc, td);                                               
            glVertex2i(ta, td);
            glVertex2i(ta, td); 
            glVertex2i(ta, tb);
            glEnd();

            //increment x coordinates for the square
            ta = ta+20;
            tc = tc+20;
        }  

        glColor3f(0,0,0);
        glRasterPos3f(35,555,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '2');
        //Draw the second horizontal word boxes(gulf)
        int it = 30;
        int tj = 550;
        int tk = 50;
        int tl = 530;
        for (int tarr = 0; tarr < 4; tarr++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(it, tj);
            glVertex2i(tk, tj);
            glVertex2i(tk, tl);
            glVertex2i(it, tl);

            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(it, tj); 
            glVertex2i(tk, tj); 
            glVertex2i(tk, tj);
            glVertex2i(tk, tl);
            glVertex2i(tk, tl);                                               
            glVertex2i(it, tl);
            glVertex2i(it, tl); 
            glVertex2i(it, tj);
            glEnd();

            tj = tj-20;
            tl = tl-20;
        }  

        glColor3f(0,0,0);
        glRasterPos3f(95,555,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '3');
        //Draw the third word boxes(cliff)
        int tmm = 90;
        int tnn = 550;
        int too = 110;
        int tpp = 530;
        for (int tii = 0; tii < 5; tii++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(tmm, tnn);
            glVertex2i(too, tnn);
            glVertex2i(too, tpp);
            glVertex2i(tmm, tpp);
            glEnd();

             //lines of square
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(tmm, tnn); 
            glVertex2i(too, tnn); 
            glVertex2i(too, tnn);
            glVertex2i(too, tpp);
            glVertex2i(too, tpp);                                               
            glVertex2i(tmm, tpp);
            glVertex2i(tmm, tpp); 
            glVertex2i(tmm, tnn);
            glEnd();

            tnn = tnn-20;
            tpp = tpp-20;
        }  
        glColor3f(0,0,0);
        glRasterPos3f(75,495,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '4');
        //Draw the fourth word boxes(island)
        int te = 90;
        int tf = 510;
        int tg = 110;
        int th = 490;
        for (int i = 0; i < 6; i++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(te, tf);
            glVertex2i(tg, tf);
            glVertex2i(tg, th);
            glVertex2i(te, th);
            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(te, tf); 
            glVertex2i(tg, tf); 
            glVertex2i(tg, tf);
            glVertex2i(tg, th);
            glVertex2i(tg, th);                                               
            glVertex2i(te, th);
            glVertex2i(te, th); 
            glVertex2i(te, tf);
            glEnd();

            te = te+20;
            tg = tg+20;
        }  
        
        glColor3f(0,0,0);
        glRasterPos3f(115,515,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '5');
        //Draw the fifth horizontal word boxes (seashore)
        int tq = 110;
        int tr = 490;
        int ts = 130;
        int tt = 510;
        for (int tar = 0; tar < 8; tar++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(tq, tr);
            glVertex2i(ts, tr);
            glVertex2i(ts, tt);
            glVertex2i(tq, tt);
            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(tq, tr); 
            glVertex2i(ts, tr); 
            glVertex2i(ts, tr);
            glVertex2i(ts, tt);
            glVertex2i(ts, tt);                                               
            glVertex2i(tq, tt);
            glVertex2i(tq, tt); 
            glVertex2i(tq, tr);
            glEnd();

            tr = tr-20;
            tt = tt-20;
        }   

        glColor3f(0,0,0);
        glRasterPos3f(155,515,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '6');
        //Draw the sixth horizontal word boxes (arctic)
        int taa = 150;
        int tab = 490;
        int tac = 170;
        int tad = 510;
        for (int ar = 0; ar < 6; ar++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(taa, tab);
            glVertex2i(tac, tab);
            glVertex2i(tac, tad);
            glVertex2i(taa, tad);
            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(taa, tab); 
            glVertex2i(tac, tab); 
            glVertex2i(tac, tab);
            glVertex2i(tac, tad);
            glVertex2i(tac, tad);                                               
            glVertex2i(taa, tad);
            glVertex2i(taa, tad); 
            glVertex2i(taa, tab);
            glEnd();

            tab = tab-20;
            tad = tad-20;
        }  

        glColor3f(0,0,0);
        glRasterPos3f(195,515,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '7');
         //Draw the seventh horizontal word boxes (dune)
        int tba = 190;
        int tbb = 490;
        int tbc = 210;
        int tbd = 510;
        for (int ar = 0; ar < 4; ar++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(tba, tbb);
            glVertex2i(tbc, tbb);
            glVertex2i(tbc, tbd);
            glVertex2i(tba, tbd);
            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(tba, tbb); 
            glVertex2i(tbc, tbb); 
            glVertex2i(tbc, tbb);
            glVertex2i(tbc, tbd);
            glVertex2i(tbc, tbd);                                               
            glVertex2i(tba, tbd);
            glVertex2i(tba, tbd); 
            glVertex2i(tba, tbb);
            glEnd();

            tbb = tbb-20;
            tbd = tbd-20;
        }  
        

        glColor3f(0,0,0);
        glRasterPos3f(20,375,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '8');
        //Draw the eigth word boxes(solar)
        int tm = 30;
        int tn = 390;
        int to = 50;
        int tp = 370;
        for (int tti = 0; tti < 5; tti++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(tm, tn);
            glVertex2i(to, tn);
            glVertex2i(to, tp);
            glVertex2i(tm, tp);
            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(tm, tn); 
            glVertex2i(to, tn); 
            glVertex2i(to, tn);
            glVertex2i(to, tp);
            glVertex2i(to, tp);                                               
            glVertex2i(tm, tp);
            glVertex2i(tm, tp); 
            glVertex2i(tm, tn);
            glEnd();

            tm = tm+20;
            to = to+20;
        }  

        glColor3f(0,0,0);
        glRasterPos3f(80,355,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '9');
         //Draw the ninth word boxes(deforestation)
        int tu = 90;
        int tv = 370;
        int tw = 110;
        int tx = 350;
        for (int li = 0; li < 13; li++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(tu, tv);
            glVertex2i(tw, tv);
            glVertex2i(tw, tx);
            glVertex2i(tu, tx);
            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(tu, tv); 
            glVertex2i(tw, tv); 
            glVertex2i(tw, tv);
            glVertex2i(tw, tx);
            glVertex2i(tw, tx);                                               
            glVertex2i(tu, tx);
            glVertex2i(tu, tx); 
            glVertex2i(tu, tv);
            glEnd();

            tu = tu+20;
            tw = tw+20;
        }  

        glColor3f(0,0,0);
        glRasterPos3f(215,375,0);
        glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '1');
         glutBitmapCharacter(GLUT_BITMAP_9_BY_15, '0');
         //Draw the tenth horizontal word boxes (summit)
        int tca = 210;
        int tcb = 350;
        int tcc = 230;
        int tcd = 370;
        for (int ar = 0; ar < 6; ar++) 
        {
            glColor3f(1, 1, 1);
            glBegin(GL_POLYGON);
            glVertex2i(tca, tcb);
            glVertex2i(tcc, tcb);
            glVertex2i(tcc, tcd);
            glVertex2i(tca, tcd);
            glEnd();

             //lines of squere
            glColor3f(0, 0, 0);
            glLineWidth(1);
            glBegin(GL_LINES);
            glVertex2i(tca, tcb); 
            glVertex2i(tcc, tcb); 
            glVertex2i(tcc, tcb);
            glVertex2i(tcc, tcd);
            glVertex2i(tcc, tcd);                                               
            glVertex2i(tca, tcd);
            glVertex2i(tca, tcd); 
            glVertex2i(tca, tcb);
            glEnd();

            tcb = tcb-20;
            tcd = tcd-20;
        }  
    glutPostRedisplay();
    glutSwapBuffers();
    glutKeyboardFunc(levelTwoKeys);
}



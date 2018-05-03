#include <iostream>
#include <GL/glut.h>
#include <GL/glu.h>
void renderScene_1(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    //glMatrixMode(GL_PROJECTION);
    //glLoadIdentity();
    //glFrustum(0.75f,0.75f,0.75f,0.75f,0.75f,1.0f);
    glColor3f(1.0f,1.0f,1.0f);
    glBegin(GL_POLYGON);
        glVertex2f(-0.5f,-0.5f);
        glVertex2f(-0.5f,0.5f);
        glVertex2f(0.5f,0.5f);
        glVertex2f(0.5f,-0.5f);
    glEnd();
    glFlush();
}

void renderScene_2(){
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
    glBegin(GL_QUADS);
        //Top
        glColor3f(1.0f,0.0f,0.0f);
        glVertex3f(-0.5f,-0.5f,-0.5f);
        glVertex3f(-0.5f,0.5f,-0.5f);
        glVertex3f(0.5f,0.5f,-0.5f);
        glVertex3f(0.5f,-0.5f,-0.5f);
        //Up
        glColor3f(1.0f,0.0f,0.0f);
        glVertex3f(0.5f,-0.5f,0.5f);
        glVertex3f(0.5f,0.5f,0.5f);
        glVertex3f(-0.5f,0.5f,0.5f);
        glVertex3f(-0.5f,-0.5f,0.5f);
        //Left
        glColor3f(0.0f,0.0f,1.0f);
        glVertex3f(0.5f,-0.5f,0.5f);
        glVertex3f(0.5f,-0.5f,-0.5f);
        glVertex3f(-0.5f,-0.5f,-0.5f);
        glVertex3f(-0.5f,-0.5f,0.5f);
        //Right
        glColor3f(0.0f,0.0f,1.0f);
        glVertex3f(0.5f,0.5f,0.5f);
        glVertex3f(0.5f,0.5f,-0.5f);
        glVertex3f(-0.5f,0.5f,-0.5f);
        glVertex3f(-0.5f,0.5f,0.5f);
        //Front
        glColor3f(0.0f,1.0f,0.0f);
        glVertex3f(0.5f,0.5f,0.5f);
        glVertex3f(0.5f,0.5f,-0.5f);
        glVertex3f(0.5f,-0.5f,-0.5f);
        glVertex3f(0.5f,-0.5f,0.5f);
        //Back
        glColor3f(0.0f,1.0f,0.0f);
        glVertex3f(-0.5f,0.5f,0.5f);
        glVertex3f(-0.5f,0.5f,-0.5f);
        glVertex3f(-0.5f,-0.5f,-0.5f);
        glVertex3f(-0.5f,-0.5f,0.5f);
    
    glEnd();
    glFlush();
}



int main(int argc, char * argv[]) {
    glutInit(&argc,argv);
    //glMatrixMode(GL_PROJECTION);
    //glLoadIdentity();
    //glFrustum(0.75f,0.75f,0.75f,0.75f,0.75f,1.0f);
    //glutCreateWindow("Draw Triangle");
    //glutDisplayFunc(renderScene_1);
    glutCreateWindow("Draw cube");
    glutDisplayFunc(renderScene_2);
    glutMainLoop();
    return 0;
}
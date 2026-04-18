#include <GL/glut.h>

void display() {
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(-30, 1, 1, 10);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0, 0, -6);
    glRotatef(-30, 1, 1, 0);

    glBegin(GL_POLYGON);


    glColor3f(0.6, 0.2, 0.8);
    glVertex3f(-1, -0.5, 0.5);
    glVertex3f( 1, -0.5, 0.5);
    glVertex3f( 1,  0.5, 0.5);
    glVertex3f(-1,  0.5, 0.5);


    glColor3f(0.5, 0.1, 0.7);
    glVertex3f(-1, -0.5, -0.5);
    glVertex3f(-1,  0.5, -0.5);
    glVertex3f( 1,  0.5, -0.5);
    glVertex3f( 1, -0.5, -0.5);


    glColor3f(0.4, 0.1, 0.6);
    glVertex3f(-1, -0.5, -0.5);
    glVertex3f(-1, -0.5,  0.5);
    glVertex3f(-1,  0.5,  0.5);
    glVertex3f(-1,  0.5, -0.5);


    glColor3f(0.5, 0.2, 0.7);
    glVertex3f(1, -0.5, -0.5);
    glVertex3f(1,  0.5, -0.5);
    glVertex3f(1,  0.5,  0.5);
    glVertex3f(1, -0.5,  0.5);


    glColor3f(0.7, 0.3, 0.9);
    glVertex3f(-1, 0.5, -0.5);
    glVertex3f(-1, 0.5,  0.5);
    glVertex3f( 1, 0.5,  0.5);
    glVertex3f( 1, 0.5, -0.5);


    glColor3f(0.5, 0.2, 0.7);
    glVertex3f(-1, -0.5, -0.5);
    glVertex3f( 1, -0.5, -0.5);
    glVertex3f( 1, -0.5,  0.5);
    glVertex3f(-1, -0.5,  0.5);

    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutCreateWindow("3D Cuboid shape by Alvi");

    glEnable(GL_DEPTH_TEST);
    glutDisplayFunc(display);
    glutMainLoop();
}

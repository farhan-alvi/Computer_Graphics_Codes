#include <GL/glut.h>

void display()
{
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT);


    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.25, 0.65);
        glVertex2f(0.25, 0.65);
        glVertex2f(0.45, 0.5);
        glVertex2f(0.5, 0.1);
        glVertex2f(0.4, -0.4);
        glVertex2f(0.2, -0.7);
        glVertex2f(-0.2, -0.7);
        glVertex2f(-0.4, -0.4);
        glVertex2f(-0.5, 0.1);
        glVertex2f(-0.45, 0.5);
    glEnd();


    glColor3f(1,1,1);
    glBegin(GL_POLYGON);
        glVertex2f(-0.20, 0.58);
        glVertex2f(0.20, 0.58);
        glVertex2f(0.34, 0.38);
        glVertex2f(0.32, -0.10);
        glVertex2f(0.25, -0.30);
        glVertex2f(0.15, -0.50);
        glVertex2f(0.0, -0.60);
        glVertex2f(-0.15, -0.50);
        glVertex2f(-0.25, -0.30);
        glVertex2f(-0.32, -0.10);
        glVertex2f(-0.34, 0.38);
    glEnd();


    glColor3f(0,0,0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.09, 0.6);
        glVertex2f(0.09, 0.6);
        glVertex2f(0.06, 0.25);
        glVertex2f(-0.06, 0.25);
    glEnd();


    glBegin(GL_POLYGON);
        glVertex2f(-0.28, 0.1);
        glVertex2f(-0.1, 0.05);
        glVertex2f(-0.12, -0.02);
        glVertex2f(-0.3, 0.02);
    glEnd();


    glBegin(GL_POLYGON);
        glVertex2f(0.28, 0.1);
        glVertex2f(0.1, 0.05);
        glVertex2f(0.12, -0.02);
        glVertex2f(0.3, 0.02);
    glEnd();

    glFlush();
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,600);
    glutCreateWindow("Iron Man");

    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}

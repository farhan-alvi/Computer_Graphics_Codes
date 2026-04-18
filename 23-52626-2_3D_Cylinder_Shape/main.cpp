#include <GL/glut.h>
#include <math.h>

void display() {
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(30, 1, 2, 10);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0, 0, -6);
    glRotatef(-45, 1, 1, 0);

    float radius = 0.5;
    float height = 1.5;
    int segments = 40;

    float angle;


    glBegin(GL_QUAD_STRIP);
    glColor3f(1, 0.6, 0);
    for(int i = 0; i <= segments; i++) {
        angle = 2 * 3.1416 * i / segments;
        float x = radius * cos(angle);
        float y = radius * sin(angle);

        glVertex3f(x, y, 0);
        glVertex3f(x, y, height);
    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1, 0.9, 0.2);
    for(int i = 0; i < segments; i++) {
        angle = 2 * 3.1416 * i / segments;
        float x = radius * cos(angle);
        float y = radius * sin(angle);

        glVertex3f(x, y, height);
    }
    glEnd();


    glBegin(GL_POLYGON);
    glColor3f(1, 0.6, 0);
    for(int i = 0; i < segments; i++) {
        angle = 2 * 3.1416 * i / segments;
        float x = radius * cos(angle);
        float y = radius * sin(angle);

        glVertex3f(x, y, 0);
    }
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutCreateWindow("3D Cylinder Shape by Alvi");

    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

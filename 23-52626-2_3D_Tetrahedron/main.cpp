#include <GL/glut.h>

void display() {
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);

    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(40, 1, 1, 10);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0, 0, -6);
    glRotatef(30, 1, 1, 0);

    glBegin(GL_TRIANGLES);

    glColor3f(0,0.6,0);
    glVertex3f(0,1,0);
    glVertex3f(-1,-1,1);
    glVertex3f(1,-1,1);

    glColor3f(0,0.4,0.8);
    glVertex3f(0,1,0);
    glVertex3f(1,-1,1);
    glVertex3f(1,-1,-1);

    glColor3f(1,0.7,0.5);
    glVertex3f(0,1,0);
    glVertex3f(1,-1,-1);
    glVertex3f(-1,-1,-1);

    glColor3f(0.6,0.8,0.4);
    glVertex3f(0,1,0);
    glVertex3f(-1,-1,-1);
    glVertex3f(-1,-1,1);

    glEnd();
    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutCreateWindow("3D Tetrahedron by Alvi");


    glutDisplayFunc(display);
    glutMainLoop();
}

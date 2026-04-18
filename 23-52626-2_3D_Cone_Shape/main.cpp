#include <GL/glut.h>
#include <math.h>

#define PI 3.1416

void display() {
    glClearColor(1,1,1,1);
    glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);


    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluPerspective(30, 1, 2, 10);


    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();
    glTranslatef(0, 0, -6);
    glRotatef(-40, 1, 1, 0);

    int slices = 50;
    float radius = 0.7f;
    float height = 1.2f;


    glBegin(GL_TRIANGLE_FAN);
        glColor3f(0, 0.5, 0);
        glVertex3f(0, -height/2, 0);

        for (int i = 0; i <= slices; i++) {
            float angle = 2 * PI * i / slices;
            float x = radius * cos(angle);
            float z = radius * sin(angle);
            glVertex3f(x, -height/2, z);
        }
    glEnd();


    glBegin(GL_TRIANGLES);
        for (int i = 0; i < slices; i++) {
            float angle1 = 2 * PI * i / slices;
            float angle2 = 2 * PI * (i + 1) / slices;

            float x1 = radius * cos(angle1);
            float z1 = radius * sin(angle1);

            float x2 = radius * cos(angle2);
            float z2 = radius * sin(angle2);

            glColor3f(0.5, 0.8, 0.3);


            glVertex3f(0, height/2, 0);
            glVertex3f(x1, -height/2, z1);
            glVertex3f(x2, -height/2, z2);
        }
    glEnd();

    glFlush();
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB | GLUT_DEPTH);
    glutInitWindowSize(500, 500);
    glutCreateWindow("3D Cone by Alvi");

    glEnable(GL_DEPTH_TEST);

    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}

#include <GL/glut.h>
#include <math.h>

#define PI 3.14159265f


void drawFilledCircle(float cx, float cy, float rx, float ry, int segments)
{
    glBegin(GL_POLYGON);
    for (int i = 0; i < segments; i++)
        {
        float theta = 2.0f * PI * float(i) / float(segments);
        glVertex2f(cx + rx * cosf(theta), cy + ry * sinf(theta));
    }
    glEnd();
}


void drawCircleOutline(float cx, float cy, float rx, float ry, int segments)
{
    glBegin(GL_LINE_LOOP);
    for (int i = 0; i < segments; i++)
        {
        float theta = 2.0f * PI * float(i) / float(segments);
        glVertex2f(cx + rx * cosf(theta), cy + ry * sinf(theta));
    }
    glEnd();
}

void display() {
    glClear(GL_COLOR_BUFFER_BIT);
    glLineWidth(2.0);


    glColor3f(0.18, 0.75, 0.95);
    glBegin(GL_POLYGON);
        glVertex2f(-0.4, -0.7);
        glVertex2f(0.4, -0.7);
        glVertex2f(0.4, 0.6);
        glVertex2f(-0.4, 0.6);
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
        glVertex2f(-0.4, -0.7);
        glVertex2f(0.4, -0.7);
        glVertex2f(0.4, 0.6);
        glVertex2f(-0.4, 0.6);
    glEnd();


    glColor3f(0.7, 0.9, 0.3);
    glBegin(GL_TRIANGLES);

        glVertex2f(-0.4, 0.45);
        glVertex2f(-0.45, 0.75);
        glVertex2f(-0.1, 0.6);

        glVertex2f(0.4, 0.45);
        glVertex2f(0.45, 0.75);
        glVertex2f(0.1, 0.6);

    glEnd();

    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
     glVertex2f(-0.4, 0.45);
     glVertex2f(-0.45, 0.75);
     glVertex2f(-0.1, 0.6);
     glEnd();

    glBegin(GL_LINE_LOOP);
    glVertex2f(0.4, 0.45);
    glVertex2f(0.45, 0.75);
    glVertex2f(0.1, 0.6);
    glEnd();



    glColor3f(1, 1, 1);
    drawFilledCircle(-0.18, 0.35, 0.18, 0.18, 40);
    glColor3f(0, 0, 0);
    drawCircleOutline(-0.18, 0.35, 0.18, 0.18, 40);

    glColor3f(1, 1, 1);
    drawFilledCircle(0.18, 0.35, 0.18, 0.18, 40);
    glColor3f(0, 0, 0);
    drawCircleOutline(0.18, 0.35, 0.18, 0.18, 40);

    glColor3f(0, 0, 0);
    drawFilledCircle(-0.15, 0.30, 0.08, 0.08, 30);
    drawFilledCircle(0.21, 0.30, 0.08, 0.08, 30);


    glColor3f(1.0, 0.1, 0.6);
    drawFilledCircle(0.0, 0.1, 0.15, 0.1, 30);
    glColor3f(0, 0, 0);
    drawCircleOutline(0.0, 0.1, 0.15, 0.1, 30);


    float mx = 0.0, my = -0.15, r = 0.3;
    glColor3f(1.0, 0.85, 0.0);
    glBegin(GL_POLYGON);

        glVertex2f(mx - r, my);
        glVertex2f(mx + r, my);

        for(int i=0; i<=20; i++)
            {
            float angle = PI + (PI * i / 20.0f);
            glVertex2f(mx + r * cosf(angle), my + r * sinf(angle));
        }
    glEnd();
    glColor3f(0, 0, 0);
    glBegin(GL_LINE_LOOP);
        glVertex2f(mx - r, my);
        glVertex2f(mx + r, my);
        for(int i=0; i<=20; i++)
            {
            float angle = PI + (PI * i / 20.0f);
            glVertex2f(mx + r * cosf(angle), my + r * sinf(angle));
        }
    glEnd();


    glColor3f(0.7, 0.9, 0.3);
    glBegin(GL_TRIANGLES);
        glVertex2f(-0.1, -0.15);
        glVertex2f(0.0, -0.15);
         glVertex2f(-0.05, -0.28);
        glVertex2f(0.05, -0.15);
        glVertex2f(0.15, -0.15);
        glVertex2f(0.1, -0.28);
    glEnd();


    glColor3f(1.0, 0.5, 0.0);

    glBegin(GL_POLYGON);
    glVertex2f(-0.75, -0.35);
    glVertex2f(-0.4, -0.25);
    glVertex2f(-0.4, -0.35);
    glVertex2f(-0.75, -0.45);
    glEnd();

    glBegin(GL_POLYGON);
    glVertex2f(0.4, -0.25);
    glVertex2f(0.75, -0.15);
    glVertex2f(0.75, -0.25);
    glVertex2f(0.4, -0.35);
    glEnd();


    glPushMatrix();
        glTranslatef(-0.25, -0.75, 0);
        glRotatef(45, 0, 0, 1);
        glRectf(-0.12, -0.12, 0.12, 0.12);
        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
        glVertex2f(-0.12,-0.12);
        glVertex2f(0.12,-0.12);
        glVertex2f(0.12,0.12);
        glVertex2f(-0.12,0.12);
        glEnd();

    glPopMatrix();

    glColor3f(1.0, 0.5, 0.0);
    glPushMatrix();
        glTranslatef(0.25, -0.75, 0);
        glRotatef(25, 0, 0, 1);
        glRectf(-0.12, -0.12, 0.12, 0.12);
        glColor3f(0,0,0);
        glBegin(GL_LINE_LOOP);
         glVertex2f(-0.12,-0.12);
         glVertex2f(0.12,-0.12);
         glVertex2f(0.12,0.12);
         glVertex2f(-0.12,0.12);
         glEnd();
    glPopMatrix();

    glFlush();
}

void init() {
    glClearColor(0.85, 0.75, 0.6, 1.0);
    gluOrtho2D(-1, 1, -1, 1);
}

int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(800, 800);
    glutCreateWindow("Monster");
    init();
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}



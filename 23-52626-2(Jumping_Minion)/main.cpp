#include <GL/glut.h>
#include <math.h>


float tx = 0.0f, ty = 0.0f;
float sx = 1.0f, sy = 1.0f;
float angle = 0.0f;


bool Jumping = false;
float speed = 0.0f;
float gravity = -0.005f;

void display()
{
    glClear(GL_COLOR_BUFFER_BIT);

    glMatrixMode(GL_MODELVIEW);
    glLoadIdentity();


    if (Jumping) {
        ty = ty + speed;
        speed = speed + gravity;

        if (ty <= 0.0f) {
            ty = 0.0f;
            Jumping = false;
        }
    }

    glTranslatef(tx, ty, 0.0f);
    glRotatef(angle, 0.0f, 0.0f, 1.0f);
    glScalef(sx, sy, 1.0f);

    glClearColor(1.0, 1.0, 1.0, 1.0);


    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);
        glVertex2f(-0.3, -0.4);
        glVertex2f(0.3, -0.4);
        glVertex2f(0.3, 0.4);
        glVertex2f(-0.3, 0.4);
    glEnd();


    glBegin(GL_POLYGON);
        for(int degree = 0; degree <= 180; degree++) {
            float radian = degree * 3.1416 / 180;
            glVertex2f(0.3 * cos(radian), 0.4 + 0.3 * sin(radian));
        }
    glEnd();

    // Hair
    glColor3f(0.0, 0.0, 0.0);
    glLineWidth(6.0);
    glBegin(GL_LINES);
        glVertex2f(-0.15, 0.65);  glVertex2f(-0.15, 0.73);
        glVertex2f(-0.07, 0.68);  glVertex2f(-0.07, 0.76);
        glVertex2f(0.0, 0.70);    glVertex2f(0.0, 0.78);
        glVertex2f(0.07, 0.68);   glVertex2f(0.07, 0.76);
        glVertex2f(0.15, 0.65);   glVertex2f(0.15, 0.73);
    glEnd();

    // Dress
    glColor3f(0.0, 0.4, 0.8);
    glBegin(GL_POLYGON);
        glVertex2f(-0.31, -0.4);
        glVertex2f(0.31, -0.4);
        glVertex2f(0.31, -0.1);
        glVertex2f(-0.31, -0.1);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(-0.2, -0.1);
        glVertex2f(0.2, -0.1);
        glVertex2f(0.2, 0.1);
        glVertex2f(-0.2, 0.1);
    glEnd();


    glRectf(-0.25, -0.5, -0.1, -0.4);
    glRectf(0.1, -0.5, 0.25, -0.4);


    glColor3f(0.0, 0.0, 0.0);
    glBegin(GL_POLYGON);
        for(int i=0; i<360; i++) {
            float a = i * 3.1416 / 180;
            glVertex2f(0.08 * cos(a), -0.04 + 0.08 * sin(a));
        }
    glEnd();

    glColor3f(0.0, 0.4, 0.8);
    glBegin(GL_POLYGON);
        for(int i=0; i<360; i++) {
            float a = i * 3.1416 / 180;
            glVertex2f(0.04 * cos(a), -0.04 + 0.04 * sin(a));
        }
    glEnd();

    glRectf(0.0, -0.04, 0.08, 0.01);

    glColor3f(0.0, 0.0, 0.0);
    glRectf(0.01, -0.05, 0.06, -0.03);

    // Arms
    glBegin(GL_POLYGON);
        glVertex2f(-0.3, -0.05);
        glVertex2f(-0.45, -0.15);
        glVertex2f(-0.42, -0.22);
        glVertex2f(-0.3, -0.18);
    glEnd();

    glBegin(GL_POLYGON);
        glVertex2f(0.3, -0.05);
        glVertex2f(0.45, -0.15);
        glVertex2f(0.40, -0.22);
        glVertex2f(0.3, -0.18);
    glEnd();


    glRectf(-0.3, -0.55, -0.1, -0.5);
    glRectf(0.1, -0.55, 0.3, -0.5);


    glRectf(-0.35, 0.35, 0.35, 0.45);

    float eye[] = {-0.12f, 0.12f};

    for(int j=0; j<2; j++) {
        glColor3f(0.2, 0.2, 0.2);
        glBegin(GL_POLYGON);
        for(int i=0; i<360; i++) {
            float a = i * 3.1416 / 180;
            glVertex2f(eye[j] + 0.12 * cos(a), 0.4 + 0.12 * sin(a));
        }
        glEnd();

        glColor3f(1.0, 1.0, 1.0);
        glBegin(GL_POLYGON);
        for(int i=0; i<360; i++) {
            float a = i * 3.1416 / 180;
            glVertex2f(eye[j] + 0.09 * cos(a), 0.4 + 0.09 * sin(a));
        }
        glEnd();

        glColor3f(0.0, 0.0, 0.0);
        glBegin(GL_POLYGON);
        for(int i=0; i<360; i++) {
            float a = i * 3.1416 / 180;
            glVertex2f(eye[j] + 0.03 + 0.03 * cos(a), 0.4 - 0.03 + 0.03 * sin(a));
        }
        glEnd();
    }

    glFlush();
}

void keyboard(unsigned char key, int x, int y) {
    switch(key) {
        case 'w': ty += 0.1f; break;
        case 's': ty -= 0.1f; break;
        case 'a': tx -= 0.1f; break;
        case 'd': tx += 0.1f; break;
        case '+': sx += 0.1f; sy += 0.1f; break;
        case '-': sx -= 0.1f; sy -= 0.1f; break;
        case 'r': angle += 5.0f; break;
        case 'R': angle -= 5.0f; break;




    case 'j':
        if (!Jumping)
    {
        Jumping = true;
        speed = 0.05f;
        }
break;

    case 'x': exit(0);
}
glutPostRedisplay();
}



void init() {
    glClearColor(0.0, 0.0, 0.0, 1.0);
    glMatrixMode(GL_PROJECTION);
    glLoadIdentity();
    gluOrtho2D(-1, 1, -1, 1);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Minion Jump");

    init();
    glutDisplayFunc(display);
    glutKeyboardFunc(keyboard);

    glutPostRedisplay();

    glutIdleFunc(display);

    glutMainLoop();
    return 0;
}

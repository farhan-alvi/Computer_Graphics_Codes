#include <GL/glut.h>
#include <math.h>

void display()
 {
    glClearColor(1.0, 1.0, 1.0, 1.0);   //sets the background color.
    glClear(GL_COLOR_BUFFER_BIT);

    glColor3f(1.0, 1.0, 0.0);
    glBegin(GL_POLYGON);

        glVertex2f(-0.3, -0.4);
        glVertex2f(0.3, -0.4);
        glVertex2f(0.3, 0.4);
        glVertex2f(-0.3, 0.4);

    glEnd();

    glBegin(GL_POLYGON);
        for(int degree = 0; degree <= 180; degree++)
        {
        float radian = degree * 3.1416 / 180;
        glVertex2f(0.3 * cos(radian), 0.4 + 0.3 * sin(radian));
        }

    glEnd();

    glColor3f(0.0, 0.0, 0.0);       //Hair Color

    glLineWidth(6.0);  //sets the thickness of lines.
    glBegin(GL_LINES);  //Draw straight lines Each line needs 2 points.

        glVertex2f(-0.15, 0.65);  glVertex2f(-0.15, 0.73);      //This draws one hair line.
        glVertex2f(-0.07, 0.68); glVertex2f(-0.07, 0.76);
        glVertex2f(0.0, 0.70);    glVertex2f(0.0, 0.78);
        glVertex2f(0.07, 0.68); glVertex2f(0.07, 0.76);
        glVertex2f(0.15, 0.65);  glVertex2f(0.15, 0.73);

    glEnd();

    glColor3f(0.0, 0.4, 0.8);       //This creates blue color.

    glBegin(GL_POLYGON);
        glVertex2f(-0.31, -0.4);
        glVertex2f(0.31, -0.4);
        glVertex2f(0.31, -0.1);
        glVertex2f(-0.31, -0.1);

    glEnd();

    glBegin(GL_POLYGON);        //Upper Pocket Area

        glVertex2f(-0.2, -0.1);     //This is the front chest part of the overalls.
        glVertex2f(0.2, -0.1);
        glVertex2f(0.2, 0.1);
        glVertex2f(-0.2, 0.1);

    glEnd();

    glRectf(-0.25, -0.5, -0.1, -0.4);       //Legs
    glRectf(0.1, -0.5, 0.25, -0.4);     //These two rectangles create two legs.

    glColor3f(0.0, 0.0, 0.0);       //Pocket outline color = Black

    glBegin(GL_POLYGON);

    for(int Degree=0; Degree<360; Degree++)
    {

    float Radian = Degree * 3.1416 / 180;
    glVertex2f(0.08 * cos(Radian), -0.04 + 0.08 * sin(Radian));
        }

    glEnd();

    glColor3f(0.0, 0.4, 0.8);

    glBegin(GL_POLYGON);

        for(int i=0; i<360; i++)
        {
        float a = i * 3.1416 / 180;
        glVertex2f(0.04 * cos(a), -0.04 + 0.04 * sin(a));
        }

    glEnd();

    glRectf(0.0, -0.04, 0.08, 0.01);

    glColor3f(0.0, 0.0, 0.0);
    glRectf(0.01, -0.05, 0.06, -0.03);      //Pocket Button

    glBegin(GL_POLYGON);

        glVertex2f(-0.3, -0.05);        //Two polygons draw left and right arms.
        glVertex2f(-0.45, -0.15);
        glVertex2f(-0.42, -0.22);
        glVertex2f(-0.3, -0.18);

    glEnd();

    /*
    glBegin(GL_POLYGON);

        glVertex2f(-0.36, -0.15);
        glVertex2f(-0.42, -0.22);
        glVertex2f(-0.1, -0.35);
        glVertex2f(-0.15, -0.30);

    glEnd();

`*/
    glBegin(GL_POLYGON);

        glVertex2f(0.3, -0.05);     //right arm.
        glVertex2f(0.45, -0.15);
        glVertex2f(0.40, -0.22);
        glVertex2f(0.3, -0.18);

    glEnd();

    glRectf(-0.3, -0.55, -0.1, -0.5);       //Two rectangles = Minion shoes.
    glRectf(0.1, -0.55, 0.3, -0.5);

    glRectf(-0.35, 0.35, 0.35, 0.45);       //This draws the black strap of goggles.*******************

    float eye[] = {-0.12f, 0.12f};      //This array stores two x positions.

    for(int j=0; j<2; j++)      //Loop for Two Eyes
        {

        glColor3f(0.2, 0.2, 0.2);       //Sets color to grey.
        glBegin(GL_POLYGON);        //Creates a small circle nose
        for(int i=0; i<360; i++)
            {
        float a = i * 3.1416 / 180;
        glVertex2f(eye[j] + 0.12 * cos(a), 0.4 + 0.12 * sin(a));
            }

        glEnd();

        glColor3f(1.0, 1.0, 1.0);       //White Eye (Inside the Goggles)
        glBegin(GL_POLYGON);

        for(int i=0; i<360; i++)
        {
            float a = i * 3.1416 / 180;
            glVertex2f(eye[j] +0.09*cos(a), 0.4+0.09*sin(a));
            }

        glEnd();

        glColor3f(0.0, 0.0, 0.0);       //Black Pupil
        glBegin(GL_POLYGON);
            for(int i=0; i<360; i++)
                {
                float a = i * 3.1416 / 180;
                glVertex2f(eye[j]+ 0.03+ 0.03* cos(a), 0.4 -0.03+ 0.03*sin(a));     //This sets for eye's pupil position. The first + sets pupil right side and the second - sign set's the pupil little bit downward.
            }
        glEnd();
    }

    glBegin(GL_POLYGON);

        for(int i=0; i<360; i++)
        {
            float a = i * 3.1416 / 180;
            glVertex2f(0.02 *cos(a),  0.18 +0.02*sin(a));
        }

    glEnd();
    glFlush();
}



int main(int argc, char** argv)
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600, 600);
    glutCreateWindow("Minion Picture Lab-2");
    glutDisplayFunc(display);
    glutMainLoop();
    return 0;
}




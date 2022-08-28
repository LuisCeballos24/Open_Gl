#include <windows.h>
#include <GL/glut.h>
#include <math.h>

using namespace std;


float calx, caly, px, py;
void proyeccion()
{
    glClearColor(1.0,1.0,1.0,0.0);
    glMatrixMode(GL_PROJECTION);
    gluOrtho2D(-25,40,-70,20);
}



void dibujar()
{
    glClear(GL_COLOR_BUFFER_BIT);
    glBegin (GL_LINES);
    glColor3f(0.0,0.0,0.0);

    glVertex2d(-18,9);
    glVertex2i(-18,-48);

    glVertex2d(-18,9);
    glVertex2i(-15,9);

    glVertex2d(-15,9);
    glVertex2i(-15,-40);

    glVertex2d(-5,-40);
    glVertex2i(-15,-40);

    glVertex2d(-5,-40);
    glVertex2i(-15,-40);

    glVertex2d(-5,-48);
    glVertex2i(-18,-48);

    glVertex2d(-5,-40);
    glVertex2i(-5,-48);



 //Display Jr

    glEnd();

    glFlush();
}

int main (int argc, char* argv [])
{
    glutInit(&argc, argv);
    glutInitDisplayMode(GLUT_SINGLE | GLUT_RGB);
    glutInitWindowSize(600,300);
    glutInitWindowPosition(300,100);
    glutCreateWindow ("Nombre");
    proyeccion();
    glutDisplayFunc(dibujar);
    glutMainLoop();

}

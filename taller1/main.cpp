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

    glVertex2d(-20,11);
    glVertex2i(-20,-45);

    /*glBegin(GL_POINTS);
    glEnd();

    for(double i=0.0; i<10; i+=0.001){
        calx=3*cos(i);

    }*/


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

#include <iostream>
#include <GL/glut.h>
#define GL_GLEXT_PROTOTYPES 1
#define GL3_PROTOTYPES 1
#include <windows.h>
#include <GL/gl.h>
#include <GL/glext.h>
#include <cstdlib>

using std::cout;
using std::endl;

int window, shader, NbColonnes, NbLignes, LabyrintheAffichage, LabyRedim;

void main()
{
    NbColonnes=NbLignes=0;
    glutInitWindowPosition(10, 10);
    glutInitWindowSize(500, 500);
    glutInitDisplayMode(GLUT_RGBA | GLUT_SINGLE);
    glutCreateWindow("Labyrinthe");
    glutDisplayFunc(LabyrintheAffichage);
    glutReshapeFunc(LabyRedim);
    glutMainLoop();
}

void LabyAffichage();

void LabyAffichage(){
    glClearColor(1.0, 1.0, 1.0, 1.0);
    glClear(GL_COLOR_BUFFER_BIT);
    glMatrixMode(GL_MODELVIEW);

    glFlush();
}

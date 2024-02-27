#include <windows.h>
#include <GL/glut.h>
#include <stdlib.h>

void display() {
    glClear(GL_COLOR_BUFFER_BIT);

                                               ///1st chair



    // Draw Table Surface
    glBegin(GL_QUADS);
    glColor3f(1.0, 0.0, 0.0);  // Brown
    glVertex2f(-20, 5);
    glVertex2f(-11, 5);
    glVertex2f(-8, 2);
    glVertex2f(-18, 2);
    glEnd();

    // Draw Front Legs
glBegin(GL_QUADS);                   // Brown//leg1
    glVertex2f(-20, 15);
    glVertex2f(-19, 15);
    glVertex2f(-19, -7);
    glVertex2f(-20, -7);

glVertex2f(-10, 2);//front1
    glVertex2f(-9, 2);
    glVertex2f(-9, -9);
    glVertex2f(-10, -9);

                             // Brown         ////matha
 glVertex2f(-11, 15);
    glVertex2f(-20, 15);
    glVertex2f(-20, 17);
    glVertex2f(-11, 17);



    glEnd();

    // Draw Back Legs
    glBegin(GL_QUADS);
                                           // Brown
                   //front 1st

    glVertex2f(-17, -9);
    glVertex2f(-18, -9);
    glVertex2f(-18, 3);
    glVertex2f(-17, 3);

    glVertex2f(-11, 15);     //back 2nd
    glVertex2f(-12, 15);
    glVertex2f(-12, -7);
    glVertex2f(-11, -7);
    glEnd();



                                                               ///table


 glBegin(GL_QUADS);
    glColor3f(0.5, 0.35, 0.05);  // Brown   surface
    glVertex2f(5, 4);
    glVertex2f(-35, 4);
    glVertex2f(-32, 0);
    glVertex2f(10, 0);

    glColor3f(0.5, 0.35, 0.05);  // Brown   2nd    -32
    glVertex2f(-27, 0);
    glVertex2f(-29, 0);
    glVertex2f(-29, -14);
    glVertex2f(-27, -14);

glColor3f(0.5, 0.35, 0.05);  // Brown   1st   10
    glVertex2f(6, 0);
    glVertex2f(4, 0);            ///00000000000000000000
    glVertex2f(4, -14);
    glVertex2f(6, -14);

     glColor3f(0.5, 0.35, 0.05);  // Brown   1st   -35
    glVertex2f(-33, 4);
    glVertex2f(-31, 4);
    glVertex2f(-31, -10);
    glVertex2f(-33, -10);

    glColor3f(0.5, 0.35, 0.05);  // Brown   1st   5
    glVertex2f(1, 4);
    glVertex2f(-1, 4);
    glVertex2f(-1, -10);
    glVertex2f(1, -10);

    glEnd();




                                                    //2nd chair
    // Draw Table Surface
    glBegin(GL_QUADS);
    glColor3f(0.0, 0.0, 0.1);  // Brown  /
    glVertex2f(-40, 1);
    glVertex2f(-32, 1);
    glVertex2f(-29, -02);
    glVertex2f(-38, -02);
    glEnd();

    // Draw Front Legs
    glBegin(GL_QUADS);
    //glColor3f(0.5, 0.3, 0.1);  // Brown   ///2
    glVertex2f(-38, 12);
    glVertex2f(-37, 12);
    glVertex2f(-37, -12);
    glVertex2f(-38, -12);



//1
    glVertex2f(-40, -11);
    glVertex2f(-39, -11);
    glVertex2f(-39, 13);
    glVertex2f(-40, 13);


    //glColor3f(0.5, 0.3, 0.1);  // Brown
    glVertex2f(-29,-2);
    glVertex2f(-30, -2);
    glVertex2f(-30, -12);
    glVertex2f(-29, -12);

    glVertex2f(-33, -2);
    glVertex2f(-32, -2);
    glVertex2f(-32, -11);
    glVertex2f(-33,-11);





    glEnd();

    // Draw Back Legs
    glBegin(GL_QUADS);
    //glColor3f(0.5, 0.3, 0.1);  // Brown
    glVertex2f(-38, 12);
    glVertex2f(-40, 13);
    glVertex2f(-40, 12);
    glVertex2f(-38, 11);


    glEnd();
                                             /////
                                                  //3 rd chair

    // Draw Table Surface
    glBegin(GL_QUADS);
    glColor3f(0.0, 1.0, 0.0);  // Brown  /
    glVertex2f(10, 1);
    glVertex2f(1, 1);
    glVertex2f(-1, -02);
    glVertex2f(8, -02);
    glEnd();

    // Draw Front Legs
    glBegin(GL_QUADS);
    //glColor3f(0.5, 0.3, 0.1);  // Brown   ///2
    glVertex2f(8, 12);
    glVertex2f(7, 12);
    glVertex2f(7, -12);
    glVertex2f(8, -12);



//1
    glVertex2f(10, -11);
    glVertex2f(9, -11);
    glVertex2f(9, 13);
    glVertex2f(10, 13);


    //glColor3f(0.5, 0.3, 0.1);  // Brown
    glVertex2f(-1,-2);
    glVertex2f(0, -2);
    glVertex2f(0, -12);
    glVertex2f(-1, -12);

    glVertex2f(2, -11);
    glVertex2f(2, -1);
    glVertex2f(1, -1);
    glVertex2f(1, -11);



    glEnd();

    // Draw Back Legs
    glBegin(GL_QUADS);
    //glColor3f(0.5, 0.3, 0.1);  // Brown
    glVertex2f(8, 12);
    glVertex2f(10, 13);
    glVertex2f(10, 12);
    glVertex2f(8, 11);
                                          ///table r pa
    glColor3f(0.5, 0.35, 0.05);  // Brown   1st   10
    glVertex2f(6, 0);
    glVertex2f(4, 0);            ///00000000000000000000
    glVertex2f(4, -14);
    glVertex2f(6, -14);
                                            ///table surface

    glBegin(GL_QUADS);
    glColor3f(0.5, 0.3, 0.1);  // Brown   surface
    glVertex2f(5, 4);
    glVertex2f(-35, 4);
    glVertex2f(-32, 0);
    glVertex2f(10, 0);


    glEnd();

                                              /////4th chair

                                                                        /////4th chair
                                                                         // Draw Table Surface
    glBegin(GL_QUADS);
    glColor3f(1.0, 1.0, 0.0);  // Brown
    glVertex2f(-12, -11);
    glVertex2f(-4, -11);
    glVertex2f(-1, -13);
    glVertex2f(-9, -13);
    glEnd();

    // Draw Front Legs
    glBegin(GL_QUADS);
    //glColor3f(0.5, 0.3, 0.1);  // Brown
glVertex2f(-12, -11);
    glVertex2f(-11, -11);
    glVertex2f(-11, -21);
    glVertex2f(-12, -21);

glVertex2f(-4, -11);
    glVertex2f(-5, -11);
    glVertex2f(-5, -21);
    glVertex2f(-4, -21);

    //glColor3f(0.5, 0.3, 0.1);  // Brown
glVertex2f(-1, -1);  //back2nd
    glVertex2f(-2, -1);
    glVertex2f(-2, -23);
    glVertex2f(-1, -23);

glVertex2f(-9, -1);  //back1st
    glVertex2f(-8, -1);
    glVertex2f(-8, -23);
    glVertex2f(-9, -23);


    glVertex2f(-9, -2);    //matha
    glVertex2f(-1, -2);
    glVertex2f(-1, 0);
      glVertex2f(-9, 0);






    glEnd();


    glBegin(GL_QUADS);


    glEnd();









    glFlush();
}

void init() {
    glClearColor(1.0, 1.0, 1.0, 1.0);  // White background
    //gluOrtho2D(-2.0, 2.0, -2.0, 2.0);
    glOrtho(-50.0,50.0,-50.0,50.0,-50.0,50.0);
}

int main(int argc, char** argv) {
    glutInit(&argc, argv);
    glutCreateWindow("OpenGL 3D-looking Desk");
    glutInitWindowSize(500, 500);
    glutInitWindowPosition(100, 100);

    init();
    glutDisplayFunc(display);
    glutMainLoop();

    return 0;
}


#include<stdio.h>
#include<time.h>
# include "iGraphics.h"
#define PI (2*acos(0))
int x = 199 ,y = 199, r = 199,flag=1;
int change_x=50,change_y=50;
int hh ,mm,ss;
double angle,angle2,angle3;
int r1,g1,b1;
/*
	function iDraw() is called again and again by the system.

	*/
	void change()
{

    r1=rand()%255;
    g1=rand()%255;
    b1=rand()%255;
    angle+=6*PI/180;
    angle2+=.1*PI/180;
    angle3+=PI/108000;
}


void iDraw() {

     if(flag)
    {
        angle=ss*6*PI/180;angle2=mm*6*PI/180+ss*PI/(1800);angle3=hh*30*PI/180+mm*PI/360+ss*PI/(180*120); flag=0;
    }
	//place your drawing codes here
	iClear();
	iSetColor(200, 21,256);
	iCircle(change_x+x, change_y+y, r+6);
		iSetColor(36, 169, 226);
	iFilledCircle(change_x+x, change_y+y, r+3);
	iSetColor(255, 255, 113);
	iFilledCircle(change_x+x, change_y+y, r-5);
	iSetColor(250, 255, 250);
	iFilledCircle(change_x+x, change_y+y, r-60);
	iSetColor(250, 255, 200);
	iFilledCircle(change_x+x, change_y+y, r-70);
	iSetColor(0, 0, 0);
	iLine(change_x+199,change_y+199,change_x+199+199*sin(angle),change_y+199+199*cos(angle));
	iSetColor(r1-100,g1-100, b1+200);
	iText(change_x+283.5, change_y+345.35, "1",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(change_x+345.35, change_y+283.5, "2",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(change_x+345.35-5,change_y+ 114.5-8, "4",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(change_x+283.5-5, change_y+52.64-5, "5",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(change_x+114.5-6, change_y+52.64-3, "7",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(change_x+52.64-5, change_y+114.5-5, "8",GLUT_BITMAP_TIMES_ROMAN_24);
    iText(change_x+52.64-8, change_y+283.5-8, "10",GLUT_BITMAP_TIMES_ROMAN_24);
     iText(change_x+114.5-8, change_y+345.35-8, "11",GLUT_BITMAP_TIMES_ROMAN_24);
  //  iSetColor(r1-100,g1-100, b1+100);
     iText(change_x+30-5, change_y+199-8, "9",GLUT_BITMAP_TIMES_ROMAN_24);
     iText(change_x+199-8,change_y+ 30-5, "6",GLUT_BITMAP_TIMES_ROMAN_24);
     iText(change_x+368, change_y+199-8, "3",GLUT_BITMAP_TIMES_ROMAN_24);
     iText(change_x+199-11, change_y+368, "12",GLUT_BITMAP_TIMES_ROMAN_24);
     iSetColor(r1, g1, b1);
     iText(320, 5, "FAHMID RIFAT",GLUT_BITMAP_TIMES_ROMAN_24);
	iSetColor(200, 00, 00);
	iLine(change_x+199,change_y+199,change_x+199+159*sin(angle2),change_y+199+159*cos(angle2));
	iSetColor(00, 200, 00);
	iLine(change_x+199,change_y+199,change_x+199+129*sin(angle3),change_y+199+139*cos(angle3));
	//iSetColor(200, 200, 255);
	//iFilledCircle(change_x+x, change_y+y, r-180);
    iSetColor(36, 169, 255);
	iFilledCircle(change_x+x,change_y+ y, r-185);
    iSetColor(r1+100, g1+100, b1+100);
    iFilledCircle(change_x+x, change_y+y, r-190);
    iSetColor(r1+100, 0, 0);
    iText(5, 5, "BUET CSE 17",GLUT_BITMAP_TIMES_ROMAN_24);

}

/*
	function iMouseMove() is called when the user presses and drags the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouseMove(int mx, int my) {
	printf("x = %d, y= %d\n",mx,my);
	//place your codes here
}

/*
	function iMouse() is called when the user presses/releases the mouse.
	(mx, my) is the position where the mouse pointer is.
	*/
void iMouse(int button, int state, int mx, int my) {
	if (button == GLUT_LEFT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
		//	printf("x = %d, y= %d\n",mx,my);
		//x += 10;
		//y += 10;
	}
	if (button == GLUT_RIGHT_BUTTON && state == GLUT_DOWN) {
		//place your codes here
	//	x -= 10;
	//	y -= 10;
	}
}

/*
	function iKeyboard() is called whenever the user hits a key in keyboard.
	key- holds the ASCII value of the key pressed.
	*/
void iKeyboard(unsigned char key) {
	if (key == 'q') {
		exit(0);
	}
	//place your codes for other keys here
}

/*
	function iSpecialKeyboard() is called whenver user hits special keys like-
	function keys, home, end, pg up, pg down, arraows etc. you have to use
	appropriate constants to detect them. A list is:
	GLUT_KEY_F1, GLUT_KEY_F2, GLUT_KEY_F3, GLUT_KEY_F4, GLUT_KEY_F5, GLUT_KEY_F6,
	GLUT_KEY_F7, GLUT_KEY_F8, GLUT_KEY_F9, GLUT_KEY_F10, GLUT_KEY_F11, GLUT_KEY_F12,
	GLUT_KEY_LEFT, GLUT_KEY_UP, GLUT_KEY_RIGHT, GLUT_KEY_DOWN, GLUT_KEY_PAGE UP,
	GLUT_KEY_PAGE DOWN, GLUT_KEY_HOME, GLUT_KEY_END, GLUT_KEY_INSERT
	*/
void iSpecialKeyboard(unsigned char key) {

	if (key == GLUT_KEY_END) {
		exit(0);
	}
	//place your codes for other keys here
}


int main() {
    int n;
    printf(" Enter 1 to set the time as pc time\n\n Enter 2 to initialize manually\n");
    scanf("%d",&n);
    switch(n)
    {

     case 1 :
        {
             time_t now;
              struct tm *timeinfo;
              time(&now);
               timeinfo=localtime(&now);
                hh=timeinfo->tm_hour;
                hh=hh%12;
                mm=timeinfo->tm_min;
                ss=timeinfo->tm_sec;
              break ;
        }
    case 2 :
        {
               printf("Enter hour = ");
               scanf("%d",&hh);
               printf("Enter minitue = ");
               scanf("%d",&mm);
               printf("Enter second = ");
               scanf("%d",&ss);
               break;

        }
    }
    iSetTimer(1000,change);
	//place your own initialization codes here.
	//printf("%d",);
	iInitialize(500, 500, "Yahooo");
	return 0;
}

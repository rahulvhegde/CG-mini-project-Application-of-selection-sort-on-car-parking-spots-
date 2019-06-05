#include<GL/glut.h>
#include <string.h>
#include<stdio.h>
void init();
void display();
void car();
void vehicle1();
void vehicle2();
void vehicle3();
void vehicle4();
void print();
void *font=GLUT_BITMAP_TIMES_ROMAN_24;
void rectangle(GLfloat *a,GLfloat *b,GLfloat *c,GLfloat *d);
int i,rev=0,rev1=0;
int r=0;
int k,z=0,lim=0;
char str1[]={"38"};
char str2[]={"44"};
char str3[]={"69"};
char str5[]={"69"};
int k=-10;
int flag=0;
int x=0,y=0;
int scene=0,time=-100000;
void scene1();
void scene2();
void scene3();
void scene4();
void timer();
void keypress(unsigned char key,int x,int y);
void rotate_car();
void rev_car();
void rev_car1();
void rot_car1();
void rot_car2();
void rot_car3();
void rot_car4();
void rot_car5();
void rot_car6();
void rot_car7();
void rot_car8();
void for_car();
void for_car1();
void for_car2();
void for_car3();
void for_car4();
void for_car5();
void for_car6();
void for_car7();
void for_car8();
void for_car9();
void final_car();
void delay();
void mouse(int btn,int state,int x,int y);
GLfloat v[160][2]={{-250,636},{250,636},{250,-690},{-250,-690},{-281,636},{-281,-690},{281,-690},{281,636},{-281,509},{-250,509},{-281,382},{-250,382},{-281,255},{-250,255},{-281,127},{-250,127},{-281,0},{-250,0},{-281,-127},{-250,-127},{-281,-255},{-250,-255},{-281,-382},{-250,-382},{-281,-509},{-250,-509},{-281,-600},{-250,-600},{250,509},{281,509},{250,382},{281,382},{250,255},{281,255},{250,127},{281,127},{250,0},{281,0},{250,-127},{281,-127},{250,-255},{281,-255},{250,-382},{281,-382},{250,-509},{281,-509},{250,-600},{281,-600},{-18,573},{18,573},{18,382},{-18,382},{-18,255},{18,255},{18,64},{-18,64},{-18,-64},{18,-64},{18,-255},{-18,-255},{-18,-382},{18,-382},{18,-572},{-18,-572},{78,-413},{150,-413},{150,-572},{78,-572},{100,-445},{130,-445},{130,-520},{100,-520},{103,-382},{125,-382},{125,-413},{103,-413},{78,-96},{78,-255},{150,-255},{150,-96},{100,-127},{100,-202},{130,-202},{130,-127},{100,-63},{125,-63},{125,-96},{100,-96},{80,222},{150,222},{150,63},{80,63},{100,191},{130,191},{130,116},{100,116},{100,255},{125,255},{100,221},{125,221},{80,540},{150,540},{150,382},{80,382},{100,509},{130,509},{130,434},{100,434},{105,572},{125,572},{125,540},{105,540},{381,582},{573,582},{573,358},{381,358},{381,374},{561,374},{561,563},{381,563},{445,509},{509,509},{509,425},{445,425},{381,255},{573,255},{573,41},{381,41},{381,60},{561,60},{561,236},{381,236},{445,191},{509,191},{509,107},{445,107},{381,-63},{573,-63},{573,-269},{381,-269},{381,-250},{561,-250},{561,-82},{381,-82},{445,-127},{509,-127},{509,-211},{445,-211},{381,-382},{573,-382},{573,-586},{381,-586},{381,-567},{561,-567},{561,-406},{381,-406},{445,-445},{509,-445},{509,-529},{445,-529}};
void main(int argc,char **argv)
{
	glutInit(&argc,argv);
	glutInitDisplayMode(GLUT_SINGLE);
	glutInitWindowPosition(0,0);
	glutInitWindowSize(1080,1080);
	glutCreateWindow("car sort");
	init();
	glutKeyboardFunc(keypress);
	glutMouseFunc(mouse);
	
	glutDisplayFunc(display);
	
	glutMainLoop();

}
void scene2()
{
	glClearColor(0,0,0,1);
	glClear(GL_COLOR_BUFFER_BIT);
	glLoadIdentity();
	car();
	if(x==0)
	{
		
		delay();
		vehicle1();
		vehicle2();
		vehicle3();
		vehicle4();
		print();
		delay();
			x++;
	}
	if(r==0){
		
		r=1;
		rotate_car();
		r=2;
		x++;
	}
	if(x==1)
	{
		
		vehicle1();
		vehicle2();
		vehicle3();
		print();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);
		glPushMatrix();
		//glTranslatef(80,540,0);
		
		glTranslatef(115,471,0);
		glRotatef(z,0,0,1);
		glScalef(1.5,0.5,0);
		glTranslatef(-115,-471,0);
		vehicle4();
		delay();
		glPopMatrix();
		
		//for(i=0;i<10;i++)
		
		//glTranslatef(-115,-471,0);
		
	}
	if(r==2){
		
		r=3;
		rev_car();
		r=4;
		x++;
	}
	if(x==2)
	{
		vehicle1();
		vehicle2();
		vehicle3();
		print();
		
		
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);
		glPushMatrix();
		glTranslatef(115,471,0);
		glRotatef(z,0,0,1);
		glScalef(1.5,0.5,0);
		glTranslatef(-115,-471,0);
		glTranslatef(0,rev,0);
		//glTranslatef(-115,471,0);
		vehicle4();
		delay();
		glPopMatrix();
		//for(i=0;i<10;i++)
		
		//glTranslatef(-115,-471,0);
		
	}
	if(r==4){
		z=-90;
		r=5;
		rot_car1();
		r=6;
		x++;
	}
	if(x==3)
	{
		
		vehicle1();
		vehicle2();
		vehicle3();
		print();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);
		glPushMatrix();
		//glTranslatef(80,540,0);
		
		glTranslatef(55,456,0);
		glRotatef(z,0,0,1);
		glScalef(1.0,.8,0);
		glTranslatef(-55,-456,0);
		vehicle4();
		delay();
		glPopMatrix();
		
		//for(i=0;i<10;i++)
		
		//glTranslatef(-115,-471,0);
		
	}
	if(r==6){
		r=7;
		for_car();
		r=8;
		x++;
	}
	if(x==4)
	{
		vehicle1();
		vehicle2();
		vehicle3();
		print();
		
		
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);
		glPushMatrix();
		glTranslatef(55,456,0);
		glRotatef(-180,0,0,1);
		glScalef(1.0,0.8,0);
		glTranslatef(-55,-456,0);
		glTranslatef(0,rev,0);
		vehicle4();
		delay();
		glPopMatrix();
		//for(i=0;i<10;i++)
		
		//glTranslatef(-115,-471,0);
		
	}
	if(r==8){
		z=0;
		r=9;
		rot_car2();
		r=10;
		x++;
	}
	if(x==5)
	{
		
		glPushMatrix();
		glTranslatef(55,456,0);
		glRotatef(-180,0,0,1);
		glScalef(1.0,0.8,0);
		glTranslatef(-55,-456,0);
		glTranslatef(0,rev,0);
		vehicle4();
		glPopMatrix();
		vehicle2();
		vehicle3();
		print();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);
		glPushMatrix();
		//glTranslatef(80,540,0);
		
		glTranslatef(115,-477,0);
		glRotatef(z,0,0,1);
		glScalef(1.7,0.5,0);
		glTranslatef(-115,+477,0);
		vehicle1();
		delay();
		glPopMatrix();
		
		//for(i=0;i<10;i++)
		
		//glTranslatef(-115,-471,0);
		
	}
	if(r==10){
		r=11;
		for_car1();
		r=12;
		x++;
	}
	if(x==6)
	{
		glPushMatrix();
		glTranslatef(55,456,0);
		glRotatef(-180,0,0,1);
		glScalef(1.0,0.8,0);
		glTranslatef(-55,-456,0);
		glTranslatef(0,rev,0);
		vehicle4();
		glPopMatrix();
		vehicle2();
		vehicle3();
		print();
		
		
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);
		glPushMatrix();
		glTranslatef(115,-477,0);
		glRotatef(90,0,0,1);
		glScalef(1.7,0.5,0);
		glTranslatef(-115,477,0);
		glTranslatef(0,rev1,0);
		vehicle1();
		delay();
		glPopMatrix(); 
		//for(i=0;i<10;i++)
		
		//glTranslatef(-115,-471,0);
		
	}

	if(r==12){
		z=90;
		r=13;
		rot_car3();
		r=14;
		x++;
	}
	if(x==7)
	{
				
		glPushMatrix();
		glTranslatef(55,477,0);
		glRotatef(-180,0,0,1);
		glScalef(1.0,0.8,0);
		glTranslatef(-55,-477,0);
		glTranslatef(0,rev,0);
		vehicle4();
		glPopMatrix();
		vehicle2();
		vehicle3();
		print();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);
		glPushMatrix();
		glTranslatef(55,-250,0);
		glRotatef(z,0,0,1);
		glScalef(1.0,0.5,0);
		glTranslatef(-55,250,0);
		glTranslatef(-250,200,0);
		vehicle1();
		delay();
		glPopMatrix();
		
		//for(i=0;i<10;i++)
		
		//glTranslatef(-115,-471,0);
		
	}
	if(r==14){
		r=15;
		for_car2();
		r=16;
		x++;
	}
	if(x==8)
	{
		glPushMatrix();
		glTranslatef(55,-250,0);
		glRotatef(0,0,0,1);
		glScalef(1.0,0.5,0);
		glTranslatef(-55,250,0);
		glTranslatef(-250,200,0);
		vehicle1();
		glPopMatrix();

		vehicle2();
		vehicle3();
		print();
		
		
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();

		//for(i=0;i<10;i++)
		glPushMatrix();
		glTranslatef(55,456,0);
		glRotatef(-180,0,0,1);
		glScalef(1.0,0.8,0);
		glTranslatef(-55,-456,0);
		glTranslatef(0,rev1,0);
		vehicle4();
		delay();
		glPopMatrix();

		//glTranslatef(-115,-471,0);
		
	}
	if(r==16){
		z=-180;
		r=17;
		rot_car4();
		r=18;
		x++;
	}
	if(x==9)
	{
		
		glPushMatrix();
		glTranslatef(55,-250,0);
		glRotatef(0,0,0,1);
		glScalef(1.0,0.5,0);
		glTranslatef(-55,250,0);
		glTranslatef(-250,200,0);
		vehicle1();
		glPopMatrix();
		vehicle2();
		vehicle3();
		print();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);
		glPushMatrix();
		glTranslatef(55,-250,0);
		glRotatef(z,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-55,+250,0);
		vehicle4();
		delay();
		glPopMatrix();
		
		//for(i=0;i<10;i++)
		
		//glTranslatef(-115,-471,0);
		
	}

	if(r==18){
		r=19;
		for_car3();
		r=20;
		x++;
	}
	if(x==10)
	{
		glPushMatrix();
		glTranslatef(55,-250,0);
		glRotatef(0,0,0,1);
		glScalef(1.0,0.5,0);
		glTranslatef(-55,250,0);
		glTranslatef(-250,200,0);
		vehicle1();
		glPopMatrix();

		vehicle2();
		vehicle3();
		print();
		
		
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();

		//for(i=0;i<10;i++)
		glPushMatrix();
		glTranslatef(-70,-250,0);
		glRotatef(-90,0,0,1);
		glScalef(1.0,0.8,0);
		glTranslatef(70,250,0);
		glTranslatef(0,rev1,0);
		vehicle4();
		delay();
		glPopMatrix();

		//glTranslatef(-115,-471,0);
		
	}


	if(r==20){
		r=21;
		for_car4();
		r=22;
		x++;
	}
	if(x==11)
	{
		glPushMatrix();
		glTranslatef(0,-340,0);
		glRotatef(-90,0,0,1);
		glScalef(1.45,.5,0);
		glTranslatef(0,340,0);
		vehicle4();
		glPopMatrix();

		vehicle2();
		vehicle3();
		print();
		
		
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();

		//for(i=0;i<10;i++)
		glPushMatrix();
		glTranslatef(626,-280,0);
		glRotatef(0,0,0,1);
		glScalef(1.0,0.8,0);
		glTranslatef(-626,280,0);
		glTranslatef(-270,rev1,0);
		vehicle1();
		delay();
		glPopMatrix();

		//glTranslatef(-115,-471,0);
		
	}
	if(r==22){
		z=-10;
		r=23;
		rot_car5();
		r=24;
		x++;
	}
	if(x==12)
	{
		
		glPushMatrix();
		glTranslatef(0,-340,0);
		glRotatef(-90,0,0,1);
		glScalef(1.45,.5,0);
		glTranslatef(0,340,0);
		vehicle4();
		glPopMatrix();
		glPopMatrix();
		vehicle2();
		vehicle3();
		print();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);
		glPushMatrix();
		glTranslatef(270,171,0);
		glRotatef(z,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-270,-171,0);
		glTranslatef(-80,100,0);
		vehicle1();
		delay();
		glPopMatrix();
		
		//for(i=0;i<10;i++)
		
		//glTranslatef(-115,-471,0);
		
	}

	if(r==24){
		z=-90;
		r=25;
		rot_car6();
		r=26;
		x++;
	}
	if(x==13)
	{
		
		glPushMatrix();
		glTranslatef(0,-340,0);
		glRotatef(-90,0,0,1);
		glScalef(1.45,.5,0);
		glTranslatef(0,340,0);
		vehicle4();
		glPopMatrix();
		vehicle2();
		vehicle3();
		print();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		glPushMatrix();
		glTranslatef(115,1250,0);
		glRotatef(0,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-115,-1250,0);
		//glTranslatef(-80,100,0);
		vehicle1();
		delay();
		glPopMatrix();
		
	}

	if(r==26){
		z=0;
		r=27;
		rotate_car();
		r=28;
		x++;
	}
	if(x==14)
	{

		glPushMatrix();
		glTranslatef(115,1250,0);
		glRotatef(0,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-115,-1250,0);
		//glTranslatef(-80,100,0);
		vehicle1();
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(0,-340,0);
		glRotatef(-90,0,0,1);
		glScalef(1.45,.5,0);
		glTranslatef(0,340,0);
		vehicle4();
		glPopMatrix();
		
		vehicle2();
		print();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		glPushMatrix();
		glTranslatef(115,145,0);
		glRotatef(-90,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-115,-145,0);
		//glTranslatef(-80,100,0);
		vehicle3();
		delay();
		glPopMatrix();
		
	}

	if(r==28){
		r=29;
		rev_car1();
		r=30;
		x++;
	}
	if(x==15)
	{

		glPushMatrix();
		glTranslatef(115,1250,0);
		glRotatef(0,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-115,-1250,0);
		//glTranslatef(-80,100,0);
		vehicle1();
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(0,-340,0);
		glRotatef(-90,0,0,1);
		glScalef(1.45,.5,0);
		glTranslatef(0,340,0);
		vehicle4();
		glPopMatrix();
		
		vehicle2();
		print();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		glPushMatrix();
		glTranslatef(115,145,0);
		glRotatef(-90,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-115,-145,0);
		glTranslatef(0,rev,0);
		vehicle3();
		delay();
		glPopMatrix();
		
	}

	if(r==30){
		z=-90;
		r=31;
		rot_car1();
		r=32;
		x++;
	}
	if(x==16)
	{

		glPushMatrix();
		glTranslatef(115,1250,0);
		glRotatef(0,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-115,-1250,0);
		//glTranslatef(-80,100,0);
		vehicle1();
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(0,-340,0);
		glRotatef(-90,0,0,1);
		glScalef(1.45,.5,0);
		glTranslatef(0,340,0);
		vehicle4();
		glPopMatrix();
		
		vehicle2();
		print();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		glPushMatrix();
		glTranslatef(55,145,0);
		glRotatef(z,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-55,-145,0);
		//glTranslatef(0,rev,0);
		vehicle3();
		delay();
		//delay();
		glPopMatrix();
		
	}

	if(r==32){
		r=33;
		for_car7();
		r=34;
		x++;
	}
	if(x==17)
	{
		glPushMatrix();
		glTranslatef(115,1250,0);
		glRotatef(0,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-115,-1250,0);
		//glTranslatef(-80,100,0);
		vehicle1();
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(0,-340,0);
		glRotatef(-90,0,0,1);
		glScalef(1.45,.5,0);
		glTranslatef(0,340,0);
		vehicle4();
		glPopMatrix();
		print();
		
		glPushMatrix();
		glTranslatef(55,145,0);
		glRotatef(-180,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-55,-145,0);
		//glTranslatef(0,rev,0);
		vehicle3();
		glPopMatrix();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();

		glPushMatrix();
		glTranslatef(100,191,0);
		glRotatef(0,0,0,1);
		glScalef(1.0,0.8,0);
		glTranslatef(-100,-191,0);
		glTranslatef(0,rev,0);
		vehicle2();
		delay();
		glPopMatrix();

		
	}


	if(r==34){
		z=-180;
		r=35;
		for_car6();
		
		r=36;
		x++;
	}
	
	
	
	if(x==18)
	{
		glPushMatrix();
		glTranslatef(115,1250,0);
		glRotatef(0,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-115,-1250,0);
		//glTranslatef(-80,100,0);
		vehicle1();
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(0,-340,0);
		glRotatef(-90,0,0,1);
		glScalef(1.45,.5,0);
		glTranslatef(0,340,0);
		vehicle4();
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(100,191,0);
		glRotatef(0,0,0,1);
		glScalef(1.0,0.8,0);
		glTranslatef(-100,-191,0);
		glTranslatef(0,rev,0);
		vehicle2();
		glPopMatrix();
		print();
		
		
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();

		//for(i=0;i<10;i++)
		glPushMatrix();
		glTranslatef(55,456,0);
		glRotatef(-180,0,0,1);
		glScalef(1.0,0.8,0);
		glTranslatef(-55,-456,0);
		glTranslatef(0,rev1,0);
		vehicle3();
		delay();
		glPopMatrix();

		//glTranslatef(-115,-471,0);
		
	}
	if(r==36){
		z=-180;
		r=37;
		rot_car4();
		r=38;
		x++;
	}
	if(x==19)
	{
		
		glPushMatrix();
		glTranslatef(115,1250,0);
		glRotatef(0,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-115,-1250,0);
		//glTranslatef(-80,100,0);
		vehicle1();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(0,-340,0);
		glRotatef(-90,0,0,1);
		glScalef(1.45,.5,0);
		glTranslatef(0,340,0);
		vehicle4();
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(100,191,0);
		glRotatef(0,0,0,1);
		glScalef(1.0,0.8,0);
		glTranslatef(-100,-191,0);
		glTranslatef(0,rev,0);
		vehicle2();
		glPopMatrix();
		print();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);
		glPushMatrix();
		glTranslatef(115,-145,0);
		glRotatef(z,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-115,+145,0);
		vehicle3();
		delay();
		glPopMatrix();
		
		//for(i=0;i<10;i++)
		
		//glTranslatef(-115,-471,0);
		
	}
	
	if(r==38){
		z=0;
		r=39;
		rotate_car();
		r=40;
		x++;
	}
	if(x==20)
	{
		
		glPushMatrix();
		glTranslatef(115,1250,0);
		glRotatef(0,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-115,-1250,0);
		//glTranslatef(-80,100,0);
		vehicle1();
		glPopMatrix();
		
		glPushMatrix();
		glTranslatef(0,-340,0);
		glRotatef(-90,0,0,1);
		glScalef(1.45,.5,0);
		glTranslatef(0,340,0);
		vehicle4();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(185,-245,0);
		glRotatef(-90,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-185,+245,0);
		vehicle3();
		glPopMatrix();
		print();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);
		
		glPushMatrix();
		glTranslatef(100,191,0);
		glRotatef(z,0,0,1);
		glScalef(1.7,0.5,0);
		glTranslatef(-100,-191,0);
		//glTranslatef(0,rev,0);
		vehicle2();
		delay();
		glPopMatrix();
	}

	if(r==40){
		r=41;
		for_car8();
		r=42;
		x++;
	}
	if(x==21)
	{
		
		
		final_car();
		
		glPushMatrix();
		glTranslatef(0,-340,0);
		glRotatef(-90,0,0,1);
		glScalef(1.45,.5,0);
		glTranslatef(0,340,0);
		vehicle4();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(185,-245,0);
		glRotatef(-90,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-185,+245,0);
		vehicle3();
		glPopMatrix();
		print();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);
		
		glPushMatrix();
		glTranslatef(100,191,0);
		glRotatef(-90,0,0,1);
		glScalef(1.7,0.5,0);
		glTranslatef(-100,-191,0);
		glTranslatef(0,rev,0);
		vehicle2();
		delay();
		glPopMatrix();
		//for(i=0;i<10;i++)
		
		//glTranslatef(-115,-471,0);
	}
	if(r==42){
		z=0;
		r=43;
		rotate_car();
		r=44;
		x++;
	}
	if(x==22)
	{
		
		glPushMatrix();
		glTranslatef(0,-340,0);
		glRotatef(-90,0,0,1);
		glScalef(1.45,.5,0);
		glTranslatef(0,340,0);
		vehicle4();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(185,-245,0);
		glRotatef(-90,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-185,+245,0);
		vehicle3();
		glPopMatrix();
		print();

		glPushMatrix();
		glTranslatef(100,191,0);
		glRotatef(-90,0,0,1);
		glScalef(1.7,0.5,0);
		glTranslatef(-100,-191,0);
		glTranslatef(0,950,0);
		vehicle2();
		glPopMatrix();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);	

		glPushMatrix();
		glTranslatef(115,471,0);
		glRotatef(z,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-115,-471,0);
		final_car();
		delay();
		glPopMatrix();
	}

	if(r==44){
		z=0;
		r=45;
		for_car9();
		r=46;
		x++;
	}
	if(x==23)
	{
		
		glPushMatrix();
		glTranslatef(0,-340,0);
		glRotatef(-90,0,0,1);
		glScalef(1.45,.5,0);
		glTranslatef(0,340,0);
		vehicle4();
		glPopMatrix();

		glPushMatrix();
		glTranslatef(185,-245,0);
		glRotatef(-90,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-185,+245,0);
		vehicle3();
		glPopMatrix();
		print();

		glPushMatrix();
		glTranslatef(100,191,0);
		glRotatef(-90,0,0,1);
		glScalef(1.7,0.5,0);
		glTranslatef(-100,-191,0);
		glTranslatef(0,950,0);
		vehicle2();
		glPopMatrix();
		glMatrixMode(GL_MODELVIEW);
		glLoadIdentity();
		//glMatrixMode(GL_MODELVIEW);
		
			

		glPushMatrix();
		glTranslatef(115,471,0);
		glRotatef(-90,0,0,1);
		glScalef(1.4,0.5,0);
		glTranslatef(-115,-471,0);
		glTranslatef(0,rev,0);
		final_car();
		delay();
		glPopMatrix();
	}
	if(x==24)
	{	
		delay();
		delay();
		delay();
		scene=2;
		x++;
	}
	if(x==25)
	{
		delay();
		scene4();
	}
	
	
}
void init()
{
	glMatrixMode(GL_PROJECTION);
	glLoadIdentity();
	gluOrtho2D(-600,600,-700,700);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
}
void display()
{
	glClear(GL_COLOR_BUFFER_BIT);
	glMatrixMode(GL_MODELVIEW);
	glLoadIdentity();
	if(scene==0)
		scene3();
	if(scene==1)
	{
		scene1();
		
	}
	if(scene==2)
	{
		scene2();
	}
	if(scene==3)
		scene4();	
	
}
void rectangle(GLfloat *a,GLfloat *b,GLfloat *c,GLfloat *d)
{
	glBegin(GL_POLYGON);
	glVertex2fv(a);
	glVertex2fv(b);
	glVertex2fv(c);
	glVertex2fv(d);
	glEnd();
}
void line(GLfloat *a,GLfloat *b)
{
	glBegin(GL_LINES);
	glVertex2fv(a);
	glVertex2fv(b);
	glEnd();
}
void car()
{
	glColor3f(0.8,0.7,0.7);
	rectangle(v[0],v[1],v[2],v[3]);//main road
	glColor3f(0.5,0.3,0.2);
	rectangle(v[0],v[3],v[5],v[4]);//barrier 1
	glColor3f(0.5,0.3,0.2);
	rectangle(v[1],v[7],v[6],v[2]);//barrier 2
	glColor3f(1,1,1);
	for(int i=8;i<48;i++)
	{
		line(v[i],v[i++]);
	}
	glColor3f(0,0,0);
	for(int i=48;i<64;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}



	glColor3f(1,0,0);
	for(int i=112;i<119;i++)
	{
		line(v[i],v[i+1]);
	}
	line(v[119],v[112]);
	
	for(int i=120;i<124;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}



	for(int i=124;i<131;i++)
	{
		line(v[i],v[i+1]);
	}
	line(v[131],v[124]);
	
	for(int i=132;i<135;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}



	
	for(int i=136;i<143;i++)
	{
		line(v[i],v[i+1]);
	}
	line(v[143],v[136]);
	
	for(int i=144;i<147;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	
	for(int i=148;i<155;i++)
	{
		line(v[i],v[i+1]);
	}
	line(v[155],v[148]);
	
	for(int i=156;i<159;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}

}
void vehicle1()
{
	
	//glPushMatrix();
	glColor3f(0,0,0);
	for(int i=64;i<67;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	//wheels
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(75,-450);
    	glEnd();
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(152,-450);
	glEnd();
	//wheels
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(75,-530);
    	glEnd();
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(152,-530);
	glEnd();
	//outer body line
	glLineWidth(3);
	glColor3f(0.06,0.93,0.02);
	for(int i=64;i<67;i++)
	{
		line(v[i],v[i+1]);
	}
	line(v[67],v[64]);
	
	
	glColor3f(0.06,0.93,0.02);
	for(int i=68;i<71;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	glColor3f(0,0,0);
	for(int i=72;i<75;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	glColor3f(1,0.5,0);
	glRasterPos2f(100,-494);
	for(int k=0;k<strlen(str1);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str3[k]);
	
	glutSwapBuffers();
	glFlush();
}
void vehicle2()
{
	glColor3f(0,0,0);
	for(int i=76;i<79;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	//wheels top left
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(75,-127);
    	glEnd();
	//wheels top right
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(152,-127);
	glEnd();
	//wheels bottom left
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(75,-202);
    	glEnd();
	//wheel bottom right
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(152,-202);
	glEnd();
	//outer body line
	glLineWidth(3);
	glColor3f(0.06,0.93,0.02);
	for(i=76;i<79;i++)
	{
		line(v[i],v[i+1]);
	}
	line(v[79],v[76]);
	
	glColor3f(0.06,0.93,0.02);
	for(int i=80;i<83;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	glColor3f(0,0,0);
	for(int i=84;i<87;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	glColor3f(1,0.5,0);
	glRasterPos2f(100,-184);
	for(k=0;k<strlen(str1);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str2[k]);
	glFlush();
}
void vehicle3()
{
	glColor3f(0,0,0);
	for(int i=88;i<91;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	//wheels top left
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(75,191);
    	glEnd();
	//wheels top right
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(152,191);
	glEnd();
	//wheels bottom left
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(75,116);
    	glEnd();
	//wheel bottom right
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(152,116);
	glEnd();
	//outer body line
	glLineWidth(3);
	glColor3f(0.06,0.93,0.02);
	for(i=88;i<91;i++)
	{
		line(v[i],v[i+1]);
	}
	line(v[91],v[88]);
	
	glColor3f(0.06,0.93,0.02);
	for(int i=92;i<95;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	glColor3f(0,0,0);
	for(int i=96;i<99;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+3],v[i+2]);
	}
	glColor3f(1,0.5,0);
	glRasterPos2f(100,142);
	for(k=0;k<strlen(str1);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str1[k]);
	glFlush();
}
void vehicle4()
{
	glColor3f(0,0,0);
	for(int i=100;i<103;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	//wheels top left
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(75,509);
    	glEnd();
	//wheels top right
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(152,509);
	glEnd();
	//wheels bottom left
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(75,434);
    	glEnd();
	//wheel bottom right
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(152,434);
	glEnd();
	glLineWidth(3);
	glColor3f(0.06,0.93,0.02);
	for(i=100;i<103;i++)
	{
		line(v[i],v[i+1]);
	}
	line(v[103],v[100]);
	
	glColor3f(0.06,0.93,0.02);
	for(int i=104;i<107;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	glColor3f(0,0,0);
	for(int i=108;i<111;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	char str[]={"07"};
	glColor3f(1,0.5,0);
	glRasterPos2f(100,460);
	for(int k=0;k<strlen(str);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[k]);	
	glFlush();
}
void final_car()
{
	glColor3f(0,0,0);
	for(int i=100;i<103;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	//wheels top left
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(75,509);
    	glEnd();
	//wheels top right
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(152,509);
	glEnd();
	//wheels bottom left
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(75,434);
    	glEnd();
	//wheel bottom right
	glColor3f(0, 0, 0);
    	glPointSize(13);
    	glBegin(GL_POINTS);
	glVertex2i(152,434);
	glEnd();
	glLineWidth(3);
	glColor3f(0.06,0.93,0.02);
	for(i=100;i<103;i++)
	{
		line(v[i],v[i+1]);
	}
	line(v[103],v[100]);
	
	glColor3f(0.06,0.93,0.02);
	for(int i=104;i<107;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	glColor3f(0,0,0);
	for(int i=108;i<111;i+=4)
	{
		rectangle(v[i],v[i+1],v[i+2],v[i+3]);
	}
	char str[]={"07"};
	glColor3f(1,0.5,0);
	glRasterPos2f(100,460);
	for(int k=0;k<strlen(str);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str5[k]);	
	glFlush();
}
void print()
{
	char string[]={"69"};
	char string1[]={"44"};
	char string2[]={"38"};
	char string3[]={"07"};

	
	
	
	glColor3f(0,0,0);
	glRasterPos2f(460,460);
	for(k=0;k<strlen(string);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string[k]);
	
	glRasterPos2f(460,142);
	for(k=0;k<strlen(string);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string1[k]);

	glRasterPos2f(460,-184);
	for(k=0;k<strlen(string);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string2[k]);

	glRasterPos2f(460,-494);
	for(k=0;k<strlen(string);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,string3[k]);
	glFlush();
}
void scene3()
{
	char tnq[]={"SELECTION SORT ON PARKING SPOTS"},
	     by[]={"COMPUTER GRAPHICS AND VISUALIZATION:"},
	  
		clg2[]={"A MINI PROJECT ON"};
	glClearColor(0,0,0,1);

	glColor3f(0,1,1);
	glRasterPos2f(-290,183);
	for(int k=0;k<strlen(tnq);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,tnq[k]);

	glColor3f(0,1,1);
	glRasterPos2f(-370,323);
	for(int k=0;k<strlen(by);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,by[k]);
	
	
	glColor3f(0,1,1);
	glRasterPos2f(-370,383);
	for(int k=0;k<strlen(clg2);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,clg2[k]);

	glFlush();
}
void scene1(){
	glClearColor(1,1,1,1);
	glClear(GL_COLOR_BUFFER_BIT);
	char head[]={"SELECTION SORT"};
	char ss[]={"The selection sort algorithm sorts an array by repeatedly finding the minimum element "};
	char ss1[]={"and putting it at the beginning.The algorithm maintains two sub arrays in a given array."};
	char p1[]={"1.The subarray which is already sorted"};
	char p2[]={"2.Remaining array which is unsorted"};
	char p[]={"Algorithm:"};
	char p3[]={"1.Set location to zero"};
	char p4[]={"2.Search the minimum element in the list"};
	char p5[]={"3.Swap with value at location min"};
	char p6[]={"4.Increment MIN to point to next element"};
	char p7[]={"5.Repeat until list is sorted"};
	char s[]={"PARKING SPOT"};
	glColor3f(0,0,0);
	glRasterPos2f(-90,573);
	for(int k=0;k<strlen(s);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,s[k]);

	glRasterPos2f(-330,382);
	for(int k=0;k<strlen(head);k++)
        	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,head[k]);

	glRasterPos2f(-330,322);
	for(int k=0;k<strlen(ss);k++)
        	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,ss[k]);

	glRasterPos2f(-330,272);
	for(int k=0;k<strlen(ss1);k++)
        	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,ss1[k]);

	glRasterPos2f(-330,222);
	for(int k=0;k<strlen(p1);k++)
        	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,p1[k]);

	glRasterPos2f(-330,172);
	for(int k=0;k<strlen(p2);k++)
        	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,p2[k]);


	glRasterPos2f(-330,92);
	for(int k=0;k<strlen(p);k++)
        	glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,p[k]);

	glRasterPos2f(-330,42);
	for(int k=0;k<strlen(p3);k++)
        	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,p3[k]);

	glRasterPos2f(-330,-12);
	for(int k=0;k<strlen(p4);k++)
        	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,p4[k]);

	glRasterPos2f(-330,-62);
	for(int k=0;k<strlen(p5);k++)
        	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,p5[k]);

	glRasterPos2f(-330,-112);
	for(int k=0;k<strlen(p6);k++)
        	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,p6[k]);

	glRasterPos2f(-330,-162);
	for(int k=0;k<strlen(p7);k++)
        	glutBitmapCharacter(GLUT_BITMAP_HELVETICA_18,p7[k]);
	glFlush();

}

void mouse(int btn,int state,int x,int y)
{
	if(btn==GLUT_LEFT_BUTTON && state==GLUT_DOWN)
		scene=1;
	if(btn==GLUT_RIGHT_BUTTON && state==GLUT_DOWN)
		scene=2;
	
	glutPostRedisplay();
}

void keypress(unsigned char key,int x,int y)
{
	if(key=='s')
	{
		scene=2;
	}
	if(key=='x')
		scene=3;
	glutPostRedisplay();
}
void rotate_car()
{
	while(z!=-90)
	{
		z-=10;
		scene2();
		
	}
}
void rev_car(){
	for(rev=0;rev>-175;rev-=20)
		scene2();
}
void rev_car1(){
	for(rev=0;rev>-225;rev-=20)
		scene2();
}
void rot_car1()
{
	while(z!=-180)
	{
		z-=10;
		scene2();
		
	}
}
void rot_car2()
{
	while(z!=90)
	{
		z+=10;
		scene2();
		
	}
}
void rot_car3()
{
	while(z!=0)
	{
		z-=10;
		scene2();
		
	}
}
void rot_car4()
{
	while(z!=-110)
	{
		z+=5;
		scene2();
		
	}
}
void rot_car5()
{
	while(z!=-90)
	{
		z-=10;
		scene2();
		
	}
}
void rot_car6()
{
	while(z!=0)
	{
		z+=10;
		scene2();
		
	}
}
void for_car(){
	for(rev=0;rev<800;rev+=80)
		scene2();
}
void for_car1(){
	for(rev1=0;rev1<230;rev1+=80)
		scene2();
}
void for_car2(){
	for(rev1=800;rev1<1250;rev1+=40)
		scene2();
}
void for_car3(){
	for(rev1=0;rev1<60;rev1+=10)
		scene2();
}

void for_car4(){
	for(rev1=0;rev1<550;rev1+=80)
		scene2();
}
void for_car5(){
	for(rev=0;rev<400;rev+=400)
		scene2();
}
void for_car6(){
	for(rev1=675;rev1<850;rev1+=40)
		scene2();
}
void for_car7(){
	for(rev=0;rev<300;rev+=150)
		scene2();
}
void for_car8(){
	for(rev=100;rev<950;rev+=20)
		scene2();
}
void for_car9(){
	for(rev=50;rev<580;rev+=10)
		scene2();
}
void scene4()
{	
	char str[]={"THANK YOU!!!"};
	glRasterPos2f(-90,573);
	for(int x=0;str[x]!='\0';x++)
	{
		glutBitmapCharacter(GLUT_BITMAP_TIMES_ROMAN_24,str[x]);
	}
}
void delay()
{
	for(double i=5000000;i>0;i--){}
}

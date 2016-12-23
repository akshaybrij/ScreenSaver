#include<aks.h>
#include<math.h>
void main()
{
clrscr();
int gd=DETECT,gm;
initgraph(&gd,&gm,"f:\\tc\\bgi");
setcolor(YELLOW);
float i=0;
while(!kbhit())
{
setcolor(YELLOW);
circle(300,180,80);

setcolor(BLUE);
circle(300+80*sin(i+5),180+80*cos(i+0.5),10);
delay(50);
setcolor(RED);
circle(300 +80*sin(i+1),180+80*cos(i),10);
delay(50);
setcolor(YELLOW);
circle(300+80*sin(i),180+80*cos(i),10);
delay(50);
setcolor(GREEN);
circle(300+100*sin(i),180+10*cos(i),10);
i+=0.1;

setcolor(random(150));
settextstyle(4,0,7)  ;
outtextxy(150,400,"#NUCLEUS") ;

int x,y,z,j;
x = getmaxx();
y=getmaxy();
setcolor(random(1300));
z=random(x) ;
j=random(y);
line(z,j,z,j);

	   setcolor(random(1200));

}







getch();
}
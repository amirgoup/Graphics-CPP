#include<graphics.h>
int main()
{
	int i,a;
	initwindow(1000,1000);
	for(i=0;i<1000;i++)
	{
		circle(0+i,500,20);
		delay(10);
		cleardevice();
	}
	settextstyle(DEFAULT_FONT, HORIZ_DIR, 4);
	settextjustify(1, 1);
	outtextxy(500,500,"driving over");
	getch();
	closegraph();

}

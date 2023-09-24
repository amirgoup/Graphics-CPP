	#include<graphics.h>
	int main()
	{
	    initwindow(800,800);   		
   		moveto(100, 100);
   		lineto(200,200);
   		getch();
   		moverel(100, -100);
   		lineto(200,200);
   		getch();
		closegraph();
	}

	#include<graphics.h>
	int main()
	{
	    initwindow(800,800);
	    int x = 320, y = 240, radius;
	    for (radius = 25; radius <= 125; radius += 20)
      		circle(x, y, radius);	
	    getch();	
	}

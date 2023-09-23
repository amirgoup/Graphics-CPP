	#include<graphics.h>
	int main()
	{
	    initwindow(800,800);
	    int points[]={320,150,420,300,250,300,320,150};
	    //drawpoly( int num, int *polypoints )
	    drawpoly(4, points);
	    getch();	
	}

	#include<graphics.h>
	int main()
	{
	    initwindow(800,800);
	    outtext("Press any key to clear the screen.");
   		getch();
   		cleardevice();
   		outtext("Press any key to exit...");
   		
	    getch();	
	}

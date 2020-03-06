#include<stdio.h>
int main()
{
	float red,green,blue,white,cyan,magenta,yellow,black;
	printf("Enter the value of \nRed: ");
	scanf("%f",&red);
	printf("Green: ");
	scanf("%f",&green);
	printf("Blue: ");
	scanf("%f",&blue);
	red=red/255;
	green=green/255;
	blue=blue/255;
	//if (red==gr)
	white=(red>green?(red>blue?red:blue):(green>blue?green:blue));
	printf("White: %f",white);
	cyan=(white-red)/white;
	magenta=(white-green)/white;
	yellow=(white-blue)/white;
	black=1-white;
	printf("Cyan: %f\nMagenta: %f\nYellow: %f\nBlack: %f\n",cyan,magenta,yellow,black);
	return 1;
}

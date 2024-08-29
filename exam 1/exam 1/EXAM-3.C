#include<stdio.h>
#include<conio.h>
main()
{
	int y1,y2,a;
	clrscr();

	printf("Enter the leap year 1 :");
	scanf("%d",&y1);


	if(a=y1%4)
	{
		printf("its leap year");
	}
	else
	{
		printf("its not leap year");
	}
	getch();
}
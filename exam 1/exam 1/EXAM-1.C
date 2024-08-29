#include<stdio.h>
#include<conio.h>
main()
{
	float c,f;
	clrscr();
	printf("Enter value of c :");
	scanf("%f",&c);

	f=(c*9/5)+32;
	printf("%.2f",f);
	getch();
}

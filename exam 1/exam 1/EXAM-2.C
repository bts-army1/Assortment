#include<stdio.h>
#include<conio.h>
main()
{
	char Day;
	clrscr();
	printf("1) sunday\n");
	printf("2) monday\n");
	printf("3) tuesday\n");
	printf("4) wednesday\n");
	printf("5) thursday\n");
	printf("6) friday\n");
	printf("7) saturday\n");
	scanf("%c",&Day);

	switch(Day)
	{
		case '1':
			printf("sunday");
			break;
		case '2':
			printf("monday");
			break;
		case '3':
			printf("tuesday");
			break;
		case '4':
			printf("wednesday");
			break;
		case '5':
			printf("thursday");
			break;
		case '6':
			printf("friday");
			break;
		case '7':
			printf("saturday");
			break;

	}
	getch();

}
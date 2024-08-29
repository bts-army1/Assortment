#include<stdio.h>
#include<conio.h>
main()
{
	int roll,sum,percentage,grade;
	float m1,m2,m3;
	clrscr();

	printf("enter marks 1 \n:");
	scanf("%.2f",m1);
	printf("enter marks 2 \n:");
	scanf("%.2f",m2);
	printf("enter marks 3 \n:");
	scanf("%.2f",m3);

	sum=m1+m2+m3;
	percentage = (sum/300)*100;

	if(percentage>=90)
	{
		grade = 'A';
	}
	else if(percentage>=80)
	{
		grade = 'B';
	}
	else if(percentage>=70)
	{
		grade = 'C';
	}
	else if(percentage>=60)
	{
		grade = 'D';
	}
	else
	{
		grade = 'F';
	}

	printf("roll number : %d\n",roll);
	printf("sum marks : %.2f",sum);
	printf("percentage : %.2f",percentage);
	printf("grade : %c\n",grade);
	getch();
}
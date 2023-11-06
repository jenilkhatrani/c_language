#include<stdio.h>
#include<conio.h>
void main()
{
int ac,stat,eco,ba,sp;
float result;
clrscr();

	printf("enter your ac marks : ");
	scanf("%d",&ac);

	printf("enter your stat marks : ");
	scanf("%d",&stat);

	printf("enter your eco marks : ");
	scanf("%d",&eco);

	printf("enter your ba marks : ");
	scanf("%d",&ba);

	printf("enter your sp marks : ");
	scanf("%d",&sp);

	result=(ac+stat+eco+ba+sp)/5;
	printf("your result is : %.2f",result);
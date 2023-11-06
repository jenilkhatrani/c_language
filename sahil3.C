#include<stdio.h>
#include<conio.h>
void main()
{
float area,base,height;
clrscr();

	printf("enter value of base : ");
	scanf("%f",&base);

	printf("enter value of height : ");
	scanf("%f",&height);

	area=(base*height)/2;
	printf("area is : %.2f",area);
}
#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("Enter First Number\n");
	scanf("%d",&a);
	printf("Enter Second Number\n");
	scanf("%d",&b);
	c = a+b;
	d = a-b;
	e = a*b;
	f = a%b;
	printf("ADDITION is: %d\n",c);
	printf("SUBTRACTION is: %d\n",d);
	printf("MULTIOLICATION is: %d\n",e);
	printf("DIVISION is: %d\n",f);
return 0;
}

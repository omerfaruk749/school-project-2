#include <stdio.h>
#include <stdlib.h>
int main()
{
	int a,b,c,d,e;
	printf("Pascal ucgeni Kac Satir Olsun? = ");
	scanf("%d",&a);
	printf("\n");
	for (b=0;b<a;b++)
	{
	int c=1;
	for (d=0;d<a-b;d++)
	{
		printf(" ");
	}
	for (e=0;e<=b;e++)
	{
		printf("%d",c);
		c=c*(b-e)/(e+1);
	}
	printf("\n");
	}
	return 0;
}

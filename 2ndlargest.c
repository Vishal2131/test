#include<stdio.h>
int main()
{
	int a[10],i;
	for(i=0;i<10;i++)
	{scanf("%d",&a[i]);
	}
	for(i=0;i<10;i+2)
	{
		printf("%d",a[i]);
	}
}


#include<stdio.h>
#include<string.h>
int main()
{
	int i,b,c,s,l,n;
    printf("enter the size of array");
    scanf("%d",&n);
    int a[n];
	printf("enter the elemens of array");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	s=a[0];
	l=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>l)
		l=a[i];
		if(a[i]<s)
		s=a[i];
	}b=a[n/2];
	c=a[n/2];
	for(i=0;i<n;i++)
	{
		if(a[i]<l&&a[i]>b)
		b=a[i];
		if(a[i]>s&&a[i]<c)
		c=a[i];
	}
	printf("%d %d",b,c);
}

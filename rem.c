#include<conio.h>
#include<stdio.h>
int main()
{
	int t,i,a[100],b[100],rem[100];
	scanf("%d",&t);
	for(i=0;i<t;i++)
	{
		scanf("%d %d",&a[i],&b[i]);
	}
	printf("OUTPUT");
	for(i=0;i<t;i++)
	{
		rem[i]=a[i]%b[i];
		printf("\n%d",rem[i]);
	}
}

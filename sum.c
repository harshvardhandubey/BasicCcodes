#include<conio.h>
#include<stdio.h>
int main()
{
	int t,a[100],b[100],sum[1000],i,j;
	printf("Enter the value of T :");
	scanf("%d",&t);
	if(t<1000)
	{
		for(i=0;i<t;i++)
		{
			printf("Enter a and b:\n");
			scanf("%d %d",&a[i],&b[i]);
		}
		for(i=0;i<t;i++)
		{
			sum[i]=a[i]+b[i];
			printf("\n%d",sum[i]);
		}
	}
}

#include<stdio.h>
int main()
{
	int t,a[10000],b[10000],i;
	scanf("%d",&t);
	if(t>0&&t<=10000)
	{
		for(i=0;i<t;i++)
		{
			scanf("%d%d",&a[i],&b[i]);
		}
		for(i=0;i<t;i++)
		{
			printf("%d\n",(a[i]+b[i]));
		}
	}
	return 0;
}

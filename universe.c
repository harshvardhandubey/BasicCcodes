#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int n,a[100],i;
	printf("Enter the number of terms :\n");
	scanf("%d",&n);
	printf("Enter the elements :\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("\n\n\nLatter print");
	for(i=0;i<n;i++)
	{
		if(a[i]==42)
		break;
		else
		printf(" %d ",a[i]);
	}
}

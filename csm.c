#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
int main()
{
	int s,d,i,t,cap,inv[10];
	char item[20];
	printf("\t\t\t\tInvetory system\n\n");
	printf("Enter the inventory capacity :");
	scanf("%d",&cap);
	for(i=0;i<cap;i++)
	{
		printf("Enter the items and names :");
		scanf("%s",item);
	}
	for(i=0;i<cap;i++)
	{
		printf("Item %d : %s",(i+1),item);
	}
	
	
}

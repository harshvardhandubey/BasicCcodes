#include<conio.h>
#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int n1,n2,diff;
	printf("Enter the numbers :");
	scanf("%d %d",&n1,&n2);
	if(n1>n2)
	{
		diff=n1-n2;
	}
	else
	{
		diff=n2-n1;
	}
	if(diff%10==9)
	{
		diff--;
	}
	else
	diff++;
	printf("%d",diff);
}

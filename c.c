#include<stdio.h>
#include<stdlib.h>
#include<math.h>
int main()
{
	int a,b,sum,diff,prod,div,ch,choice;
	printf("Hello world!");
	printf("\nEnter any two numbers\n");
	scanf("%d %d",&a,&b);
	printf("Choice Menu\n\nEnter 1 for addition\nEnter 2 for subtraction\nEnter 3 for multiplication\nEnter 4 for division\n");
scanf("%d",&ch);
	do{
	switch(ch)
		{	
		case 1:
			{
				sum=a+b;
				printf("\nThe sum is: %d",sum);
				break;
			}
		case 2:
			{
				diff=a-b;
				printf("\nThe difference is: %d",diff);
				break;
			}
		case 3:
			{
				prod=a*b;
				printf("\nThe product is: %d",prod);
				break;
			}
		case 4:
			{
				div=a/b;
				printf("\nThe division is: %d",div);
				break;
			}
		default: 
			{
				printf("\nInvalid choice");
				break;	
			}
		}
		printf("\nEnter 1 to continue, 0 to exit");
		scanf("%d",&choice);
	}while (choice==1);
}

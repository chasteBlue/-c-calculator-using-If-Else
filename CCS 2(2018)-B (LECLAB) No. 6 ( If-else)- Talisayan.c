#include <stdio.h>

main()
{
	int num1, num2, summation,difference,product,quotient,choice;
	
	printf("If else self activity.\n");
	printf("by: Talisayan, Dynnhiel Chastline M.\n");
	
	printf("Enter the first number:\n");
	scanf("%d",&num1);
	printf( "Enter the second number\n");
	scanf("%d",&num2);	
	printf("Menu\n");
	printf("1.Summation\n");
	printf("2.Subtraction\n");
	printf("3.Multiplication\n");
	printf("4.Division\n");
	printf("Enter your choice: ");
	scanf("%d",&choice);
	
	
	if (choice == 1)
	{
			summation= num1+num2;
		printf("The summation of %d and %d is %d\n",num1,num2,summation);
	}
	if (choice == 2)
	{ 
			if (num1<num2)
			{
				difference = num2-num1;
			}
		else
			if (num2<num1)
			{
				difference = num1-num2;
			}
		printf("The difference of %d and %d is %d\n ",num1,num2,difference);
	}
	if (choice == 3)
	{
		
		product= num1*num2;
	   printf("The product of %d and %d is %d\n",num1,num2,product);
	}
	if(choice == 4)
	{
			if(num1< num2)
			{
				quotient= num2/num1;
			}
			
		else
			if(num2<num1)
			{
				quotient= num1/num2;
			}
			
			printf("The quotient of %d and %d is %d",num1,num2,quotient);
	}
}

//designe a function to check the given number is prime or not .if prime return 1 else return 0;

#include<stdio.h>
int check_prime(int);
void main()
{
	int n,r;
	printf("Enter a number:\n");
	scanf("%d",&n);
	r=check_prime(n);
	if(r==1)
	{
		printf("%d is prime num.\n",n);
			//printf("%d",r);
	}
	else
	{
		printf("%d is not prime num.\n",n);
	}
}
int check_prime(int n)
{
	int i;

	for(i=2;i<n;i++)
	{
		if(n%i!=0)
		{
			break;
		}
		if(i==n)
		{ 
			// printf("%d is prime.",n);
			return 1;
		}
		else
		{
			// printf("%d is not prime.",n);
			return 0;
		}
	}
}

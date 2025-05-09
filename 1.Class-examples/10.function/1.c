//1.designed function to print the given number binary.
#include<stdio.h>
int print_binary(int);
void main()
{
	int n;
	printf("Enter a number :\n");
	scanf("%d",&n);
	print_binary(n);
}

int print_binary(int n)
{  
int pos;
	for(pos=31;pos>=0;pos--)
	{
		printf("%d",n>>pos&1);
		if(pos%8==0)
		{
			printf(" ");
		}
	}


return;
}

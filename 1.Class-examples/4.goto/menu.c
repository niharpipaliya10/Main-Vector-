/*WAP to scan a num and bit pos from user
 after that display menu for set bit, clear bit and
 comp bit ask option from user and based on user's choice prform task and disply result*/

#include<stdio.h>
void main(){


	int num,pos,op,c;
	printf("Enter a number:\n");
	scanf("%d",&num);
l1:
	printf("Enter a position of bit:\n");
	scanf("%d",&pos);

	if(pos<=31){
		printf(" Menu of options\n 1)set bit \n 2)clear bit\n 3) compliment bit\n");
		scanf("%d",&op);
                printf("your selected option is:%d\n",op);
		if(op==1)
			num = num | 1 <<pos;
		else if(op == 2)
			num = num & ~ (1 << pos);
		else if(op == 3)
			num = num ^ 1 <<pos;
		else
			printf("you selected option is envalid");
	}
	else
	{  c++;
		if(c<=3);
		goto l1;

	}


printf("After the process of menu updated num is : %d\n",num);

}


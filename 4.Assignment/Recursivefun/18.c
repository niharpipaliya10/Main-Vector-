/*
arm strong number.
*/
#include<stdio.h>
int armstrong(int);
int count_digit(int);
int mul_digit(int,int);

void main(){
    int n=55,a;
    a=armstrong(n);
    if(a==n){
        printf("armstrong");
    }else{
        printf("not");
    }

}
int count(int n){
    static int co,t,c;

	t=n;
	if(t)
	{
		c++;
		t=t/10;
		count(t);
	}
	else
	{
		co=c;
		c=0;
		return co;
	}
}

int mul_digit(int c,int n){
    static int i=1,mul=1,k;

	if(i<=c)
	{
		mul=mul*n;
		i++;
		mul_digit(c,n);
	}
	else
	{
		k=mul;
		mul=1;
		i=1;
		return k;
	}
}
int armstrong(int n){
   

    static int c,t,r,j,sum,mul,k;


	if(n)
	{
		if(k==0)
		{
			c=count(n);
			k++;
		}
		r=n%10;

		sum=sum+mul_digit(c,r);
		n=n/10;

		armstrong(n);
	}
	return sum;

}
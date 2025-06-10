/*
Command Line Arguments [ CLA ]
int main(int argc , char **argv)
3.
WAP in C using CLA to prime number b/w 11
to 66 .
i/p: ./a.out 11 66
*/
#include<stdio.h>
#include<stdlib.h>
void main(int argc,char **argv)
{
        int num,temp,i;

        for(num=atoi(argv[1]);num<atoi(argv[2]);num++)
        {
                temp=num;
                for(i=2;i<temp;i++){
                        if(temp%i==0){
                                break;
                        }
                }
                if(i==num)
                        printf("%d ",num);

        }
}
/*
14. WAP in C to implement Calculator using switch
*/
#include<stdio.h>
void main(){

	int num,num2;
	char ch;

	printf("Enter a number n1 & n2:\n");
	scanf("%d %d",&num,&num2);
	printf("select the option\n1.+ --> sum\n2. - --> sub\n3.* --> mul\n4. / --> div\n");
	scanf(" %c",&ch);

	switch(ch){


		case  '+':
			printf("%d",num+num2);
			break;

		case '-':
			printf("%d",num-num2);
			break;

		case '*':
			printf("%d",num*num2);
			break;


		case '/':
			printf("%d",num/num2);
			break;

		default:
			printf("you enter wrong option");
			break;

	}

}






















/*Write a program for the following output 
  using else if ladder.
  Ex-1:
  MENU CARD
  1.COFFEE        Rs:15
  2.TEA           Rs:10
  3.COLD COFFEE   Rs:25
  4.MILK SHAKE    Rs:50
  Enter Your choice  : 2
  You have selected Tea
  Enter the quantity : 5
  Total amount : 50
  Ex-2:
  MENU CARD
  1.COFFEE        Rs:15
  2.TEA           Rs:1
  3.COLD COFFEE   Rs:25
  4.MILK SHAKE    Rs:50
  Enter Your choice  : 3
  You have selected Cold Coffee
  Enter The quantity : 5
  Total amount : 125*/



#include<stdio.h>
void main(){
	int op,q,c=0;
l1:
	printf("MENU CARD\n1.COFFEE......Rs:15\n2.TEA......Rs:10\n3.COLD COFFEE......Rs:25\n4.MILK SHAKE......Rs:50\n");
	printf("Enter Your choice:");
	scanf("%d",&op);
	if(op==1){
		printf("You have selected Coffee.\n");
		printf("Enter the quantity: "); 
		scanf("%d",&q);
		printf("Total amount is: %d\n",q*15);}
	else if(op==2) {
		printf("You have selected Coffee.\n");
		printf("Enter the quantity: "); 
		scanf("%d",&q);
		printf("Total amount is: %d\n",q*10);}
	else if(op==3) {
		printf("You have selected Coffee.\n");
		printf("Enter the quantity: "); 
		scanf("%d",&q);
		printf("Total amount is: %d\n",q*25);}
	else if(op==4) {
		printf("You have selected Coffee.\n");
		printf("Enter the quantity: "); 
		scanf("%d",&q);
		printf("Total amount is: %d\n",q*50);}
	else  
	{
		printf("your choice is envalid\n");
                c++;
            if(c<=2)
		goto l1;
	}





}

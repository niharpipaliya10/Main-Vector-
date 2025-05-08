//wap to char from a string which is having even number of set bit.
#include<stdio.h>
void main()
{
	int i,c,pos,m;
	char s[20];
	printf("Enter a string:\n");
	scanf("%s",s);
//	printf("%s\n",s);
	for(i=0;s[i];i++)
	{
		for(pos=7,c=0;pos>=0;pos--){
			m=s[i]>>pos&1;
			if(m){
				c++;
			}
		}
		if(c%2==0){
			printf(" %c",s[i]);
		}

	}

}

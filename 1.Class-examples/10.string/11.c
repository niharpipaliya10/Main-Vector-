//wap to delete on specific charactore from given string.
#include<stdio.h>
void main(){
	int i,j;
	char s[20],ch;
	printf("Enter a string and ch:\n");
	scanf("%s %c",s,&ch);
	printf("before :%s\n",s);
	for(i=0;s[i];i++)
	{

		if(s[i]==ch)
		{  
			for(j=0;s[j];j++)
			{
				s[j]=s[j+1];

                                i++;
                        }
		}
	}

	printf("After :%s\n",s);

}

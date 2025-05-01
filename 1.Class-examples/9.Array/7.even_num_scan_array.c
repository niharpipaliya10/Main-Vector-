// wap to scan only even element for array.
#include <stdio.h>
void main()
{
	int a[5], ele, i;
	ele = sizeof(a) / sizeof(a[0]);
	printf("Enter a element of array:\n");
	for (i = 0; i < ele;)
	{
		scanf("%d", &a[i]);
		if(a[i]%2==0)
		{
			i++;
		}
	}
	for (i = 0; i < ele; i++)
	{
		printf(" %d", a[i]);
	}
}
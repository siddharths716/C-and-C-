#include<stdio.h>
int main()
{
	int row,loop1,loop2,n;
	printf("enter the number of row:\n");
	scanf("%d",&row);
	n=(row-1)/2;
	for(loop1=0;loop1<=2*n;loop1++)
	{
	for(loop2=0;loop2<=2*n;loop2++)
	
			if(loop1+loop2<=n||loop1-loop2>=n||loop2-loop1>=n||loop1+loop2>=3*n)
				printf("*");
			else
				printf(" ");
	
				printf("\n");
	}
	return 0;
}
	

#include<stdio.h>
int main()
{
	int rows,loop1,space,loop2,coef;
	printf("enter the no of rows\n");
	scanf("%d", & rows);
	for(loop1=0;loop1<=rows;loop1++)
	{
		for(space=1;space<=rows-loop1;space++)
			printf(" ");

		for(loop2=0;loop2<=loop1;loop2++)
		{
			if (loop1==0||loop2==0)
				coef=1;
			else
				coef=coef*(loop1-loop2+1)/loop2;
			printf("%d",coef);
		}

			printf("\n");
		
	}
	return 0;
}
		  
		

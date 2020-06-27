#include<stdio.h>
int main()
{
	int i,j,k,rows1,cols1,rows2,cols2,a[100][100],b[100][100],mul[100][100];
	printf("enter the no of rows and columns in first matrix:\n");
	scanf("%d%d",&rows1,&cols1);
	for(i=0;i<rows1;i++)
		for(j=0;j<cols1;j++)
		{
			printf("enter the element a%d%d:",i+1,j+1);
			scanf("%d",&a[i][j]);
		}
	printf("enter the no of rows and columns in second matrix:\n");
	scanf("%d%d",&rows2,&cols2);
	for(i=0;i<rows2;i++)
		for(j=0;j<cols2;j++)
		{
			printf("enter the element b%d%d:",i+1,j+1);
			scanf("%d",&b[i][j]);
		}
	
	for(i=0;i<rows1;i++)
		for(j=0;j<cols2;j++)
		{
			mul[i][j]=0;
			for(k=0;k<rows2;k++)
			{
				mul[i][j]=mul[i][j]+a[i][k]*b[k][j];
			}			
		}
	printf("the multiplied matrix is:\n");
	for(i=0;i<rows1;i++)
	{
		for(j=0;j<cols2;j++)
			printf("%d\t",mul[i][j]);			
		printf("\n\n");
	}
	return 0;
}
					
	


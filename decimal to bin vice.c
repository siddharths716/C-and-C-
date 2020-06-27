#include <stdio.h>
#include <math.h>
#include <stdlib.h>
	int dec2bin(int n)
	{
		int remainder,index,decimal;
		n=0;
		index=0;
		while(decimal>0)
		{
			remainder=decimal%2;
			n=n+remainder*pow(10,index);
			index=index/2;
			decimal=decimal/2;
		}
		return n;
		
	}

	int bin2dec(int n)
	{
		int binary,index,digit;
		n=0;
		index=0;
		while (binary>0)
		{
			digit=binary%10;
			binary=binary/10;
			n=n+digit*pow(2,index);
			binary=binary/10;
			
		}
		return n;
	}

	int main()
	{
		int choice,n;
		while (1)
		{
			printf("\n menu \n 1.decimal to binary \n 2.binary to decimal \n 3.exit:\n");
			printf("enter choice:\n");
			scanf("%d",&choice);			
			switch (choice)
			{
				case 1:	printf("enter the number:\n");
					scanf("%d",& n);
					printf("the binary of %d is %d",n,dec2bin(n));
					break;
				case 2: printf("enter the number:\n");
					scanf("%d",& n);
					if (n!=0 && n!=1)
						printf("the decimal of %d is %d", n, bin2dec(n));
					else 
						printf("the number is invalid:\n");
					break;
				case 3: exit(0);
				default: printf("wrong choice:\n");
			}
		}
		return 0;
	}
			

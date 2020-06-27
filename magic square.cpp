#include<iostream>
using namespace std;

int main()
{
	int a[6][6] , i , j , sumd =0 , sumr = 0 , sumc =  0;
	cout<<"enter the 3x3 matrix"<<endl;
	for(i=0 ; i<3 ;i++)
	{
		for(j=0 ; j<3 ;j++)	
		{
			cin>>a[i][j];
			if(i==j)
			{
				sumd = sumd + a[i][j];
			}
			
			
		}
	}
	for(i= 0 ; i<3 ; i++)
	{
		sumr = sumr + a[i][0];
		sumc = sumc + a[0][i];
	}
	cout<<sumd<<endl;
	cout<<sumc<<endl;
	cout<<sumr<<endl;
	if((sumd==sumr) && (sumr==sumc))
	{
		cout<<" it is a magic square"<<endl;
		
	}
	
	else
	{
		cout<<" it is not magic square"<<endl;
	}
	return 0;
	
}

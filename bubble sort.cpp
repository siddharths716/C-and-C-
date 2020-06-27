#include<iostream>
using namespace std;

int main()
{
	int i , n , a[50],temp,j;
	cout<<"enter the number of numbers you want to enter"<<endl;
	cin>>n;
	cout<<"Enter the numbers"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<n-1;j++)
	{
	
		for(i=0;i<n-1;i++)
		{
			if(a[i]>a[i+1])
			{
				temp = a[i+1];
				a[i+1]=a[i];
				a[i]=temp;
			}
		}
	}	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

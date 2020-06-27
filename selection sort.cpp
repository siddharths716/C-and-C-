#include<iostream>
using namespace std;
#define MAX 9999999999

int main()
{
	int a[50],i,n,min,temp,j,mini,signal=0;
	cout<<"enter the number of numbers you want to sort"<<endl;
	cin>>n;
	cout<<"enter the numbers"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(j=0;j<n;j++)
	{
	
		min=a[j];
		for(i=j;i<n;i++)
		{
			if(min>a[i])
			{
				min = a[i];
				mini=i;
				signal=1;
			}
		
			
		}
		if(signal!=1)
		{
			mini=j;
			
		}
		temp=a[j];
		a[j]=a[mini];
		a[mini]=temp;
		signal=0;
		
	}	
	
	
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
}

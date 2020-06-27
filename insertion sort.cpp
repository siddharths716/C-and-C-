#include<iostream>
using namespace std;

int main()
{
	int i , a[50], n , j,temp;
	cout<<"Enter the  number of numbers"<<endl;
	cin>>n;
	cout<<"Enter the numbers"<<endl;
	for(i=0;i<n;i++)
	{
		cin>>a[i];
	}
	for(i=1;i<n;i++)
	{
		j=i;
		while(a[j]<a[j-1])
		{
			cout<<"yes"<<endl;
			temp=a[j];
			a[j]=a[j-1];
			a[j-1]=temp;
			j=j-1;
		}
	}
	for(i=0;i<n;i++)
	{
		cout<<a[i]<<endl;
	}
	return 0;
	
}

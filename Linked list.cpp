#include <iostream>
#include<cstdlib>
using namespace std;


struct node
{
	int data;
	struct node* link;
};
struct node* root = NULL;

void append()
{
	struct node* temp; //a pointer that stores location of a nod that we just created
	temp = (struct node *)malloc(sizeof(struct node)); //memory allocated for the  node and address of it stored in temp
	cout<<"Enter the data you want to enter"<<endl;
	cin>>temp->data;
	temp->link = NULL;
	if( root == NULL)
	{
		root = temp;
	}
	else
	{
		struct node* p;
		p = root;
		while(p->link!=NULL)
		{
			p = p->link;
		}
		p->link = temp;
		
	}
	cout<<"data sucessfully entered"<<endl;
	
}
void pop()
{
	if(root == NULL)
	{
		cout<<"there are no nodes"<<endl;
		
	}
	else
	{
		struct node* p;
		struct node* b;
		p = root;
		
		while(p->link!=NULL)
		{
			b = p;
			p = p->link;
			
			
		}
		b->link = NULL;
		
		
		
	}
	cout<<"data sucessfully popped"<<endl;
}
int length()
{
	int len = 0;
	struct node* p;
	p = root;
	
	if(root == NULL)
	{
	
		cout<<"the length is "<<endl;	
		return 0;
	}
	else
	{
		while(p->link != NULL)
		{
			p = p->link;
			len = len +1;
		}
		cout<<"the length is "<<endl;
		return len+1;
	}

}
void insert(int location)
{
	struct node* temp; //a pointer that stores location of a nod that we just created
	temp = (struct node *)malloc(sizeof(struct node)); //memory allocated for the  node and address of it stored in temp
	cout<<"Enter the data you want to enter"<<endl;
	cin>>temp->data;
	temp->link = NULL;
	int len , track = 0;
	len = length();
	if(location==0)
	{
		cout<<"use the append function"<<endl;
		
	}
	else if(len<location)
	{
		cout<<"no such location exist"<<endl;
	}
	else if(location == len)
	{
		cout<<"use the append function"<<endl;
	}
	else
	{
		
		struct node* p;
		struct node* b;
		p = root;
		while(track != location)
		{
			b = p;
			p = p->link;
			track = track +1;
			
		}
		temp->link = p;
		b->link = temp;  
		
	
	}
	cout<<"data sucessfully entered"<<endl;
	
}
void del(int loc)
{
	int len , track = 0;
	len = length();
	if(len<loc)
	{
		cout<<"no such location exist"<<endl;
	}
	else if(loc==0)
	{
		cout<<"enter a valid number"<<endl;
	}
	else if(loc==loc)
	{
		cout<<"use pop function"<<endl;
	}
	else  if(loc==1)
	{
		struct node* p;
		p = root;
		p = p->link;
		root = p;
		
		
		
	}
	else
	{
		struct node* p;
		struct node* b;
		struct node* a;
		p = root;
		while(track != loc)
		{
			a = b;
			b = p;
			
			p = p->link;
			track = track +1;
			
		}
		a->link = p;
		
		
	}
	cout<<"data sucessfully deleted"<<endl;
	
	
	
}
void display()
{
	int len , i , var;
	len = length();
	struct node* p;
	p = root;
	for(i = 1 ; i <=len ; i++)
	{
		cout<<p->data<<"-"<<p->link<<"->";
		p = p->link;
		
		
	}
	
}
int main()
{
	int choice , var; 
	
	while(1)
	{
		cout<<"1.Append"<<endl<<"2.Pop"<<endl<<"3.Length"<<endl<<"4.Insert"<<endl<<"5.Delete"<<endl<<"6.Display"<<endl;
		cin>>choice;
		switch(choice)
		{
			case 1: append();
					break;
					
			case 2: pop();
					break;
					
			case 3: var =length();
					cout<<var<<endl;
					break;
					
			case 4: cout<<"enter the location you want to enter the value in"<<endl;
					cin>>var;
					insert(var);
					break;
					
			case 5: cout<<"enter the location you want to delete the value from"<<endl;
					cin>>var;
					del(var);
					break;
					
			case 6: display();
					break;
					
		}
	} 
	
	return 0;
}

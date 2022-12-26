#include<iostream>
using namespace std;

class Stack
{
	public:
		int top,n,arr[1000],size; 
		void setdata()
		{
			cout<<"\n Enter the Size of the Stack : ";
			cin>>size;
			int arr[size];
		}	
		void push()
		{
			cout<<"\n Enter the Value to be Pushed into the Stack :";
			cin>>n;
			if(top==size-1)
			{
				cout<<"Overflow.";
			}
			else
			{
				top++;
				arr[top]=n;
			}
		}
		int pop()
		{
			if(top==-1)
			{
				cout<<"Underflow.";
				return 0;
			}
			else
			{
				n=arr[top];
				top--;
				cout<<"The Element Deleted from the Queue is :"<<n;
				return n;
			}
		}
		void display()
		{
			if(top==-1)
			{
				cout<<"Queue is Empty.";
			}
			else
			{
				cout<<"The Linear Queue is : ";
				for(int i=0;i<=top;i++)
				{
					cout<<arr[i]<<" ";
				}
			}
		}
};

int main()
{
	Stack st;
	st.top=-1;
	int choice;
	st.setdata();
	do
	{
		cout<<"\n 1. Add Element.\n 2. Delete Element.\n 3. Display Stack.\n 4. Exit \n Enter Your Choice : ";
		cin>>choice;
		switch(choice)
		{
			case 1: st.push();
			break;
			case 2: st.pop();
			break;
			case 3: st.display();
			break;
			case 4:
			break;
			default : cout<<"Invalid Input. Please Try Again.";
			break;
		}
	}
	while(choice!=4);
	return 0;
}

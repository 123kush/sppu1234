#include<iostream>
using namespace std;

class Matrix
{
	public:
		int a[3][3],b[3][3],c[3][3],i,j,k;
		Matrix()
		{
			a[3][3]={0};
			b[3][3]={0};
			c[3][3]={0};
			i=0;
			j=0;
			k=0;
		}
		void setdata()
		{
			cout<<"\n Enter Matrix 1 Elements : "<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cin>>a[i][j];
				}
			}
			cout<<"\n Enter Matrix 2 Elements : "<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cin>>b[i][j];
				}
			}
		}
		void display()
		{
			cout<<"\n Matrix 1 is : "<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<a[i][j]<<" ";
				}
				cout<<"\n";
			}
			cout<<"\n Matrix 2 is : "<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<b[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
		void addition()
		{
			int c[3][3];
			cout<<"\n The Addition of the 2 Matrices is : "<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					c[i][j]=a[i][j]+b[i][j];
					cout<<c[i][j]<<" ";
				}
				cout<<"\n";
			}
		}
		void transpose()
		{
			cout<<"Transpose of Matrix 1 is : "<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<a[j][i]<<" ";
				}
				cout<<"\n";
			}
			cout<<"Transpose of Matrix 2 is : "<<endl;
			for(i=0;i<3;i++)
			{
				for(j=0;j<3;j++)
				{
					cout<<b[j][i]<<" ";
				}
				cout<<"\n";
			}
		}
};

int main()
{	
	Matrix obj;
	int choice;
	obj.setdata();
	do
	{
		cout<<"\n 1. Display of Matrices \n 2. Addition of Matrices. \n 3. Transpose of Matrices. \n 4. Exit \n Enter Your Choice :";
		cin>>choice;
		switch(choice)
		{
			case 1: obj.display();
			break;
			case 2: obj.addition();
			break;
			case 3: obj.transpose();
			break;
			case 4: break;
			default: cout<<"\n Invalid Input, please Try Again.";
		}
	}
	while(choice!=4);
return 0;	 
}

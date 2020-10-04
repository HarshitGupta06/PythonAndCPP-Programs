#include<iostream>
using namespace std;

int main()
{
	int i,j,n,c,a[10][10];
	cout<<"enter size : ";
	cin>>n;
	/*for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(i==j || j==0)
			{
				a[i][j] = 1;
			}	
			else
			{
				a[i][j] = a[i-1][j-1]+a[i-1][j];//just adding the no. of the row occuring before
			}
		}
	}
	cout<<"Pascals triangle : "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<=i;j++)
		{
			if(a[i][j])
				cout<<a[i][j]<<" ";
		}
		cout<<endl;
	}*/
	
	//BETTER VERSION OF PASCAL'S TRIANGLE : 

	for(i=1;i<=n;i++)
	{
		for(j=n;j>i;j--)
			cout<<" ";
		c = 1;
		for(j=1;j<=i;j++)
		{
			cout<<c<<" ";
			c = c * (i-j)/j;
		}
		cout<<endl;
	}

	return 0;
}
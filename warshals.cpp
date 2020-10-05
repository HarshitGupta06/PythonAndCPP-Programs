#include<iostream>
using namespace std;

int main()
{
	int n,a[10][10],i,j,l=0;
	cout<<"RITIK GUPTA 1803010178 (2-C)"<<endl;
	cout<<"enter size of matrix : ";
	cin>>n;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cin>>a[i][j];
		}
	}

	while(l<3)
	{
		for(i=0;i<n;i++)
		{
			for(j=0;j<n;j++)
			{
				if(i==l || j==l)
				{
					a[i][j] = a[i][j];
				}
				else
				{
					if(a[i][j] + a[i][l]*a[l][j])
						a[i][j] = 1;
					else
						a[i][j] = 0;
				}			
			}
		}
		l++;
	}
	cout<<endl<<"After applying warshal's algorithm : "<<endl;
	for(i=0;i<n;i++)
	{
		for(j=0;j<n;j++)
		{
			cout<<a[i][j];
		}
		cout<<endl;
	}

	return 0;
}
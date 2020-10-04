//first line take input test case (t)
// second no. of elemnts and the no of subsequnece
// means eg : 4 elements and make 2 elemnts subsequence
// ==> {(1,2)(1,3)(1,4)(2,3)(2,4)(3,4)} the shortest sum is 1,2 and nothing is more short so O/P = 1
//if two (1,2) present the  O/P:2
#include<iostream>
using namespace std;

int main()
{
	int i,j,k,t,n,a[10][10],b[10][10],count=0,sum=0,min=999;
	cout<<"enter test cases : "<<endl;
	cin>>t;
	for(i=0;i<t;i++)
	{
		cout<<"enter no. of elements and no. of subsequence : "<<endl;
		cin>>n>>k;
		cout<<"enter elements : "<<endl;
	    for(j=0;j<n;j++)
			cin>>a[i][j];
	}	
 int m=0,l=0;
 for(k=0;k<t;k++)
 {	
	for(i=0;i<n;i++)
	{
		for(j=i;j<n;j++)
		{
			if(a[k][i]!=a[k][j])
			{
				b[l][m++] = a[k][i];
				b[l][m++] = a[k][j];
				l++;m=0;
			}
			

		}
	}
}


	for(i=0;i<t;i++)
	{
		for(j=0;j<1;j++)
			{
				sum=b[i][j]+b[i][j+1]; 
				if(sum<min)
					{
						min= sum;
						count=1;
					}
				else if(sum ==min)
					count++;		
			}
			cout<<endl<<count;

	}

	return 0;
}
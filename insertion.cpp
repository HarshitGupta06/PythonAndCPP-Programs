#include<iostream>
using namespace std;
void insertion(int a[],int ele,int pos, int n)
{
	int i;
	
	int e = ele;
	int p = pos;
	n =n + 1;
	for(i=n;i>=p;i--)
		a[i] = a[i-1];
	a[p] = e;
	for(i=0;i<n;i++)
		cout<<a[i]<<" ";
}
int main()
{
	int n,a[10],i,ele,pos;
	cout<<"enter the no. elements : ";
	cin>>n;
	cout<<"enter elments : ";
	for(i=0;i<n;i++)
		cin>>a[i];
	cout<<"enter elment want to insert : ";
	cin>>ele;
	cout<<"enter position : ";
	cin>>pos;
	insertion(a,ele,pos,n);
	return 0;
}
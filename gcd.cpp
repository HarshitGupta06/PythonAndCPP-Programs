// Program to calculate the greatest comman divisor of 2 numbers

#include<iostream>
using namespace std;

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int gcd(int a, int b) {
	int t = a % b;
	while(t!=0)
		{
			a = b;
			b = t;
			t = a%b;
		}
	return b;
}

int main()
{
	int a,b;
	cout<<"Enter two numbers: ";
	cin>>a>>b;
	if (a<b)
		swap(&a,&b);
	cout<<"GCD: "<<gcd(a,b);;
	return 0;
}
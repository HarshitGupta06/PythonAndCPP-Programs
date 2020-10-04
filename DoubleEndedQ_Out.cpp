#include<iostream>
using namespace std;
#define max 6

int f=0,r=-1;
int dq[max];

void enqueue_rear()
{
	if(f==0 && r==max-1)
	{
		cout<<"Double ended queue is full."<<endl;
		return ;
	}
	else
	{
		int item,i;
		cout<<"enter item : ";
		cin>>item;
		if(f!=0 && r==max-1)
		{
			for(i=f;i<=r;i++)
			{
				dq[i-1] = dq[i];
			}
			f = f-1;
			dq[r] = item;
		}
		else
		{
			dq[++r] = item;
		}
	}
}

void enqueue_front()
{
	if(f==0 && r==max-1)
	{
		cout<<"Double ended queue is full."<<endl;
		return ;
	}
	else
	{
		int item,i;
		cout<<"enter item : ";
		cin>>item;
		if(f==0 && r!=max-1 && r!=-1)
		{
			for(i=r;i>=f;i--)
			{
				dq[i+1] = dq[i];
			}
			f = f-1;
			dq[f] = item;
		}
		else
		{
			if(f!=0)
				dq[--f] = item;
			else
				dq[f] = item;
			if(r==-1)
				r++;
		}
	}
}

void dequeue()
{
	if(r<f)
	{
		cout<<"Double ended queue is empty."<<endl;
		return ;
	}
	else
	{
		int item;
		item = dq[f];
		f++;
		cout<<"Deleted item : "<<item<<endl;
	}
}

void display()
{
	if(r<f)
	{
		cout<<"Double ended queue is empty."<<endl;
		return ;
	}
	else
	{
		int i;
		for(i=f;i<=r;i++)
		{
			cout<<dq[i]<<" ";
		}
		cout<<endl;
	}	
}

int main()
{
	int ch;
	while(1)
	{
		cout<<"Choose : "<<endl<<"1. deENQUEUE at rear"<<endl<<"2. deENQUEUE at front"<<endl<<"3. deDEQUEUE"<<endl<<"4. deDISPLAY"<<endl<<"5. EXIT"<<endl;
		cin>>ch;
		switch(ch)
		{
			case 1 : 
			{
				enqueue_rear();
				break;
			}
			case 2 : 
			{
				enqueue_front();
				break;
			}
			case 3 : 
			{
				dequeue();
				break;
			}
			case 4 : 
			{
				display();
				break;
			}
			case 5 : 
			{
				exit(1);
				break;
			}
		}
	}

	return 0;
}
#include <iostream>
using namespace std;
struct Node
{
    int data;
    struct Node *next;
};

class LinkedList
{
     Node *head;
     public :
     LinkedList();
     int insertAtBeg(int data);
     int insertAtEnd(int data);
     void deleteAtEnd();
     void deleteAtBeg();
     void Display();
     int TotalNode();
     Node * SearchNode(int data);

};
LinkedList::LinkedList()
{
    head = NULL;
}
int LinkedList::insertAtBeg(int data)
{
    Node *ne = new Node();
    if (ne == NULL)
    {
        return -1;
    }
    ne->data = data;
    ne->next == NULL;
    if (head == NULL)
    {
        head = ne;
        return 0;
    }
    else
    {
        ne->next = head;
        head = ne;
        return 0;
    }
}
int LinkedList::insertAtEnd(int data)
{
    Node *ne = new Node();
    if (ne == NULL)
    {
        return -1;
    }
    ne->data = data;
    ne->next = NULL;
    if (head == NULL)
    {
        head = ne;
        return 0;
    }
    else
    {
        cout<<("Entering the end")<<endl;
        Node *pt=this->head;
        while (pt->next != NULL)
        {
            pt = pt->next;
        }
        pt->next = ne;
        return 0;
    }
}

void LinkedList::deleteAtBeg()
{
    Node *tem;
    
    if (head->next == NULL)
    {
        tem = head;
        
        head = NULL;
        delete (tem);
        
    }
    else
    {
        tem = head;
        
        head = head->next;
        delete (tem);
        
    }
}
void LinkedList::deleteAtEnd()
{
    
    Node *tem;
    Node *pre, *con;
    con = head;
    if (head->next==NULL)
    {
        head=NULL;
    }
    else
    {
        while (con->next != NULL)
        {
            pre = con;
            con = con->next;
        }
        pre->next = NULL;
        tem = con;
        delete (con);
        
    }
}
void LinkedList::Display()
{
    if(head==NULL)
    {
        cout<<"List is empty"<<endl;
    }
    else
    {
        Node * ptr;
        ptr=head;
        while(ptr!=NULL)
        {
            cout<<ptr->data<<" ";
            ptr=ptr->next;
        }
    }

}
int LinkedList::TotalNode()
{
    if(head==NULL)
    {
        return 0;
    }
    else
    {
        int count=0;
        Node *ptr=head;
        while(ptr!=NULL)
        {
            count++;
            ptr=ptr->next;
        }
        return count;
    }
    cout<<endl;
}


int main()
{
    LinkedList l1;
    int choice;

    while(1)
    {
        cout<<"1]Insert beg"<<endl;
        cout<<"2]Insert end"<<endl;
        cout<<"3]Delete beg"<<endl;
        cout<<"4]Delete end"<<endl;
        cout<<"5]Search data"<<endl;
        cout<<"6]Total nodes"<<endl;
        cout<<"6]Display node"<<endl;


        
        cout<<"0 to exit";
        cout<<"Enter choice:";
        cin>>choice;
        if(choice==0)
        {
           break;
        }
        else
        {
            switch(choice)
            {
                 case 1:
                 {
                     int data;
                     cout<<"Enter data:";
                     cin>>data;
                     l1.insertAtBeg(data);
                     break;
                 }
                 case 2:
                 {
                     int data;
                     cout<<"Enter data:";
                     cin>>data;
                     l1.insertAtEnd(data);
                     break;
                 }
                 case 3:
                 {
                     l1.deleteAtBeg();
                     break;
                 }
                 case 4:
                 {
                      l1.deleteAtEnd();
                      break;
                 }
                 
                 case 6:{
                    cout<<"Total node in the list is:"<<l1.TotalNode();
                    break;
                 }
                 case 7:{
                    l1.Display();
                    break;
                 }
                 
            }
        }
    }
}

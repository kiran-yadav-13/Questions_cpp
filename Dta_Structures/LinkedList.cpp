# include <iostream>
using namespace std;
struct node{
int info;
node* next;

};

class linkedtype{
node* start;
public :
linkedtype(){
    start =NULL;
}

node* createnewnode(int);
void createnewlist(node*);
void addatend(node*);
void addafter(node*);
void addbefore(node*);
void deletion();
int count();
void display();
};
node* linkedtype:: createnewnode(int i)
{
   node* newptr;
   newptr=new node();
   newptr->info=i;
   newptr->next=NULL;
  return(newptr);
   
}
void linkedtype::createnewlist(node* newptr)
{
    node* temp;
    temp=start;
    start=newptr;
    newptr->next=temp;

}
void linkedtype:: addafter(node* nptr)
{
    int after;
    node* temp;
    cout<<"Enter the info part of the node after which you want to add ";
    cin>>after;
    for(temp=start; temp!=NULL; temp=temp->next)
    {
        if(temp->info==after)
        {
            nptr->next=temp->next;
            temp->next=nptr;
        }
    }
}
void linkedtype:: addbefore(node* nptr)
{   node* temp;
    int before;
    cout<<"Enter the info part of the node before which you want to add ";
    cin>>before;
    if(start->info==before)
    {
        nptr->next=start;
        start=nptr;
        return;
    }
    else{
    for(temp=start; temp->next!=NULL; temp=temp->next)
    {
        if(temp->next->info==before)
        {
            nptr->next=temp->next;
            temp->next=nptr;
            break;
        }
    }
    }
}
void linkedtype:: addatend(node* nptr)
{
    node* temp;
    if(start==NULL)
    {
        start=nptr;
        return;
    }
    for(temp=start; temp->next!=NULL; temp=temp->next)
    {
    }
    temp->next=nptr;
}
void linkedtype:: deletion()
{  
    int del;
    cout<<"Enter the info part of the node to be deleted ";
    cin>>del;
    node* temp;
    for(temp=start; temp->next!=NULL; temp=temp->next)
    {
        if(temp->next->info==del)
        { 
            node* ptr=temp->next;
          temp->next=temp->next->next;
         delete(ptr);
          break;
        }
    }
}
int linkedtype:: count()
{
    node* temp;
    int c1=0;
    for(temp=start; temp!=NULL; temp=temp->next)
    {
       c1++;
    }
    return c1;
}
void linkedtype:: display()
{
    if(start==NULL)
    {
        cout<<"Linked List is empty ";
        return;
    }
    node* temp;
    cout<<"Contents of the linked list are :"<<endl;
    for(temp=start; temp!=NULL; temp=temp->next)
    {
       cout<<temp->info<<"  ";
    }
    cout<<endl;
}
int main()
{
     int choice,in,n,c1;
     node* nptr;
     linkedtype l;
     char c='y';
     cout<<"Creating new Linked list. Enter no of nodes ";
     cin>>n;
     for(int i=n-1; i>=0; i--)
     {
         cout<<"Enter info for node numbered "<<i+1<<endl;
         cin>>in;
         nptr=l.createnewnode(in);
         if(nptr==NULL)
         {
             cout<<"Compiler out of memory "<<endl;
             exit(0);
         }
         else
         l.createnewlist(nptr);

     }
     while(c=='y' || c=='Y')
     {
         cout<<"Main menu"<<endl;
         cout<<"1. Add a node before "<<endl;
         cout<<"2. Add a node after "<<endl;
         cout<<"3. Add a node at last" <<endl;
         cout<<"4. Delete a node "<<endl;
         cout<<"5. Count the total no of nodes "<<endl;
         cout<<"6. Display the linked list"<<endl;
         cout<<"Enter your choice(1-6) ";
         cin>>choice;
         switch(choice)
         {
             case 1: cout<<"Enter the info part of the node to be added ";
                     cin>>in;
                     nptr=l.createnewnode(in);
                     if(nptr==NULL){
                         cout<<"Compiler out of memory";
                         exit(0);
                     }
                     else
                     {
                         l.addbefore(nptr);
                         l.display();
                     }
                     break;
        case 2: cout<<"Enter the info part";
                cin>>in;
                nptr=l.createnewnode(in);
                if(nptr==NULL)
                {
                    cout<<"Compiler out of memory "<<endl;
                    exit(0);
                }
                else
                {
                    l.addafter(nptr);
                    l.display();
                }
                break;
        case 3: cout<<"Enter the info part";
                cin>>in;
                nptr=l.createnewnode(in);
                if(nptr==NULL)
                {
                    cout<<"Compiler out of memory "<<endl;
                    exit(0);
                }
                else
                {
                    l.addatend(nptr);
                    l.display();
                }
                break;

    case 4: l.deletion();
            l.display();
            break;
    case 5: c1=l.count();
            cout<<"Total no of nodes in a linkedlist are : "<<c1<<endl;
            break;
    case 6: l.display();
            break;
    default: cout<<"Error in input"<<endl;
         }
cout<<"Do you want to continue ? ";
cin>>c;

     }
    return 0;

}
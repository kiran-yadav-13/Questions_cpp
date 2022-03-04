#include <iostream>
using namespace std;
template <typename T>
class node
{
public:
    T info;
    node* next;
    node(T x,node*n=NULL)
    {
        info=x;
        next=n;
    }

};
template <typename T>
class queuetype{
    node<T>*f,*r;
public:
    queuetype()
    {
        f=r=NULL;
    }
    int isempty();
    void inqueue(T x);
    void  display();
    T dequeue();
    int countelements();
};
template <typename T>
int queuetype<T>::isempty()
{

    if((f==NULL) or (r==NULL))
        return 1;
    else
        return -1;
}
template <typename T>
void queuetype<T>::inqueue(T x)
{
    node<T>*temp;
    temp=new node<T>(x);
    if(f==NULL)
    {

        f=r=temp;
    }
    else
    {

        r->next=temp;
        r=temp;
    }

}
template <typename T>
T queuetype<T>::dequeue()
{

    T x=f->info;
    if(f==r)
    {
        delete f;
        f=r=NULL;
    }
    else{
        node<T>*temp;
        temp=f;
        f=f->next;
        delete temp;
    }
    return x;
}
template <typename T>
int queuetype<T>::countelements()
{

    int c=0;
    if(f==NULL)
        {
            cout<<"queue is empty"<<endl;
        }
    else{

    node<T>*temp;
    for(temp=f;temp!=NULL;temp=temp->next)
    {
        c++;
    }
    }
    //c++;
    return c;
}
template <typename T>
void queuetype<T>::display()
{
    if(f==NULL)
    {
        cout<<"\n Queue is empty!";
    }
    else{
            cout<<"queue is"<<" "<<endl;
        node<T>*temp;
        for(temp=f;temp!=NULL;temp=temp->next)
        {
            cout<<temp->info<<"  ";
        }
    }
    cout<<endl;
}
int main()
{
    queuetype<int> q;
    int choice,i,x,d,e,countq;
    char ch='y';
    while (ch=='y' || ch=='Y')
    {
        cout<<"Main menu\n";
        cout<<"1. Insertion into the queue"<<endl;
        cout<<"2. Deletion from the queue"<<endl;
        cout<<"3. Check isempty"<<endl;
        cout<<"4. Count the no of elements"<<endl;
        cout<<"5. Display"<<endl;
        cout<<"enter your choice"<<endl;
        cin>>choice;
        switch(choice)
        {
        case 1:
            cout<<"enter the element to be added"<<endl;
            cin>>i;
            q.inqueue(i);
            q.display();
            break;
        case 2:
            d=q.dequeue();
            cout<<d<<"is deleted"<<endl;
            q.display();
            break;
        case 3:
            e=q.isempty();
            if(e==1)
                cout<<"Queue is empty"<<endl;
            else
                cout<<"Queue is not empty"<<endl;
            break;
        case 4:
            countq=q.countelements();
            cout<<"There are "<<countq<<"elements present in the queue"<<endl;
            break;
        case 5:
            q.display();
            break;
        default:
            cout<<"error in inputting choice please try again"<<endl;

        }
        cout<<"Do you want to continue(y/n)"<<endl;
        cin>>ch;
    }

    return 0;
}

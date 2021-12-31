# include <iostream>
using namespace std;
const int MAX=3;
template <class T>
class queuetype
{

  int f,r;
  T q[MAX];
  public :
  queuetype()
  {
    f=r=-1;
  }
  void addition(T in);
  T deletion();
  int isempty();
  int isfull();
  void display();
  int count1();

};
template <class T>
void queuetype<T>:: addition(T in)
{
  if(f==-1)
  {  f=r=0;
    q[r]=in;

  }
  else
  {  r++;
    q[r]=in;

  }
}
template <class T>
T queuetype<T>::deletion()
{ int temp;
  if(f==r)
  {
     temp=q[f];
     f=r=-1;
  }
  else
  {
    temp=q[f];
    f++;
  }
  return temp;
}
template <class T>
int queuetype <T>::isempty()
{
  if(f==-1)
  {
    return 1;
  }
  else{
  return -1;
  }
}
template <class T>
int queuetype <T>:: isfull()
{
  if(r==(MAX-1))
  {
    return 1;
  }
  else{
  return -1;
  }
}
template <class T>
void queuetype <T>:: display()
{
    if(f==-1)
    {
        cout<<"Queue is empty(Underflow). cannot delete an element"<<endl;
    }
    else
    {
  cout<<"Queue elements from front end to rare end are : "<<endl;
  for(int i=f; i<=r; i++)
  cout<<q[i]<<" ";
  cout<<endl;
    }

}
template <class T>
int queuetype <T>:: count1()
{
  int ct;
  for(int i=f; i<=r; i++)
    ct++;
    return ct;
}

int main()
{
  queuetype <int>queue1;
  int choice,del,e,cf,in,ct;
  char c='y';
  while(c=='y'|| c=='Y')
  {
    cout<<"Main menu"<<endl;
    cout<<" 1.Add an element in the queue"<<endl;
    cout<<" 2.Delete an element from the queue"<<endl;
    cout<<" 3.check for emptyness"<<endl;
    cout<<" 4.check for full condition"<<endl;
    cout<<" 5.No of elements in Queue"<<endl;
    cout<<"Enter your choice";
    cin>>choice;
    switch(choice)
    {
      case 1 :cf=queue1.isfull();
              if(cf==1){
                cout<<"Queue is Full (OverfLow!!).cannot add a new element"<<endl;
              }
              else{
               cout<<"Enter the element you want to add ";
               cin>>in;
               queue1.addition(in);
               queue1.display();
              }
               break;
      case 2 :  e=queue1.isempty();
               if(e==1){
                 cout<<"Queue is empty(Underflow). cannot delete an element"<<endl;
                 }
                else{
                del=queue1.deletion();
                cout<<del<<" has been deleted from Queue"<<endl;
                queue1.display();
                }
                break;
      case 3 : e=queue1.isempty();
               if(e==1)
               cout<<"Queue is Empty"<<endl;
               else
               cout<<"Queue is Non empty"<<endl;
               break;
      case 4 : cf=queue1.isfull();
               if(cf==1)
               cout<<"Queue is full"<<endl;
               else
               cout<<"Queue is not full"<<endl;
               break;
      case 5 : ct=queue1.count1();
               cout<<"Total elements in an Queue is : "<<ct<<endl;
               break;
      case 6 : cout<<"You entered a wrong choice "<<endl;
    }
    cout<<"Do you want to continue ? ";
    cin>>c;
  }

}

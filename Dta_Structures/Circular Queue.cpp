# include <iostream>
using namespace std;
const int MAX=5;
template <class T>
class cqueuetype{
  public:
  T cq[MAX];
  int f,r;
  cqueuetype(){
      f=r=-1;
  }
  void insert(T in);
  T remove();
  int isempty();
  int isfull();
  void display();
  void clear();
  T foremost();
  T raremost();
  int count();
};
template<class T>
void cqueuetype<T>::insert(T in)
{
    if(r=-1)
    {
        f=r=0;
        cq[r]=i;
    }
    else if(r==MAX-1)
    {
        r=0;
        cq[r]=in;
    }
    else
    {
        r++;
        cq[r]=in;
    }

}
template<class T>
T cqueuetype<T>:: remove()
{

}
template<class T>
int cqueuetype<T>::isempty()
{
    if(f==-1)
    return 1;
    else
    return -1;
}
template <class T>
int cqueuetype<T>::isfull()
{
    if(f==0 && r==MAX-1)
    {
        return 1;
    }
    else if(f==r+1){
       return 1;
    }
    else
    {
      return -1;
    }
   
}
template <class T>
void cqueuetype<T>::display()
{
  if(f==-1)
  {
      cout<<"Queue is Empty"<<endl;
  }
  else if(f<=r)
  {
    cout<<"Contents of Queue from Front to rare end are:"<<endl;
    for(int j=0; j<f ; j++)
    {
        cout<<"_"<<" ";
    }
  }
}



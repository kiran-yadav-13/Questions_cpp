#include<iostream.h>
#include<stdlib.h>
const int size =10;
template<class T>
class R_Select
{
public :
 T A[size];
 void input();
 void display();
 T Randomize_Select(T A[],int p,int r,int i);
 int Randomize_Partition(T A[],int p,int r);
 };
template<class T>
int R_Select<T>::Randomize_Partition(T A[],int p,int r)
{
int x,i,j,temp;
x=A[r];
i=p-1;
for(j=p;j<=r-1;j++)
{
if(A[j]<=x)
{
i=i+1;
temp=A[j];
A[j]=A[i];
A[i]=temp;
}
}
temp=A[i+1];
A[i+1]=A[r];
A[r]=temp;
return i+1;
}
template<class T>
T R_Select<T>::Randomize_Select(T A[],int p,int r,int ith)
{
 int q;
 if(p == r)
   return A[p];
 q=Randomize_Partition(A,p,r);
 int k=q-p+1;
 if (ith==k) // the pivot value is the answer
   return A[q];
 else if(ith<k)
   return Randomize_Select(A,p,q-1,ith);
 else
   return Randomize_Select(A,q+1,r,ith-k);
   }
template<class T>
void R_Select<T>::input()
{
int j;
for(j=1;j<=size;j++)
  A[j]=rand()%100;
 }
template<class T>
void R_Select<T>::display()
{
for (int i=1;i<=size;i++)
 cout<<A[i]<<" ";
}
int main()
{
R_Select<int> rs;
int l,n;
char ch='y';
rs.input();
cout<<"\n The elements of the array are:";
rs.display();
while(ch=='y')
{cout<<"\n Enter the iTH smallest no. u want to find : ";
cin>>n;
l=rs.Randomize_Select(rs.A,1,size,n);
cout<<"\n The "<<n<<" smallest number is : "<<l;
cout<<"\n wanna continue ? press y :";
cin>>ch;
}
return 0;
}

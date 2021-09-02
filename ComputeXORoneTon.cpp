# include <iostream>
using namespace std;
int computexor(int n)        //compute xor from 1 to n unoptimized
{   int temp=0;
    for(int i=1 ; i<=n ; i++)
         temp=i^temp;
 return temp;
}
int optimizedxor(int n)
{
    if(n%4==0)
    return n;
    if(n%4==1)
    return 1;
    if(n % 4==2)
    return n+1;
    else 
    return 0;
}
int main()
{
   int n;
   cin>>n; 
   cout<<computexor(n)<<endl;
   cout<<optimizedxor(n)<<endl;
   return 0;
}
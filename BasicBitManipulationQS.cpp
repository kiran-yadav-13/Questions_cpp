# include <iostream>
using namespace std;
int getbit(int n, int pos)
{
  return(n && (1<<pos) );
}
int setbit( int n, int pos)
{ 
    n=(n | (1<<pos));
    return n;
}
int clearbit(int n, int pos)
{
int mask=~(1<<pos);
   n=(n & mask);
   return n;
}
int updatebit(int n,int pos, int value)
{
int mask=(n & ~(1<<pos));
  n=(mask |  (value<<pos));
  return n;
}
int togglebit(int n, int pos)
{
  return(n xor (1<<pos));
}
int main()
{
    int n,pos,value;
    cin>>n>>pos>>value;
    //cout<<getbit(n, pos);
   // cout<<setbit(n, pos);
    //cout<<clearbit(n,pos);
   // cout<<updatebit(n,pos,value);
cout<<togglebit(n, pos);
    return 0;
}
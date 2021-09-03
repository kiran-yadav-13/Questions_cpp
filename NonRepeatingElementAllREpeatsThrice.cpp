# include <iostream>
using namespace std;
bool getbit(int n, int pos)
{
    return((n & (1<<pos) )!=0);
}
int setbit(int n, int pos)
{
    return( n | (1<<pos));
}
int unique(int a[],int n)
{
  int result=0;
  for(int i=0; i<64; i++)
  {
      int sum=0;
      for(int j=0; j<n; j++)
      {
          if(getbit(a[j],i))
          {
              sum++;
          }
      }
      if(sum%3 != 0){
       result=setbit(result , i);}
  }
  return result;
}
int main()
{
 int arr[]={1,2,3,4,1,2,3,1,2,3};
cout<<unique(arr,10);
 return 0;

   // return 0;

}
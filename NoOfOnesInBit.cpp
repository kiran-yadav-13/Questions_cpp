# include <iostream>
using namespace std;
int onebit(int n)
{ int result=0;
    while(n)
    {
        n=n & (n-1);
       result++;
    }
    return result;
}
int main()
{
 int n;
 cin>>n;
 cout<<onebit(n);
 return 0;
}

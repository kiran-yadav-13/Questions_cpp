# include <iostream>
using namespace std;
int gcd(int n,int m)
{
    if(m==0)
    return n;

    gcd(m,n%m);

}
int main()
{
    int ans=gcd(8,4);
    cout<<ans;
    return 0;

}
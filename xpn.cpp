# include <iostream>
using namespace std;
int xpn(int x,int n)
{
    if(n==0)
    return 1;
    xpn(x,n-1);
    int xpn1=x*xpn(x,n-1);
     return xpn1;
}
int main()
{ int x;
cin>>x;
    int n;
    cin>>n;
   cout<< xpn(x,n);
    

}
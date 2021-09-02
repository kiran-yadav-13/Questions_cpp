# include <iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    char a[n+1];
     bool check=true;
     
     cin>>a;
    for(int i=0; i<n; i++)
    {
        if(a[i]!=a[n-1-i])
        {
            check=false;
        }

    }
    if(check)
    cout<<"words is a pallindrome"<<endl;
    else
    cout<<"word is not a pallindrome"<<endl;
    return 0;


}

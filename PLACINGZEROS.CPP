# include <iostream>
using namespace std;
void placingZeros(int a[],int n)
{
    int count=0;
    for(int i=0; i<n; i++)
    {
        if(a[i] != 0)
        {
            a[count++]=a[i];
        }
    }
    for(int i=0; count<n; i++)
    {
        a[count++]=0;
    }
    cout<<endl;
 return ;
}
int main()
{ 
    int n;
    cin>>n;
    int a[n];
    for(int i=0; i<n; i++)
    cin>>a[i];
    placingZeros(a,n);
    for(int i=0; i<n ; i++)
    cout<<a[i]<<" ";
    return 0;


}
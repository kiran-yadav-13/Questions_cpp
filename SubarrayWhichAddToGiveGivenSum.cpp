
# include "bits/stdc++.h"
# include <iostream>
using namespace std;
int main()
{ int n,s,sum=0;
    cout<<"Enter the total elements in an array";
    cin>>n;
    int a[n];
    cout<<"Enter the elements in an array"<<endl; 
    for(int i=0; i<n; i++)
    {
      cin>>a[i];
    }
    cout<<"enter the given sum ";
     cin>>s; 
    for(int i=0; i<n; i++)
    { sum=0;
       for(int j=i; j<n; j++)
       {  sum=sum+a[j];
           if(sum==s)
           {
               cout<<i+1<<" "<<j+1<<endl;
               break;
           }
       }
    }
    return 0;
}
# include <iostream>
using namespace std;
int main()
{
    int n, temp;
    int count=0;
    cout<<"Enter the size of array ";
    cin>>n;
    int a[n];
    cout<<"Enter the elements of the matrix "<<endl;
    for(int i=0; i<n; i++){
        cin>>a[i];
    }

    for(int i=0; i<n-1; i++)
    {
        for( int j=0; j<n-i-1; j++)
        {
           if(a[j]>a[j+1])
           { ++count;
               int temp=a[j];
               a[j]=a[j+1];
               a[j+1]=temp;

           }
        }
         cout<<"Total comparison during Pass "<<i+1<<" is "<<count<<endl;
         cout<<"Intermediate matix is "<<endl;
        for(int k=0; k<n; k++)
           {
               cout<<a[k]<<" ";
           }
        cout<<endl;

        count=0;

    }
    cout<<"Final matrix after sorting"<<endl;
    for(int k=0; k<n; k++)
    cout<<a[k]<<" ";
return 0;
}

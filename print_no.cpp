# include <iostream>
using namespace std;
void printno(int n)
{    if(n==0)
     return ;
     
     printno(n-1);
     cout<<n<<endl;
}
int main()
{int n;
cin>>n;
cout<<"output"<<endl;
printno(n);

}
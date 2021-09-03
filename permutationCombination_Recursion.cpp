# include <iostream>
using namespace std;
int per(int n,int r)
{
    if(r==0)
    return 1;
    if(r>n)
    return 0;
    return(per(n-1,r)+r*per(n-1,r-1));
}
int comb(int n,int r)
{
    if(r==0 || r==n)
    {
        return 1;
    }
    else{
    return(comb(n-1,r-1)+comb(n-1,r));
    }
}
int main()
{int n;
int r;
char ch='y';
  int a;
    cout<<"Enter the value of n and r respectively ";
    cin>>n>>r;
    while(ch=='y')
    { cout<<"1.permutation"<<endl;
      cout<<"2.Combination"<<endl;
      cout<<"Enter your Choice"<<endl;
      cin>>a;
        switch(a)
        {
            case 1: cout<<"permutaion("<<n<<","<<r<<") is "<<per(n,r)<<endl;
                     break;
            case 2 :  cout<<"Combination("<<n<<","<<r<<") is "<<comb(n,r)<<endl;
                     break;
        }
        cout<<"Do you want to Continue";
        cin>>ch;
    }
    return 0;

}

# include <iostream>
using namespace std;
bool conjuction(bool m, bool n)
{
    return(n & m);
}
bool disjunction1(int n, int m)
{
    return(n | m);
}
bool negation1(int n)
{
    return ( ! n);
}
bool Nand(int n, int m)
{
    return ( ! (n & m));
}
bool Nor(int n ,int m)
{
    return(! (n || m));
}
bool ExclusiveOR(int n, int m)
{
 return(n ^ m);
}
bool ExclusiveNOR(int n, int m)
{
    return(! (n ^ m));
}
bool Conditional(int n, int m)
{
    if(n==m | (n==0 & m==1))
    return 1;
    else
    return 0;
}
bool Biconditional(int n, int m)
{
    if( n==m )
    return 1;
    else
    return 0;
}

int main()
{  int c;
   bool m, n;
    char ch='y';
     while(ch=='y')
   {
       cout<<"1. conjunction "<<endl;
       cout<<"2. Disjunction "<<endl;
       cout<<"3. ExclusiveOR "<<endl;
       cout<<"4. exclusiveNOR "<<endl;
       cout<<"5. Negation "<<endl;
       cout<<"6. NAND"<<endl;
       cout<<"7. NOR "<<endl;
       cout<<"8. Conditional "<<endl;
       cout<<"9. Biconditional"<<endl;
       cout<<endl;
       cout<<"Enter your choice";
       cin>>c;
       cout<<"Enter the value of x and y "<<endl;
       cin>>n>>m;
       switch(c)
       {
           case 1 : cout<<"Truth value of Conjunction: "<<endl;
                    cout<<"x  " <<"y   "<<" output"<<endl;
                    cout<<n<<"  "<<m<<"    "<<conjuction(n,m)<<endl;
                    break;
           case 2 : cout<<"Truth value of Disjunction: "<<endl;
                    cout<<"x  "<<"y   "<<" output"<<endl;
                    cout<<n<<"   "<<m<<"   "<<disjunction1(n,m)<<endl;
                    break;
          case 3 :  cout<<"Truth value of ExclusiveOR: "<<endl;
                    cout<<"x   "<<"y    "<<" output"<<endl;
                    cout<<n<<"   "<<m<<"   "<<ExclusiveOR(n,m)<<endl;
                    break;
         case 4 :   cout<<"Truth value of ExclusiveNOR: "<<endl;
                    cout<<"x  "<<"y   "<<" output"<<endl;
                    cout<<n<<"   "<<m<<"   "<<ExclusiveNOR(n,m)<<endl;
                    break;
         case 5 :   cout<<"Truth value of Negation: "<<endl;
                    cout<<"x  "<<" output"<<endl;
                    cout<<n<<"   "<<negation1(n)<<endl;
                    break;
         case 6 :   cout<<"Truth value of NAND: "<<endl;
                    cout<<"x  "<<"y    "<<" output"<<endl;
                    cout<<n<<"   "<<m<<"   "<<Nand(n,m)<<endl;
                    break;
        case 7  :   cout<<"Truth value of NOR: "<<endl;
                    cout<<"x  "<<"y    "<<" output"<<endl;
                    cout<<n<<"   "<<m<<"   "<<Nor(n,m)<<endl;
                    break;
        case 8 :    cout<<"Truth value of Conditional: "<<endl;
                    cout<<"x  "<<"y    "<<" output"<<endl;
                    cout<<n<<"   "<<m<<"   "<<Conditional(n,m)<<endl;
                    break;
        case 9 :    cout<<"Truth value of Biconditional: "<<endl;
                    cout<<"x " <<"y  "<<" output"<<endl;
                    cout<<n<<"   "<<m<<"   "<<Biconditional(n,m)<<endl;
                    break;
       }

    cout<<"Do you want to continue";
    cin>>ch;

   }
    return 0;
}

# include <iostream>
using namespace std;
int main()
{

    int m=0,i=0,l;
    cout<<"Enter the value of m in m-ary Tree";
    cin>>m;
    cout<<"Enter the no of internal vertices in the Tree";
    cin>>i;
    l=i*(m-1)+1;
    cout<<"Number of Leaf nodes are "<<l<<endl;
    return 0;
}

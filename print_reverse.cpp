# include <iostream>
using namespace std;
void printreverse(int n){
    if(n==0)
    return;
    cout<<n<<endl;
    printreverse(n-1);
}
int main(){
    int n;
    cout<<"Enter a number  ";
    cin>>n;
    cout<<"output"<<endl;
    printreverse(n);
}
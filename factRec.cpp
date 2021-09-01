# include <iostream>
using namespace std;
void factRec(int n)
{
    if(n==1)
    return;
    
    factRec(n-1)
    int fact=n*factRec(n-1);
    return fact;

}
int main()
{
    int n;
    cin>>n;
    factRec(n);
    return 0;
}
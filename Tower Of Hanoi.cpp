# include <iostream>
using namespace std;
void TowerOfHanoi(int n,char from_rod,char to_rod,char aux_rod)
{
    if(n==1)
    {
        cout<<"Move disk 1 from rod "<<from_rod<<" to rod "<<to_rod<<endl;
        return;
    }
    TowerOfHanoi(n-1,from_rod,aux_rod,to_rod);
    cout<<"Move disk "<<n<<" from rod "<<from_rod<<" to rod "<<to_rod<<endl;
    TowerOfHanoi(n-1,aux_rod,to_rod,from_rod);
}
int main()
{  int n;
char ch='y';
   do{
    cout<<"Enter the no of Disk ";
    cin>>n;
    cout<<"STEPS ARE : "<<endl;
    cout<<"-------------------------------"<<endl;
    TowerOfHanoi(n,'A','C','B');
    cout<<"Do You want to Continue? ";
    cin>>ch;
   }while(ch=='y');
  return 0;
}

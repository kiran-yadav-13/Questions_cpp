# include <iostream>
# include <fstream>
# include <stdlib.h>
using namespace std;

template <class t>
class isort{
public:
    t a[500];
    t n;
    void input();
    void display();
    int sort();
};
template <class t>
void isort<t>::input(){
    int i;
    cout<<"Enter the no of elements in an array : ";
    cin>>n;
    for(i=1; i<=n; i++){
        a[i]=rand()%100;
    }
}
template <class t>
void isort<t>::display(){
      for(int i=1; i<=n; i++){
        cout<<a[i]<<" ";
      }
      cout<<endl;
}
template <class t>
int isort<t>::sort()
{
    int i,j,key, count=0;
    for(j=2; j<=n; j++)
    {   key=a[j];
        i=j-1;
        while(i>=1 && a[i]>key)
        {
            a[i+1]=a[i];
            i--;
            count++;
        }
        count++;
        a[i+1]=key;
    }
    cout<<"The array after sortting is : "<<endl;
    display();
    cout<<"The no of comparisions are : "<<count<<endl;
    return count;
}
int main(){
    cout<<"----------------INSERTION SORT ------------------"<<endl;
    cout<<endl;

    ofstream f("InsertionSort.csv");
    int c;
    char ch='y';
    while(ch=='y' || ch=='Y')
    {
        isort<int> i;
        i.input();
        cout<<"The elements of the array are : "<<endl;
        i.display();
        c=i.sort();
        if(f){

//            f<<i.n<<","<<c;
//            f<<endl;
        }
        cout<<"Do you want to continue ? (y/n) : ";
        cin>>ch;
        cout<<endl;
    }
    return 0;
}

# include <iostream>
# include <fstream>
# include <stdlib.h>
using namespace std;

template <class t>
class QuickSort{
public:
int A[1000];
int count,n;
int input();
void Randomized_Quicksort(int A[], int p, int r);
int Randomized_partition(int A[], int p, int r, int n);
int partition(int A[], int p, int r);
void display();
};

template <class t>
void QuickSort<t>::display(){
      for(int i=1; i<=n; i++){
        cout<<A[i]<<" ";
      }
      cout<<endl;
     
}
template <class t>
int QuickSort<t>:: Randomized_partition(int A[],int p, int r, int n){

    int i,temp;
    i=p+rand()%(r-p+1);
    temp=A[r];
    A[r]=A[i];
    A[i]=temp;
    return partition(A, p, r);
}
template<class t>
int QuickSort<t>::partition(int A[], int p, int r){
    int x,i,j,temp,temp2;
    x=A[r];
    i=p-1;
    for(j=p; j<r; j++){
        if(A[j]<=x){
            i++;
            temp=A[i];
            A[i]=A[j];
            A[j]=temp;
            count++;
        }
        else{
            count++;
        }
    }
    temp2=A[i+1];
    A[i+1]=A[r];
    A[r]=temp2;

    return i+1;
}
template <class t>
void QuickSort<t>::Randomized_Quicksort(int A[], int p,int r){

    int q;
    if(p<r){
        q=Randomized_partition(A,p,r,n);
        Randomized_Quicksort(A,p,q-1 );
        Randomized_Quicksort(A,q+1,r);
    }
}
template <class t>
int QuickSort<t>::input(){
    count=0;
    int i;
    cout<<"Enter the no of elements in an array : ";
    cin>>n;
    for(i=1; i<=n; i++){
        A[i]=(rand()%1000)+1;
    }
    Randomized_Quicksort(A,1,n);
}

int main(){
    cout<<"----------------QUICK SORT ------------------"<<endl;
    cout<<endl;

    ofstream f("QuickSort.csv");
    int c;
    char ch='y';
    while(ch=='y' || ch=='Y')
    {
        QuickSort<int> q;
        q.input();
        
        cout<<"The elements of the array Before sorting : "<<endl;
        q.display();
        cout<<endl;
        cout<<"AFTER SORTING : "<<endl;
        cout<<endl;
        q.display();
        if(f){

            f<<q.n<<","<<q.count;
            f<<endl;
        }
         cout<<"No of Comaprisions are "<<q.count<<endl;
        cout<<"Do you want to continue ? (y/n) : ";
        cin>>ch;
        cout<<endl;
    }
    return 0;
}

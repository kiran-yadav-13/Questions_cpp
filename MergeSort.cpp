# include <iostream>
# include <fstream>
# include <stdlib.h>
using namespace std;

template <class t>
class msort{
public:
    t a [1000];
    int count;
    int n;
    void input();
    void display();
    t MERGE_SORT(t a[], int p, int r);
    void MERGE(t a[],int p, int q, int r);
};
template <class t>
void msort<t>::input(){
    int i;
    cout<<"Enter the no of elements in an array : ";
    cin>>n;
    for(i=1; i<=n; i++){
        a[i]=rand()%100;
    }
}
template <class t>
void msort<t>::display(){
      for(int i=1; i<=n; i++){
        cout<<a[i]<<" ";
      }
      cout<<endl;
}
template <class t>
t msort<t>::MERGE_SORT(t a[],int p, int r)
{
    if(p<r)
    {
        int q=(p+r-1)/2;
        MERGE_SORT(a,p,q);
        MERGE_SORT(a,q+1,r);
        MERGE(a,p,q,r);
    }
    return count;
}
template <class t>
 void msort<t>::MERGE(t a[], int p, int q, int r)
{
    int i,j;
    int n1=q-p+1;
    int n2=r-q;
    t L[500], R[500];
    for(i=1; i<=n1; i++){
        L[i]=a[p+i-1];
    }
    for(j=1; j<=n2; j++){
        R[j]=a[q+j];
    }
    L[n1+1]=INT_MAX;
    R[n2+1]=INT_MAX;
    i=j=1;
    for(int k=p; k<=r; k++)
    {
        if(L[i]<=R[j])
        {
            a[k]=L[i];
            i++;
        }
        else{
            a[k]=R[j];
            j++;
        }
        count++;
    }
}
int main(){
    cout<<"----------------MERGE SORT ------------------"<<endl;
    cout<<endl;

    ofstream f("MergeSort.csv");
    int c;
    char ch='y';
    while(ch=='y' || ch=='Y')
    {
        msort<int> m;
        m.input();
        cout<<"The elements of the array are : "<<endl;
        m.display();
        m.count=0;
        c=m.MERGE_SORT(m.a,1,m.n);
        cout<<"AFTER SORTING : "<<endl;
        m.display();
        if(f){

            f<<m.n<<","<<c;
            f<<endl;
        }
        cout<<"No of Comparisions :"<<c<<endl;
        cout<<"Do you want to continue ? (y/n) : ";
        cin>>ch;
        cout<<endl;
    }
    return 0;
}


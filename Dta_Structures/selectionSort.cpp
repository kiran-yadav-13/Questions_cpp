#include<iostream>
#include <fstream>
using namespace std;
template <class t>
class Sort{
   t arr[1000];
   public :
   int size,count;
   void input();
   void SelectionSort();
   void display();
};
template <class t>
void Sort<t>::input(){
   int i;
   count=0;
	cout<<"Enter theb size of the array: ";
	cin>>size;
	cout<<endl;
	cout<<"Elements of array before Sorting: "<<endl;
	for(i=1; i<=size; i++){
	arr[i]=(rand()%1000+1);
	cout<<arr[i]<<"\t";
    }
}
template<class t>
void Sort<t>::display(){
for(int i=1; i<=size; i++){
cout<<arr[i]<<"\t";
}
cout<<endl;
}
template <class t>
void Sort<t>::SelectionSort(){
  t small , temp;
  int pos,i,j;
  for(int i=1; i<=size; i++){
    small=arr[i];
    pos=i;
    for(j=i+1; j<=size; j++){
    if(arr[j]<small){
    small=arr[j];
    pos=j;
	
    }
	count++;
  }
    count++;
    temp=arr[i];
    arr[i]=arr[pos];
    arr[pos]=temp;

  }
}
int main(){
  ofstream f("Selectionsort.csv");
  int c;
  char ch='y';
  while(ch=='y' || ch=='Y'){
  Sort<int> s;
  s.input();
  cout<<endl;
  s.SelectionSort();
  cout<<"AFTER SORTING:"<<endl;
  s.display();
  if(f){
  f<<s.size<<","<<s.count;
  f<<endl;

  }
  cout<<endl;
  cout<<"No of comparisions : "<<s.count<<endl;
  cout<<"Do you want to continue ? (y/n) ";
  cin>>ch;
  cout<<endl;

    
  }
  f.close();
  return 0;
}

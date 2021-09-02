# include <iostream>
using namespace std;
const int MAX=5;
template <class T>
class stackType{
private:
int top;
T s[MAX];
public:
stackType(){
    top=-1;
}
void push(T);
T pop();
int Isempty();
int Isfull();
void display();
};
template <class T>
void stackType<T>:: push(T p)
{
    top++;
    s[top]=p;
}
template <class T>
T stackType<T>:: pop(){
    T del;
    del=s[top];
    top--;
    return(del);
}
template <class T>
int stackType<T>:: Isfull(){
    if(top==MAX-1)
    return 1;
    else
    return -1;
}
template <class T>
int stackType<T>:: Isempty(){
    if(top==-1)
    return 1;
    else
    return -1;
}
template <class T>
void stackType<T>:: display(){
    int e=Isempty();
    if(e==-1){
    cout<<" Content of the stacks(from top to bottom ) are : \n";
    for(int i=top; i>=0; i--){
        cout<<s[i]<<" ";
    }
    cout<<endl;
    }
    else{
        cout<<"\n Error! The stack is empty";
    }
}

int main(){
stackType<int>stack;
int choice,f,e,d,a;
char c='y';
while(c=='y' || c=='Y'){
    cout<<"\n Main menu";
    cout<<"\n 1. To Push";
    cout<<"\n 2. To Pop";
    cout<<"\n 3. To Check if empty";
    cout<<"\n 4. To Check if full";
    cout<<"\n 5. To display";
    cout<<"\n Enter your choice (1-5)";
    cin>>choice;
    switch(choice){
        case 1: f=stack.Isfull();
                if (f==1){
                    cout<<" Overflow! Stack is full \n ";
                    break;
                }
                else{
                    cout<<" Enter an integer value  ";
                    cin>>a;
                    stack.push(a);
                    stack.display();
                }
                break;
        case 2: e=stack.Isempty();
                if (e==1){
                    cout<<"\n Underflow! Stack is empty";
                    break;
                }
                else{
                   d=stack.pop();
                   cout<<d<<" has been deleted \n ";
                    stack.display();
                }
                break;
        case 3: e=stack.Isempty();
                if(e==1){
                    cout<<"\n Stack is empty";
                }
                else{
                    cout<<"\n Stack is not empty";
                }
                break;
        case 4: f=stack.Isfull();
                if(f==1){
                    cout<<"\n Stack is full";
                }
                else{
                    cout<<"\n Stack is not full";
                }
                break;

        case 5: stack.display();
                break;
        default: cout<<" Error in Input \n";      
    }
cout<<"\n Do you want to continue   ";
cin>>c;
}
return 0;
}
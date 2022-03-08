#include<iostream>
#include<cmath>
using namespace std;
#define size 80
template<class T>
class stacktype{
	int top;
	T stack[size];
	public:
	stacktype(){
		top=-1;
	}
	void push(T x);
	T pop();
	int postfixEvaluation(T s[]);
};
template<class T>
int stacktype<T>::postfixEvaluation(T s[]){
		stacktype<int> st;

	for(int i=0;s[i]!='\0';i++)
	{
		if(s[i]>='0' && s[i]<='9')
		{
			st.push(s[i]-'0');
		}
		else
		{
			int op2=st.pop();
			int op1=st.pop();
			switch(s[i])
			{
				case'+':st.push(op1+op2);
					    break;
				case'-':st.push(op1-op2);
					    break;
				case'*':st.push(op1*op2);
					    break;
				case'/':st.push(op1/op2);
					    break;
				case'$':st.push(pow(op1,op2));
					    break;
			default: cout<<"invalid"<<endl;

			}
		}
	}
	T s1=st.pop();
	return s1;

}

template<class T>
void stacktype<T>::push(T x){
	stack[++top]=x;
}
template<class T>
T stacktype<T>::pop(){
	T z;
	z=stack[top];
	top--;
	return z;
}


int main(){
	stacktype<char>s1;
	int n;
	char ch='y';

	char pf[30];
	while(ch=='y'||ch=='Y'){

	cout<<"How many elements are there in the postfix notation?(symbol plus characters) : ";
	cin>>n;
	cout<<"Enter the symbols present in expression"<<endl;
	for(int i=0;i<n;i++){
		cin>>pf[i];
	}

	cout<<"Answer of the postfix expression is = "<<s1.postfixEvaluation(pf);

	cout<<"\nDo you want to continue\n";
	cin>>ch;
	}
	return 0;
	}


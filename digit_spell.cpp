# include <iostream>
using namespace std;
void digit_spell(int d, string spell[10])
{
    if (d==0)
    return ;
   digit_spell(d/10,spell);
   int i=d%10;
   cout<<spell[i]<<" ";


}
int main()
{int n;
 string spell[]={"zero","one","Two","three","four","five", "six", "seven", "eight", "nine"};
 cout<<"Enter a number : ";
 cin>>n;
 digit_spell(n, spell);
}
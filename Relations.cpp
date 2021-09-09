# include <iostream>
using namespace std;
class Relation
{ private :
  int a[10] [10];
  int n;
  public :
  void input()
  {
      cout<<"Enter the size of the matrix ";
      cin>>n;
      cout<<"Enter the order of the matrix relation (in the form of 1/0)";
      for(int i=0; i<n; i++)
      {
          for(int j=0; j<n; j++)
          {
              cin>>a[i][j];
          }
      }

  }
  void display()
  {
      for(int i=0; i<n; i++)
      {
          for(int j=0; j<n; j++)
          {
              cout<<a[i]<<" ";
          }
      }
      cout<<endl;
  }
  bool symmetric()
{ bool s=1;
    for(int i=0; i<n; i++)
    {
       for(int j=0; j<n; j++)
       {
           if(a[i][j]==1 && a[j][i]!=1)
           {s=0;
            return s;}

       }
    }
   return s;
}
bool antisymmetric()
{ bool ans=0;
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
            if(a[i][j]==1 && a[j][i]==1 && i!=j)
                ans=1;
    }
    return ans;
}
bool transitive()
{ bool tr=0;
    for(int i=0; i<n; i++)
    {
         for(int j=0; j<n; j++)
            for(int k=0; k<n; k++)
            {
              if(a[i][j]=1 && a[j][k]==1 && a[i][k]==1)
                tr=1;
              }
    }
    return tr;
}
bool Reflexive()
{ bool ref=0;
     for(int i=0; i<n; i++)
    {  for( int j=0; j<n; j++)
        {
            if(i==j & a[i][j]==1)
                ref=1;
             else if(i==j & a[i][j]!=1)
            {
                ref=0;
                return ref;
            }
        }
    }
    return ref;
}

};
int main()
{
    Relation r;
    int c=0;
    char ch='y';
    while(ch=='y')
    {

       cout<<"1. Input "<<endl;
       cout<<"2. Symmetric "<<endl;
       cout<<"3. Reflexive"<<endl;
       cout<<"4. Transitive "<<endl;
       cout<<"5. Antisymmetric"<<endl;
       cout<<"6. output "<<endl;
       cout<<"Enter your choice ";
        cin>>c;
        switch(c)
       {
         case 1 : r.input();
                   break;

         case 2 : if(r.symmetric())
                  cout<<"Relation is Symmetric "<<endl;
                  else
                  cout<<"Relation is not symmetric"<<endl;
                  break;
        case 3 : if(r.Reflexive())
                   cout<<"Relation is Reflexive "<<endl;
                   else
                   cout<<"Relation is not Reflexive "<<endl;
                    break;
         case 4 : if(r.transitive())
                  cout<<"Relation is Transitive "<<endl;
                  else
                  cout<<"Relation is not Transitive "<<endl;
                  break;
         case 5 : if(r.antisymmetric())
                  cout<<"Relation is Antisymmetric "<<endl;
                  else
                  cout<<"Relation is not Antisymmetric"<<endl;
                  break;
         case 6 : cout<<"Relation is "<<endl;
                  r.display();
       }
       cout<<"Do you want to continue ";
       cin>>ch;
    }

   return 0;

}


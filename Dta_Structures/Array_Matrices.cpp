# include <iostream>
using namespace std;
template <class T>
class Diagonal
{
    T *a;
    int sizes;
public:
    Diagonal(int s1)
    {
        sizes=s1;
        a=new T[sizes];
    }
    ~Diagonal(){delete []a;}
    void store(int i, int j, T x);
    T retrieve(int i , int j);


};
template <class T>
void Diagonal<T>:: store(int i , int j, T x)
{
    if((i<1) || (j<1) || (i>sizes)  || (j>sizes))
    {
        cout<<"INVALID INDEX.....!!!!!!!"<<endl;
        return;
    }
    else if(i==j)
    {
       a[i-1] = x;
    }
    else if(x!=0)
    {
        cout<<"X must be ZERO"<<endl;
        return;
    }

}
template <class T>
T Diagonal<T>::retrieve(int i, int j)
{
    if((i<1) || (j<1) || (i>sizes) || (j>sizes))
    {
        cout<<"INVALID SYNTAX......."<<endl;
        exit(1);
    }
    else if(i==j)
    {
        return a[i-1];
    }
    else
        return 0;

}
template <class T>
class LowerTri
{
   T* a;
   int sizes;
   public:
       LowerTri(int s1)
       {
           sizes=s1*(s1+1)/2;
           a=new T[sizes];
       }
       ~LowerTri(){delete []a;}
       void Store(int i, int j, T x);
       T retrieve(int i, int j );
};
template <class T>
void LowerTri<T>::Store(int i , int j, T x)
{
    if((i<1) || (j<1) || (i>sizes) || (j>sizes))
    {
        cout<<"INVALID INDEX......."<<endl;
        exit(1);
    }
    else if(i>=j)
    {
        a[(i*(i-1)/2)+(j-1)]=x;
    }
    else if(x!=0)
    {
        cout<<"X MUST BE ZERO......"<<endl;
        return ;
    }
}
template <class T>
T LowerTri<T>::retrieve(int i, int j)
{
    if((i<1) || (j<1) || (i>sizes) || (j>sizes))
    {
        cout<<"INVALID INDEX......."<<endl;
        exit(1);
    }
    else if(i>=j)
    {
        return a[(i*(i-1)/2)+(j-1)];
    }
    else
        return 0;

}
template <class T>
class UpperTri
{
    T* a;
   int sizes;
   public:
       UpperTri(int s1)
       {
           sizes=s1*(s1+1)/2;
           a=new T[sizes];
       }
       void Store(int i, int j, T x);
       T retrieve(int i, int j );
};
template <class T>
void UpperTri<T>::Store(int i , int j, T x)
{
    if((i<1) || (j<1) || (i>sizes) || (j>sizes))
    {
        cout<<"INVALID INDEX......."<<endl;
        return;
    }
    else if(j>=i)
    {
        a[(j*(j-1)/2)+(i-1)]=x;
    }
    else if(x!=0)
    {
        cout<<"X MUST BE ZERO......"<<endl;
        return ;
    }
}
template <class T>
T UpperTri<T>::retrieve(int i, int j)
{
    if((i<1) || (j<1) || (i>sizes) || (j>sizes))
    {
        cout<<"INVALID INDEX......."<<endl;
        exit(1);
    }
    else if(j>=i)
    {
        return a[(j*(j-1)/2)+(i-1)];
    }
    else
        return 0;

}
template <class T>
class Symmetric
{
    T* a;
   int sizes;
   public:
       Symmetric(int s1)
       {
           sizes=s1*(s1+1)/2;
           a=new T[sizes];
       }
       ~Symmetric(){delete []a;}
       void Store(int i, int j, T x);
       T retrieve(int i, int j );
};
template <class T>
void Symmetric<T>::Store(int i , int j, T x)
{
    if((i<1) || (j<1) || (i>sizes) || (j>sizes))
    {
        cout<<"INVALID INDEX......."<<endl;
        return;
    }
    else
    {
        a[(i*(i-1)/2)+(j-1)]=x;
        return;
    }

}
template <class T>

 T Symmetric<T>::retrieve(int i, int j)
  {
      if((i<1) || (j<1) || (i>sizes) || (j>sizes))
     {
        cout<<"INVALID INDEX......."<<endl;
        exit(1);
    }
    else if(i>=j)
    {
        return a[(i*(i-1)/2)+(j-1)];
    }
    else
    {
        return a[(j*(j-1)/2)+(i-1)];
    }

}

int main()
{
    int x,i,j,sizes,choice;
    char ch;
    cout<<"Enter the size : ";
    cin>>sizes;
    Diagonal<int> D(sizes);
    UpperTri<int> U(sizes);
    LowerTri<int> L(sizes);
    Symmetric<int> S(sizes);
    do{
        cout<<"------------MENU------------"<<endl;
        cout<<"1. Diagonal"<<endl;
        cout<<"2. LowerTriangular"<<endl;
        cout<<"3. UpperTriangular"<<endl;
        cout<<"4. SymmetricTriangular"<<endl;
        cout<<"-----------------------------"<<endl;
        cout<<"Enter your choice : ";
        cin>>choice;
        switch(choice)
        {
            case 1: cout<<"Enter the "<<sizes<<" rows and "<<sizes<<" columns : "<<endl;
                    for(i=1; i<=sizes; i++)
                    {   for(j=1; j<=sizes; j++)
                        {cin>>x;
                        D.store(i,j,x);
                        }
                    }
                    cout<<"Elemets of Diagonal Matrices are :"<<endl;
                    for(i=1; i<=sizes; i++)
                    {
                        for(j=1; j<=sizes; j++)
                        {
                            cout<<D.retrieve(i,j)<<'\t';
                        }
                        cout<<endl;
                    }
                    break;
            case 2: cout<<"Enter the "<<sizes<<" rows and "<<sizes<<" columns : "<<endl;
                    for(i=1; i<=sizes; i++)
                    {   for(j=1; j<=sizes; j++)
                        {cin>>x;
                        L.Store(i,j,x);
                        }
                    }
                    cout<<"Elemets of LowerTriangular Matrices are :"<<endl;
                    for(i=1; i<=sizes; i++)
                    {
                        for(j=1; j<=sizes; j++)
                        {
                            cout<<L.retrieve(i,j)<<'\t';
                        }
                        cout<<endl;
                    }
                    break;
            case 3: cout<<"Enter the "<<sizes<<" rows and "<<sizes<<" columns : "<<endl;
                    for(i=1; i<=sizes; i++)
                    {   for(j=1; j<=sizes; j++)
                        {cin>>x;
                        U.Store(i,j,x);
                        }
                    }
                    cout<<"Elemets of UpperTriangular Matrices are :"<<endl;
                    for(i=1; i<=sizes; i++)
                    {
                        for(j=1; j<=sizes; j++)
                        {
                            cout<<U.retrieve(i,j)<<'\t';
                        }
                        cout<<endl;
                    }
                    break;
            case 4:cout<<"Enter the "<<sizes<<" rows and "<<sizes<<" columns : "<<endl;
                    for(i=1; i<=sizes; i++)
                    {   for(j=1; j<=sizes; j++)
                        {cin>>x;
                        S.Store(i,j,x);
                        }
                    }
                    cout<<"Elemets of Symmetric Matrices are :"<<endl;
                    for(i=1; i<=sizes; i++)
                    {
                        for(j=1; j<=sizes; j++)
                        {
                            cout<<S.retrieve(i,j)<<'\t';
                        }
                        cout<<endl;
                    }
                    break;
        default: cout<<"You enterd a wrong choice"<<endl;
        }
        cout<<"Do you want to continue ? ";
        cin>>ch;
    }while(ch=='y' || ch=='Y');
   return 0;
}

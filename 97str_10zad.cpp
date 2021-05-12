#include<iostream>
using namespace std;
int main()
{
    int m, n;
    do
    {
        cout<<"dvete chisla v diapazona tryabva da sa razlichni i purvoto ,vuvedeno, da e po- malko ot vtoroto"<<endl ;
    cin>> m>>n;
    }
    while(m>n);

        cout<<"chislata kratni na 5 v diapazona mezhdu "<<m<<" i "<<n<< " sa:"<< endl;

       for(int r=m; r<n; r++)
        {
          if(r%5==0)cout<<r<<" ";
        }


    return 0;
}

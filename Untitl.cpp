#include<iostream>
using namespace std;
int main()
{

    for(int ch=100;ch<1000;ch++)
    {

        if(ch%100/10!=0 and ch%100%10!=0 and ch%(ch/100)==0 and ch%(ch%100/10)==0 and ch%(ch%100%10)==0 )
            cout<< ch<<" "<<-ch<<" ";
    }


    return 0;
}


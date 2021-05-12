#include<iostream>
using namespace std;
int main()
{
    int ch0,ch1, ch2;

    for(int ch=100;ch<1000;ch++)
    {
        ch0= ch/100;
        ch1= ch%100/10;
        ch2= ch%100%10;

        if(ch1!=0 and ch2!=0 and ch%ch0==0 and ch%ch1==0 and ch%ch2==0 )
            cout<< ch<<" "<<-ch<<" ";
    }


    return 0;
}

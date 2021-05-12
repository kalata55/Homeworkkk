#include<iostream>
using namespace std;
int main()
{
    int ci4, ci3, ci2, ci1;
     for(int ch=1000; ch<10000; ch++)
    {
        ci4= ch/1000;
        ci3= ch%1000/100;
        ci2= ch/10%10;
        ci1= ch%10;
        if(ci4==ci1 || ci4==ci2 || ci4== ci3 || ci3==ci2|| ci3==ci1 || ci2==ci1)
        {
                cout<<ch<<" "<<-ch<<" ";
        }
    }
    return 0;
}


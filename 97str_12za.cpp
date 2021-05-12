#include<iostream>
using namespace std;
int main()
{
    int ci1, ci2,ci3,ci4,sum_ci;
    for(int ch=1000; ch<10000; ch++)
    {
        ci4= ch/1000;
        ci3= ch%1000/100;
        ci2= ch/10%10;
        ci1= ch%10;
        sum_ci= ci1+ci2+ci3+ci4;
        if(sum_ci>9 && sum_ci<100)
        {
            if(sum_ci%2==0)
                cout<<ch<<" "<<-ch<<" ";
        }
    }

    return 0;
}

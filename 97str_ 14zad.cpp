#include<iostream>
using namespace std;
int main()
{
    int ci1,ci2, ci3, sum_ci,br;

    for(int ch=100; ch<1000; ch++)
    {
        br=0;
        ci1= ch/100;
        ci2= ch%100/10;
        ci3= ch%100%10;
        sum_ci= ci1+ci2+ci3;


        for(int p= 2; p<sum_ci; p++)
        {
            if(sum_ci%p==0)
            {
                br++;

            }


        }
        if(br==0){cout<<ch<<" "<<-ch<<" ";}


    }


  return 0;
}

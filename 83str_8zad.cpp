/* programata e spored nai- vazhnite pravila za promyana na visokosnite
godini, spored poslednite promeni po grigorianskiya kalendar */
#include<iostream>
using namespace std;
int main()
{

unsigned int mes, god;
    cin>>mes>>god;
    switch(mes)
            {
                case 1 : cout<<31;break;
                case 2 :if(god%100==0 or god%4>0 and god%400>0)cout<<28;else cout<<29;break;
                case 3 : cout<<31;break;
                case 4 : cout<<30;break;
                case 5 : cout<<31;break;
                case 6 : cout<<30;break;
                case 7 : cout<<31;break;
                case 8 : cout<<31;break;
                case 9 : cout<<30;break;
                case 10 : cout<<31;break;
                case 11 : cout<<30;break;
                case 12 : cout<<31;break;
                default : cout<<"nyama takuv mesec, drugaryu";break;
            }


    return 0;
}


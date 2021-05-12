#include<iostream>
using namespace std;
int main()
{
    int a,br=0;
    cout<< "vuvedete broyat na elementi ot masiva: ";
    cin>>a;
    char sim[a];
    cout<<"vuvedete elementite"<< endl;
    for(int i=0;i<a;i++)
    {
        cin>>sim[i];
        if(sim[i]-'a'== 0) br++;
    }
    cout<<br;
    return 0;
}

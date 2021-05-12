#include<iostream>
using namespace std;
int main()
{
    string inp;
    int co= 0;
    cin>>inp;
    for(int br = 0;br<inp.length();br++)
    {
        if(inp[br]=='a') co++;
    }
    cout<<co;

    return 0;
}


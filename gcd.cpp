#include<bits/stdc++.h>
using namespace std;
int GCD(int a,int b)
{
    if(b==0) return a;
    return GCD(b,a%b);
}
int main()
{
    int _t=1;
    cin>>_t;
    while(_t--)
    {
    int a,b;
    cin>>a>>b;
    cout<<GCD(a,b)<<endl;
    }
}
#include<bits/stdc++.h>
using namespace std;
bool isPrime(int n)
{
    for(int i=2;i*i<=n;i++)
    {
        if(n%i==0) return false;
    }
    return true;
}
int main()
{
    cout<<"Farhan"<<endl;
    int _t;
    cin>>_t;
    while(_t--)
    {
        int n;
        cin>>n;
        if(isPrime(n)) cout<<"Yes! Prime Hai...."<<endl;
        else cout<<"Nahi! Prime Nahi Hai...."<<endl;
    }
}
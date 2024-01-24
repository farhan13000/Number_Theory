#include<bits/stdc++.h>
using namespace std;

int isPrime[100001];

void sieve()
{
	for(int i=0;i<100001;i++) isPrime[i]=1;
    isPrime[0]=0;
    isPrime[1]=0;
    for(int i=2;i*i<100001;i++)
    {
        if(isPrime[i])
        {
            for(int j=i*i;j<100001;j+=i)
            {
                isPrime[j]=0;
            }
        }
    }
}
int main()
{
	sieve();
    int _t=1;
    cin>>_t;
    // cout<<"Farhan"<<endl;
    while(_t--)
    {
        int n;
        cin>>n;
        cout<<isPrime[n]<<endl;
    }
}
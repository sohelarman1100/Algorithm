///unsigned long long er range 0  to  18446744073709551615 kintu 20! er man 10^18 hoy ar 21! er man
/// unsigned long long er limit ke cross kore tai 20 er upor kono sonkhar factorial niye kaj kora possible na

#include<bits/stdc++.h>
using namespace std;
unsigned long long Factorial(int n)
{
       if(n==0 || n==1)
              return 1;
       else
              return n*Factorial(n-1);
}
int main()
{
    int i,j,k,l,m,n;
    cin>>n;
    unsigned long long ans=Factorial(n);
    cout<<ans;
    return 0;
}

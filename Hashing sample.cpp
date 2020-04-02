/** Your are given two string s1 and s2. You have to print the starting position of all
    occurences of s1 in string s2 **/
#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define scln(a) scanf("%lld",&a)
#define pb push_back
#define pf printf
const int m = 1e9+7;
const int p=257;
ll p_pow[1000005];
ll hash_table[1000005];
void Power()
{
    p_pow[0]=1;
    for(int i=1 ; i<=1000001 ; i++)
    {
        p_pow[i] = (p_pow[i-1]*p)%m;
    }
}
ll compute_hash(bool fg, string& s)
{
    ll hash_value=0;
    int sz=s.size();
    for(int i=0 ; i<sz ; i++)
    {
        hash_value = (hash_value+((s[i])*p_pow[i]))%m;
        if(fg)
            hash_table[i+1] = hash_value;
    }
    return hash_value;
}
vector<ll> ans;
int main()
{
    Power();
    ll i,j,k,n,len1,len2,val1,val2,mxpower,addpower,temp;
    string s1,s2;
    while(scln(len1) != EOF)
    {
        getchar();
        getline(cin,s1);
        getline(cin,s2);
        len2=s2.size();
        val1=compute_hash(0,s1);
        val2=compute_hash(1,s2);
        ans.clear();
        n=len2;
        k=len1;
        if(len2 >= len1)
        {
            mxpower=n-k;
            for(i=0 ; i<=n-k ; i++)
            {
                addpower=mxpower-i;
                val2 = (hash_table[i+k] + m - hash_table[i])%m;
                val2 = (val2 * p_pow[addpower])%m;
                temp = (val1 * p_pow[mxpower])%m;
                if(temp == val2){
                    ans.pb(i);
                }
            }
        }
        if(ans.size() == 0)
            pf("\n");
        else
        {
            int sz=ans.size();
            for(i=0 ; i<sz ; i++)
                pf("%d\n",ans[i]);
        }
    }
    return 0;
}

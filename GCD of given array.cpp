#include <bits/stdc++.h>

using namespace std;

int GCD(int a, int b)
{
    if(b==0) return a;
    return GCD(b, a%b);
}
int main()
{
    int ans, n;
    cin >> n;
    int ara[n];
    for(int i=0; i<n; i++)
        cin >> ara[i];
    ans = ara[0];
    for(int i=1; i<n; i++)
        ans = GCD(ans, ara[i]);
    cout << ans << endl;
    return 0;
}

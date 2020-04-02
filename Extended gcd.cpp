///source cp-algorithm
///extended gcd

#include<bits/stdc++.h>
using namespace std;
int gcd(int a, int b, int & x, int & y)
{
    if (a == 0)
    {
        x = 0;
        y = 1;
        return b;
    }
    int x1, y1;
    int d = gcd(b % a, a, x1, y1);
    x = y1 - (b / a) * x1;
    y = x1;
    return d;
}

int main()
{
    int a,b,i,j,k,l,x,y;
    //int *x,*y;
    cout<<"enter two number you want to find gcd:"<<endl;
    cin>>a>>b;
    int g=gcd(a,b,x,y);  ///x & y er address pass kora hoyeche tai gcd function e jodi x & y change hoy
    /// tahole main function er moddheo x ar y er maan change hoye seti hobe;
    cout<<g<<" "<<x<<" "<<y<<endl;
    return 0;
}

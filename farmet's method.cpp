///reference cp algorithm;
#include<bits/stdc++.h>
using namespace std;
int a,b,c;
void fermat(int n)
{
    a = ceil(sqrt(n));
    int b2 = a*a - n;
    b = round(sqrt(b2));
    while (b * b != b2)
    {
        a = a + 1;
        b2 = a*a - n;
        b = round(sqrt(b2));
        if((a-b)*(a+b)>n)
        {
            c++;
            break;
        }
    }
}
int main()
{
    int n;
    cin>>n;
    fermat(n);
    if(c>0)
        cout<<"it is not possible to expree n by the differece of the squre of two numbers"<<endl;
    else
        cout<<"the numbers are: "<<a<<"  "<<b<<endl;
    return 0;
}

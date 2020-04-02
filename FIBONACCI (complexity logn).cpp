///FIBONACCI LOGN COMPLEXITY

#include <bits/stdc++.h>
using namespace std;

void multiply(long long F[2][2], long long M[2][2]);///jehetu fib() & power() theke multiply() & fib() ke egulo declare
///korar agei call kora hoy tai eikhane eguloke agei declare kore deya hoyeche bisoyti main func er
///por kono func er definition likhle jemon oi functon ke main fun er agei perameter soho agei declare
///kpre dite hoy oi rokom;
void power(long long F[2][2], long long n);

/* function that returns nth Fibonacci number */
long long int fib(long long int n)
{
  long long int F[2][2] = {{1,1},{1,0}};
  if (n == 0)
    return 0;
  power(F, n-1);
  return F[0][0];
}

/* Optimized version of power() in method 4 */
void power(long long int F[2][2], long long int n)
{
  if( n == 0 || n == 1)
      return; //jehetu functionti kichu return korbena tai shudu return lekha hoyeche er mane functiontir kaj eikhanei sesh
  long long int M[2][2] = {{1,1},{1,0}};

  power(F, n/2);
  multiply(F, F);

  if (n%2 != 0)
     multiply(F, M);
}

void multiply(long long int F[2][2], long long int M[2][2])
{
  long long int x =  F[0][0]*M[0][0] + F[0][1]*M[1][0];
  long long int y =  F[0][0]*M[0][1] + F[0][1]*M[1][1];
  long long int z =  F[1][0]*M[0][0] + F[1][1]*M[1][0];
  long long int w =  F[1][0]*M[0][1] + F[1][1]*M[1][1];

  F[0][0] = x;
  F[0][1] = y;
  F[1][0] = z;
  F[1][1] = w;
}

/* Driver program to test above function */
int main()
{
  long long int n;
  cin>>n;  //n=nth fibonacci number
  cout<<fib(n);
  getchar();
  return 0;
}

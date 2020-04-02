///complexity O(n*n) er cheyeo beshi kmp algorithm is so much efficient then it

#include<bits/stdc++.h>
using namespace std;
///this function will return positive value if s1 is substring of s2.
int isSubstring(string s1, string s2)
{
    int M = s1.length();
    int N = s2.length();

    ///* A loop to slide pat[] one by one */
    for (int i = 0; i <= N - M; i++)
    {
        int j;

        ///* For current index i, check for pattern match *///
        for (j = 0; j < M; j++)
            if (s2[i + j] != s1[j])
                break;

        if (j == M)
            return i;
    }

    return -1;
}

int main()
{
    string s1,s2;
    cin>>s1>>s2;
    int k=isSubstring(s1,s2);
    if(k!=-1)
        cout<<"yes sub string"<<endl;
    else
        cout<<"no s1 is not substring of s2"<<endl;
    return 0;
}

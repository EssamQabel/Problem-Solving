#include <bits/stdc++.h>

using namespace std;

int minOfThree(int a, int b, int c);

int main()
{
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);

    if(s1 == s2)
        cout<<"-1";
    else if( s1.length() > s2.length() )
        cout<<s1.length();
    else 
        cout<<s2.length();

    return 0;
}

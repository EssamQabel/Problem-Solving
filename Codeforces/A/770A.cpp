#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n , k;
    cin >> n >> k; cin.ignore();
    char s[n];
    for ( int i = 0; i < n; )
        for ( int j = 0; j < k; j++, i++ )
        {
            if(i>n)break;
            s[i] = 97 + j;
        }
    for ( int i = 0; i < n; i++ )
        cout << s[i];
}
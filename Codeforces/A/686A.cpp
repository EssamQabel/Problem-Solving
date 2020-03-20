#include <bits/stdc++.h>
using namespace std;
int main()
{
    long long x = 0;
    int n, dis = 0, input;
    char op;

    cin >> n >> x;
    for ( int i = 0; i < n; i++ )
    {
        cin >> op >> input;
        if ( op == '+' ){
            x += input;
        }
        else
        {
            if ( input > x ) dis++;
            else x -= input;
        }
    }
    cout << x << " " << dis;
}
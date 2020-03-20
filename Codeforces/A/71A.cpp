#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n, sz; cin >> n; cin.ignore();
    string input;
    string output[n];
    stringstream ss;

    for ( int i = 0; i < n; i++ )
    {
        getline( cin, input ); sz = input.size();
        if ( sz > 10 )
        {
            ss << input[0] << sz - 2 << input[sz-1];
            output[i] = ss.str();
            ss.str("");
        }
        else
        {
            ss << input;
            output[i] = ss.str();
            ss.str("");
        }
    }
    for ( int i = 0; i < n - 1; i++ )
        cout << output[i] << '\n';
    cout << output[n-1];
    return 0;
}

#include <bits/stdc++.h>
 
using namespace std;
 
int main()
{
    int n, m, xi, yi, down, up;
    cin >> n; cin.ignore();
    int arr[n];
    for ( int i = 0; i < n; ++i )
        cin >> arr[i];
    cin.ignore();
    cin >> m; cin.ignore();
    for ( int i = 1; i <= m; ++i )
    {
        cin >> xi >> yi; cin.ignore();
        arr[xi] += arr[xi-1] - yi;
        arr[xi-1] = 0;
        arr[xi-2] += yi - 1;
    }
    for ( int i = 0; i < n - 1; ++i )
        cout << arr[i] << '\n';
    cout << arr[n-1];
    return 0;
}
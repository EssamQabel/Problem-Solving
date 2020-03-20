#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, i = 0, input;
    cin >> n; cin.ignore();
    int arr[n];
    for ( ; i < n; i++ )
    {
        cin >> input; arr[input-1] = i + 1;
    }
    for ( int j = 0; j < n; j++ )
        cout << arr[j] << ' ';
    return 0;
}
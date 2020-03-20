#include <bits/stdc++.h>
#define arr_sz(arr) sizeof(arr)/sizeof(*arr)
using namespace std;
int main()
{
    string l, r; int N;
    cin>>l>>r;cin>>N;
    cout<<l<<' '<<r<<'\n';
    while(N--){
        string dead, n; cin>>dead>>n;
        if (dead.compare(l)==0)
            l = n;
        else
            r = n;
        cout<<l<<' '<<r<<'\n';
    }
    return 0;
}

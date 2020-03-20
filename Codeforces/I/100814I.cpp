#include <bits/stdc++.h>
#define arr_sz(arr) sizeof(arr)/sizeof(*arr)
using namespace std;
string binary_of(int x){
    string s(32, '0');
    for (int i = 0; i < 32; i++){
        s[i] += x%2;
        x /= 2;
    }
    return s;
}
int dist(string x, string y){
    int d = 0;
    for (int i = 0; i < 32; i++)
        if (x[i] != y[i])
            d++;
    return d;
}
int main()
{
    int T; cin>>T;
    while(T--){
        int n; cin>>n;
        vector<string> vs;
        for (int i = 0; i < n; i++){
            int x; cin>>x;
            vs.push_back(binary_of(x));
        }
        int ans = 0;
        for (int i = 0; i < n; i++){
            for (int j = i; j < n; j++){
                ans = max(ans, dist(vs[i], vs[j]));
            }
        }
        cout<<ans<<'\n';
    }
    return 0;
}

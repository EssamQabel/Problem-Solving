#include <bits/stdc++.h>
using namespace std;
int main()
{
    int k, l, m, n, d, cnt=0;
    cin>>k>>l>>m>>n>>d;
    vector<bool> v(d+1, false);
    for (int tk = k; tk <= d; tk+=k) v[tk]=true;
    for (int tl = l; tl <= d; tl+=l) v[tl]=true;
    for (int tm = m; tm <= d; tm+=m) v[tm]=true;
    for (int tn = n; tn <= d; tn+=n) v[tn]=true;
    for (int i = 1; i < v.size(); ++i) if (v[i]) cnt++;
    cout<<cnt;
    return 0;
}

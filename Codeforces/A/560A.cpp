#include <iostream>
#include <cstdio>
#include <vector>
#include <algorithm>
#include <map>
#include <cmath>
#include <set>
#include <string>
#define all(v) (v).begin(), (v).end()
#define vi vector<int>
#define p_b push_back
using namespace std;
int main(){
    int n; cin>>n;
    vi v;
    for (int i = 0; i < n; ++i) {int temp; cin>>temp; v.p_b(temp);}
    sort(all(v));
    if (v[0]==1) cout<<-1;
    else cout<<1;
    return 0;
}
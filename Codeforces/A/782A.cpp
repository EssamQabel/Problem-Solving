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
    int n, cnt=0; cin>>n;
    vi v;
    for (int i = 0; i < 2*n; ++i){
        int temp; cin>>temp;
        vi::iterator it = find(all(v), temp);
        if (it!=v.end()){ v.erase(it); }
        else { v.p_b(temp); }
        if (v.size() > cnt) { cnt = v.size(); }
    }
    cout<<cnt;
    return 0;
}
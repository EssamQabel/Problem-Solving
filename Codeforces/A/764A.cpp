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
    int n, m, z;
    cin>>n>>m>>z;
    set<int> setn, setm;
    vi v;
    for (int in=n; in<=z; in+=n){
        setn.insert(in);
    }
    for (int im=m; im<=z; im+=m){
        setm.insert(im);
    }
    set_intersection(all(setn), all(setm), back_inserter(v));
    cout<<v.size();
    return 0;
}
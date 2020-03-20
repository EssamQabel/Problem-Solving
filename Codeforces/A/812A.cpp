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
    int l[4], s[4], r[4], p[4];
    for (int i = 0; i < 4; ++i){
        cin>>l[i]>>s[i]>>r[i]>>p[i];
    }
    if (p[0]==1) if (l[0]||s[0]||r[0]||l[1]||s[2]||r[3]){ cout<<"YES"; return 0;}
    if (p[1]==1) if (l[1]||s[1]||r[1]||r[0]||l[2]||s[3]){ cout<<"YES"; return 0;}
    if (p[2]==1) if (l[2]||s[2]||r[2]||s[0]||r[1]||l[3]){ cout<<"YES"; return 0;}
    if (p[3]==1) if (l[3]||s[3]||r[3]||l[0]||s[1]||r[2]){ cout<<"YES"; return 0;}
    cout<<"NO";
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cmath>
#include <map>
#include <utility>

using namespace std;

int main(){
    int n, r, l, cnt, max=0;
    cin>>n;
    vector<int> v(n);
    for (int i = 0; i < n; ++i)
        cin>>v[i];
    if (n==1) cout<<1<<endl;
    else{
        for (int i = 0; i < n; ++i){
            cnt = 1; r=i; l=i;
            while(r<n-1 && v[r] >= v[r+1]){
                cnt++; r++;
            }
            while(l>0 && v[l] >= v[l-1]){
                cnt++; l--;
            }
            if (cnt>max) max = cnt;
        }
        cout<<max<<endl;
    }
    return 0;
}
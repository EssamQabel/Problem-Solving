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
    int n, k, cnt = 0, res = -1;
    string ss = "0123456789", s;
    cin>>n>>k;
    while(n--){
        bool flag = 0;
        cin>>s;
        for (int i = 0; i <= k; ++i){
            res = s.find(ss[i]);
            if (res==-1){
                flag=1;
                break;
            }
        }
        if (!flag) cnt++;
    }
    cout<<cnt;
    return 0;
}
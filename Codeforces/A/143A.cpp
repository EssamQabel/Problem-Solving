#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
using namespace std;
int main(){
    int d[2], c[2], r[2], a[4];
    cin>>r[0]>>r[1];
    cin>>c[0]>>c[1];
    cin>>d[0]>>d[1];
    for (int i = 1; i <= 9; ++i){
        for (int j = 1; j <= 9; ++j){
            for (int k = 1; k <= 9; ++k){
                for (int l = 1; l <= 9; ++l){
                    if (d[0] == i + l &&
                        d[1] == j + k &&
                        r[0] == i + j &&
                        r[1] == k + l &&
                        c[0] == i + k &&
                        c[1] == j + l){
                            set<int> s; s.insert(i); s.insert(j); s.insert(k); s.insert(l);
                            if (s.size() != 4){
                                cout<<"-1";
                            }else{
                                cout<<i<<' '<<j<<'\n'<<k<<' '<<l;
                            }
                            return 0;
                        }
                }
            }
        }
    }
    cout<<"-1";
    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main(){
    long n; cin>>n;
    vector<long> v;
    for (int i = 0; i < n; ++i){
        long temp; cin>>temp;
        v.push_back(temp);
    }
    if (v.size() <= 2) {
        cout<<'0'; return 0;
    }
    sort(v.begin(), v.end());
    long f = v.front(); long l = v.back();
    replace(v.begin(), v.end(), f, (long)-1);
    replace(v.begin(), v.end(), l, (long)-1);
    v.erase(remove(v.begin(), v.end(), -1), v.end());
    cout<<v.size();

    return 0;
}

#include <bits/stdc++.h>
#define all(v) (v).begin(), (v).end()
using namespace std;
int main(){
    std::string s; cin>>s;
    std::string x; cin>>x;
    size_t i = s.find("|");
    std::string s1 = s.substr(0, i);
    std::string s2 = s.substr(i+1);
    long long sum = s1.size() + s2.size() + x.size();
    if (sum%2==1 || s1.size() > sum/2 || s2.size() > sum/2)
        cout<<"Impossible";
    else{
        int i=0; while(s1.size() < sum/2) s1 += x[i++];
        s2 += x.substr(i);
        cout<<s1<<'|'<<s2;
    }
    
    return 0;
}
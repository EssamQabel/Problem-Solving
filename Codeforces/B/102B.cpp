#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <map>
#include <cmath>
#include <utility>
#include <set>
#include <sstream>
using namespace std;
int num_of_digits(int sum){
    int cnt = 0;
    while (sum>0){
        sum/=10;
        cnt++;
    }
    return cnt;
}
int main(){
    std::stringstream ss;
    string s; int sum = 0, cnt=1;
    cin>>s;
    if (s.size() == 1){
        cout<<"0"; return 0;
    }
    for (int i = 0; i < s.size(); ++i)
        sum += (int)s[i]-48;
    while(num_of_digits(sum) != 1){
        s = to_string(sum);
        sum = 0;
        for (int i = 0; i < s.size(); ++i)
            sum += (int)s[i]-48;
        cnt++;
    }
    cout<<cnt;
    return 0;
}
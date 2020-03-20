#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>

using namespace std;

int main(){
    string s; cin>>s;
    int pos = s.find("WUB");
    while(pos != -1){
        if (pos != 0){
            s.insert(s.begin()+pos, ' ');
            s.erase(pos+1, 3);
        }
        else
            s.erase(pos, 3);
        pos = s.find("WUB");
    }
    cout<<s;
    return 0;
}

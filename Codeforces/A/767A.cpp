#include <iostream>
#include <vector>

using namespace std;

int main(){
    long n; cin>>n; long next = n;
    vector<int> has(n+1, 0);

    for (int i = 0; i < n; ++i){
        long x; cin>>x;
        has[x] = 1;
        while(has[next] == 1){
            cout<<next<<' ';
            --next;
        }
        cout<<endl;
    }
    return 0;
}

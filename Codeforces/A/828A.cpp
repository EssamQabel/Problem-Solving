#include <bits/stdc++.h>
using namespace std;
int main()
{
    int n, ones, twos_2, twos_1=0, denied=0;
    cin>>n>>ones>>twos_2;
    while(n--){
        int t; cin>>t;
        if (t==1){
            if (ones) ones--;
            else if (ones == 0 && twos_2) {twos_2--; twos_1++;}
            else if (ones == 0 && twos_1) twos_1--;
            else denied++;
        }
        else if (t==2){
            if (twos_2) twos_2--;
            else denied+=2;
        }
    }
    cout<<denied;
    return 0;
}

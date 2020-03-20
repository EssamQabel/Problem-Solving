#include <iostream>
#include <vector>
#include <algorithm>
#include <cstdio>
#include <string>
#include <cmath>

using namespace std;

int main(){
    long long n;
	cin >> n;
	long long ans = 0;
	if (n % 2 == 0){
		ans = n / 2;
	} else {
		ans = -((n/2)+1);
	}
	cout << ans;
    return 0;
}

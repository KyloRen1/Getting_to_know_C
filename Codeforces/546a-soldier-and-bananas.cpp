#include<iostream>
using namespace std;

int main(){
	int k, n, w, sum_n;
	cin >> k >> n >> w;
	sum_n = (w * (w + 1) / 2) * k;
	if (sum_n > n){
		cout << sum_n - n;
	} else {
		cout << 0;
	}
	return 0;
}
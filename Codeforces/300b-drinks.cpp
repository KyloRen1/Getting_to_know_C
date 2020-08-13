#include<iostream>
#include<math.h>
#include <iomanip> 
using namespace std;

int main(){
	int k, l, m, n, total;
	long long d;

	cin >> k >> l >> m >> m;
	for(int i=0; i<n; i++){
		int x;
		cin >> x;
		sum += x;
	}
	cout << fixed << std::setprecision(12) << sum / n;
	return 0;
}
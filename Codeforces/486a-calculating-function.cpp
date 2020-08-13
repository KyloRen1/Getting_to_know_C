#include<iostream>
#include<math.h>
using namespace std;

int main(){
	long long n, res;
	cin >> n;
	res = (2 * pow(-1, n) * n + pow(-1, n) - 1) / 4;
	cout << res;
	return 0;
}
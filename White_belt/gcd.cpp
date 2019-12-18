# include <iostream>
# include <string>
# include <algorithm> 
using namespace std;

int main(){
	int a, b, gcd;
	cin >> a >> b;
	while (a > 0 and b > 0){
		if (a > b){
			a = a % b;
		} else {
			b = b % a;
		}
	}
	cout << a + b;
	return 0;
}
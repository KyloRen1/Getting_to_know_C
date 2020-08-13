#include<iostream>
using namespace std;

int main(){
	int x, counter = 0;
	cin >> x;
	while (x > 0){
		if (x >= 5){
			x -= 5;
			counter += 1;
		} else if (x >= 4){
			x -= 4;
			counter += 1;
		} else if (x >= 3){
			x -= 3;
			counter += 1;
		} else if (x >= 2){
			x -= 2;
			counter += 1;
		} else if (x >= 1){
			x -= 1;
			counter += 1;
		}
	}
	cout << counter;
	return 0;
}
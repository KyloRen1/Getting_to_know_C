#include<iostream>
#include<math.h>
#include<vector>
using namespace std;

int main(){
	int a, row, col;
	for(row=1; row <= 5; ++row){
		for (col=1; col<=5; ++col){
			cin >> a;
			if (a == 1){
				cout << (abs(row - 3) + abs(col-3));
				return 0;
			}
		}
	}
	return 0;
}
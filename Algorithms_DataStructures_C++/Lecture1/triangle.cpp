#include<iostream>
#include<math.h>

int main(){
	int x, y, z;
	std::cin >> x >> y;
	z = sqrt(pow(x, 2) + pow(y, 2));
	std::cout << z;
}
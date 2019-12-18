# include <iostream>
# include <string>
# include <algorithm> 
using namespace std;

int main(){
	int a, b, c;
	cin >> a >> b;
	if (b == 0){
		cout << "Impossible";
		return 0;
	} else {
		cout << a / b;
		return 0;
	}
}
# include <iostream>
# include <string>
# include <algorithm> 
using namespace std;

int main(){
	int n;
	cin >> n;
	for(int i=2; i<= n; i= i+2){
		cout <<i << " ";
	}
	return 0;
}
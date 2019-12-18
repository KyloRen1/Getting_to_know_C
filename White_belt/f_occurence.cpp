# include <iostream>
# include <string>
# include <algorithm> 
using namespace std;

int main(){
	string n;
	cin >> n;
	int i = -2;
	for (int j = 0; j < n.size(); j++){
		if (n[j] == 'f' && i == -2){
			i = -1;
		} else if (n[j] == 'f' && i == -1){
			i = j;
		}
	}
	cout << i;
	
	return 0;
}
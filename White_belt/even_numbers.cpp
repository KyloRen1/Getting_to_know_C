# include <iostream>
# include <string>
# include <algorithm> 
using namespace std;

int main(){
	int lower, upper ;
	cin >> lower >> upper;
    for(int i=lower; i<=upper; i++){
        if (i%2 == 0)
            cout << i << ' ';
    }
    return 0; 
}
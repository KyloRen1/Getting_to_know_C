# include <iostream>
# include <string>
# include <algorithm> 
using namespace std;

int Factorial(int n){
    if(n > 1)
        return n * Factorial(n - 1);
    else
        return 1;
}

int main(){
	int n ;
	cin >> n;
    if (n < 0){
        cout << 1;
    } else {
        cout << Factorial(n);
    }
    return 0; 
}
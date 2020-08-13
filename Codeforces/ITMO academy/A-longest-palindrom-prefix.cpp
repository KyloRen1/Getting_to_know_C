#include<iostream>
#include<cstring>
using namespace std;

// function declaration
int palindrom(string s);

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string s; 
		int res;
		cin >> s;

		for (int j = s.length(); j > 0; j--){
			res = palindrom(s.substr(0, j));
			if (res == 1){
				cout << j << endl;
				break;
			}
		}
	}

	return 0;
}

int palindrom(string s){
	int l = 0, r = s.length() - 1;

	while (l < r){
		if(s[l++] != s[r--]){
			return 0;
		}
	}
	return 1;
}
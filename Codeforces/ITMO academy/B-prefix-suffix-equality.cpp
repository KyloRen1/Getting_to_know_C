#include<iostream>
#include<cstring>
using namespace std;

// function declaration
int check_presence_prefix(string prefix, string s);
int check_presence_suffix(string suffix, string s);

int main(){
	int n;
	cin >> n;
	for(int i=0; i<n; i++){
		string s; 
		int res = 0, cur_val;
		cin >> s;

		// prefix pass
		for (int j = s.length() - 1; j > 1; j--){
			//cout << s.substr(0, j) << ' ' << j << endl;
			cur_val = check_presence_prefix(s.substr(0, j), s);
			res += cur_val;
		}
		cout << "final res : " << res << endl;
		
		// suffix pass TODO
		
	}
	return 0;
}


int check_presence_prefix(string prefix, string s){
	//cout << " ====  presence check  ==== " << endl;
	//cout << prefix << ' ' << s << endl;
	int res = 0, s_len = s.length(), p_len = prefix.length();
	for (int i=0; i<s_len - p_len; i++){
		//cout << "substr " << s.substr(i, i + p_len) << endl;
		if (s.substr(i, i + p_len) == prefix){
			res += 1;
		}
		//cout << res << endl;
	}
	return res;
}
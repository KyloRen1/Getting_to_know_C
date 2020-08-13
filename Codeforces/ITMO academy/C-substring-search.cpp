#include<iostream>
#include<cstring>
using namespace std;

void substr_counter(string t, string p);
int single_compare(string t, string p);

int main(){
	int q;
	cin >> q;

	for(int i=0; i<q; i++){
		string t, p;
		cin >> t >> p;
		substr_counter(t, p);
	}
	return 0;
}

void substr_counter(string t, string p){
	int res = 0;
	if (t.length() < p.length()){
		cout << res << endl;
		cout << ' ' << endl;
	} else {
		int counter = 0;
		for (int i=0; i < t.length() - p.length(); i++){
			int res;
			res = single_compare(t.substr(i, i+p.length()),p);
			if (res == 1){
				cout << i << ' ';
				counter += 1;
			}
		}
		cout << counter << endl;

	}
}

int single_compare(string t, string p){
	
}
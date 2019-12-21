# include <iostream>
# include <string>
# include <algorithm> 
# include<string.h>
using namespace std;

bool IsPalindrom(string s) {
    // Замечание: более правильным было бы использовать здесь тип size_t вместо int
    // О причинах Вы узнаете на Жёлтом поясе
    for (int i = 0; i < s.size() / 2; ++i) {
        if (s[i] != s[s.size() - i - 1]) {
            return false;
        }
    }
    return true;
}

int main(){
	string n ;
	cin >> n;
    if (IsPalindrom(n)){
        cout << "true";
    } else {
        cout << "false";
    }
    return 0; 
}
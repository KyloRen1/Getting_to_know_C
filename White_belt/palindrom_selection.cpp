#include <iostream>
#include <string>
#include <vector>
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

vector<string> PalindromFilter(vector<string> words, int minLength){
    vector<string> output;
    for(int i=0; i < words.size(); i++){
        if ((words[i].size() >= minLength) && IsPalindrom(words[i])){
            output.push_back(words[i]);
        }
    }
    return output;
}
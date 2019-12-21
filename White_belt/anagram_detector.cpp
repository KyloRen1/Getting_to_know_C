#include <iostream>
#include <vector>
#include <algorithm>
#include <map>

using namespace std;

void BuildCharCounters(string& first, string& second){
    map<char, int> dict_first;
    map<char, int> dict_second;
    for (int i = 0; i< first.size(); i++){
        dict_first[first.at(i)] += 1;
    }
    for (int i = 0; i< second.size(); i++){
        dict_second[second.at(i)] += 1;
    }
    bool res = dict_first == dict_second;
    if (res == 1){
        cout << "YES" << endl;
    } else {
        cout << "NO" << endl;
    }
}

int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++){
        string first, second;
        cin >> first >> second;
        BuildCharCounters(first, second);
    }
}


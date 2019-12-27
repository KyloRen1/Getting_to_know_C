
#include <iostream>
#include <set>
#include <string>
#include <algorithm>

using namespace std;

int main()
{
    int Q;
    set<string> unique_words;
    cin >> Q;
    for (Q; Q > 0; Q--){
        string word;
        cin >> word;
        unique_words.insert(word);
    }
    cout << unique_words.size();

    return 0;
}

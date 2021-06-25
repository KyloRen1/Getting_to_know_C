#include <map>

class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mapping = {
            {'M', 1000}, 
            {'D', 500}, 
            {'C', 100}, 
            {'L', 50}, 
            {'X', 10}, 
            {'V', 5}, 
            {'I', 1}, 
        };
        
        int sum = 0;
        for (int i=0; i<s.size(); i++){
            if (s[i] == 'I' && s[i + 1] == 'V'){
                sum += 4;
                i++;
            }
            else if (s[i] == 'I' &&s[i + 1] == 'X'){
                sum += 9;
                i++;    
                }
            else if (s[i] == 'X' && s[i + 1] == 'L'){
                sum += 40;
                i++;
                } 
            else if (s[i] == 'X' && s[i + 1] == 'C'){
                sum += 90;
                i++;
            }
            else if (s[i] == 'C' && s[i + 1] == 'D'){
                sum += 400;
                i++;
            } 
            else if (s[i] == 'C' && s[i + 1] == 'M'){
                sum += 900;
                i++;
            } else {
                sum += mapping.at(s[i]);   
            }
        }
        return sum;
    }
};


class Solution {
public:
    int romanToInt(string s) {
        map<char, int> mapping = {
            {'M', 1000}, 
            {'D', 500}, 
            {'C', 100}, 
            {'L', 50}, 
            {'X', 10}, 
            {'V', 5}, 
            {'I', 1}, 
        };
        
        int ans = mapping[s.back()];
        
        for (int i = s.size() - 2; i>=0; --i){
            if (mapping[s[i]] < mapping[s[i + 1]]){
                ans -= mapping[s[i]];
            } else {
                ans += mapping[s[i]];
            }
        }
        return ans;
    }
};


class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        int counter = arr1.size();
        for (int i=0; i<arr1.size(); i++){
            for (int j=0; j<arr2.size(); j++){
                if (abs(arr1[i] - arr2[j]) <= d){
                    cout << arr1[i] << ' ' << arr2[j] << endl;
                    counter -= 1;
                    break;
                }
            }
        }
        return counter;
    }
};


class Solution {
public:
    int findTheDistanceValue(vector<int>& arr1, vector<int>& arr2, int d) {
        sort(arr2.begin(), arr2.end());
        int counter = 0;
        
        for(int i=0; i<arr1.size(); i++){
            if (upper_bound(arr2.begin(), arr2.end(), arr1[i] + d) == lower_bound(arr2.begin(), arr2.end(), arr1[i] - d)){
                counter += 1;        
            }
        }
        return counter;
    }
};

class Solution {
public:
    vector<int> twoSum(vector<int>& v, int target) {
vector<int>v1;  
    for (int i = 0; i < v.size(); i++) {
        for (int j = i + 1; j < v.size(); j++) {
            if (v[i] + v[j] == target) {
                v1.push_back(i);
                v1.push_back(j);
            }
        }
        
    }
    return v1;
    
    }
    
};
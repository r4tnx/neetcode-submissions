class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {

        // initialize a hashmap to store frequencies
        unordered_map<int, int> freq;

        // populate the hashmap
        for(int n : nums){
            freq[n]++;
        }

        // convert the hashmap to a vector
        vector<pair<int, int>> vec;

        for(auto& p : freq){
            vec.push_back(p);
        } 

        // sort decending by frequency

        sort(vec.begin(), vec.end(), 
            [](pair<int, int>& a, pair<int, int>& b){
                return a.second > b.second;
            }
        );

        vector<int> result;

        for(int i=0; i<k; i++){
            result.push_back(vec[i].first);
        }

        return result;
    }
};

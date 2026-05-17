class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {

        unordered_map<string, vector<string>> umap;

        for(string s: strs){
            string sortedstr = s;
            sort(sortedstr.begin(), sortedstr.end());
            umap[sortedstr].push_back(s);
        }

        vector<vector<string>> result;

        for(auto& pair : umap){
            result.push_back(pair.second);
        }

        return result;

    }
};

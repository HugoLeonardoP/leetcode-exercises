class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;
        for(auto& s: strs)
        {
            string s2 = s;
            sort(s2.begin(), s2.end());
            mp[s2].push_back(s);
        }
        vector<vector<string>> resp;
        resp.reserve(mp.size());
        for(auto i : mp)
        {
            resp.push_back(i.second);    
        }

        return resp;
    }
};
class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.length() != t.length()) return false;

        int v[26] = {0};

        for(int i = 0; i < s.length(); i++){
            v[s[i] - 'a']++;
            v[t[i] - 'a']--;
        }

        for(int i = 0; i<26; i++){
            if(v[i] != 0) return false;
        }
        return true;
    }

    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        vector<vector<string>> resp;
        resp.resize(strs.size());

        for(int i = 0; i < strs.size(); i++)
        {
            resp[i].push_back(strs[i]);
            for(int j = i+1; j < strs.size(); j++)
            {
                if(isAnagram(strs[i], strs[j])){
                    resp[i].push_back(strs[j]);
                    strs.erase(strs.begin() + j);
                    j--;
                }
            }
        }
        for(int i=0; i < resp.size(); i++){
            if(!resp[i].size()){
                resp.erase(resp.begin()+i);
                i--;
            } 
        }
        return resp;
    }
};
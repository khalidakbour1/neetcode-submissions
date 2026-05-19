class Solution {
public:
    bool isAnagram(string s, string t) {
        if(s.size() != t.size())
            return false;
        std::unordered_map<char, int> r_char;
        for (char c: s)
        {
            r_char[c]++;
        }
        for (char c: t)
        {
            r_char[c]--;
        }
        bool is_match = true;
        for(auto pair : r_char) 
        {
            if (pair.second != 0)
                return(false);
        }
        return(true);
    }
};

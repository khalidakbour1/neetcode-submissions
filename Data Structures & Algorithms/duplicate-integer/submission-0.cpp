class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_set<int> s_numbers;
        for(int num: nums)
        {
            if(s_numbers.count(num) > 0)
            {
                return(true);
            }
            s_numbers.insert(num);
        }
        return(false);
    }
};
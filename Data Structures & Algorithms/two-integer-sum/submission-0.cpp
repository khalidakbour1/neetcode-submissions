class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> set;
        std::vector<int> res;
        for (int i = 0; i < nums.size(); i++)
        {
            int diff = target - nums.at(i);
            if(set.find(diff) != set.end())
            {
                res.push_back(set.find(diff)->second);
                res.push_back(i);
                return(res);
            }
            else
                set[nums.at(i)] = i;
        }
        return res;
    }
};

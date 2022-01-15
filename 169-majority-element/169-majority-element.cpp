class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n = nums.size();
		unordered_map<int, int> map;
		for(auto i : nums) {
			map[i]++;
			if(map[i] > n/2) 
                return i;
		} 
        return -1;
    }
};
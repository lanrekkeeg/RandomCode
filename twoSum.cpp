vector<int> twoSum(vector<int>& nums, int target) {
	vector<int> inde;
	for (int j = 0; j< nums.size(); j++) {
		for (int k = j; k<nums.size(); k++) {
			if (j != k) {
				if (nums[j] + nums[k] == target) {
					inde.push_back(j);
					inde.push_back(k);
					return inde;
				}
			}
		}
	}

}
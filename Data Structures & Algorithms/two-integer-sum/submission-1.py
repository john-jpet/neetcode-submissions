class Solution:
    def twoSum(self, nums: List[int], target: int) -> List[int]:
        hm = dict()
        for i in range(0, len(nums)):
            if target - nums[i] in hm:
                return [min(i, hm[target - nums[i]]), max(i, hm[target - nums[i]])]
            hm[nums[i]] = i

        
class Solution:
    def movesToMakeZigzag(self, nums: List[int]) -> int:
        if len(nums) <= 1:
            return 0

        min1, min2 = 0, 0
        lastdiff1, lastdiff2 = 0,0
        lastdiff1 = nums[1] - nums[0] + 1 if nums[1] >= nums[0] else 0
        min1, min2 = lastdiff1, 0

        for i in range(1, len(nums)):
            if i % 2 == 0:
                if nums[i-1] - lastdiff1 >= nums[i]:
                    min1 += nums[i-1] - lastdiff1 - nums[i] + 1
                if i+1 < len(nums) and nums[i+1] >= nums[i]:
                    lastdiff1 = nums[i+1] - nums[i] + 1
                    min1 += lastdiff1
                elif i+1 < len(nums) and nums[i+1] < nums[i]:
                    lastdiff1 = 0
            else:
                if nums[i-1] - lastdiff2 >= nums[i]:
                    min2 += nums[i-1] - lastdiff2 - nums[i] + 1
                if i+1 < len(nums) and nums[i+1] >= nums[i]:
                    lastdiff2 = nums[i+1] - nums[i] + 1
                    min2 += lastdiff2
                elif i+1 < len(nums) and nums[i+1] < nums[i]:
                    lastdiff2 = 0
        return min(min1, min2)
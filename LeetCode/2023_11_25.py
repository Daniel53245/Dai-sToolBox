'''
Give an array in increasing order 
Return an array of where give the sum of abs diff
between each element and all other elements
e.g.
[2,3,5] -> [4,3,5]
'''
class Solution(object):
    def getSumAbsoluteDifferences(self, nums):
        """
        :type nums: List[int]
        :rtype: List[int]
        """
        sum_great = sum(nums)
        sum_small = 0
        n = len(nums)
        rtn = []
        for i in range(len(nums)):
            rtn.append(sum_great-nums[i]*(n-i)-(sum_small-nums[i]*i))
            sum_great -= nums[i]
            sum_small += nums[i]
        return rtn
"""
Problem: Contains Duplicate
Problem Statement : Given an integer array nums, return true if any value appears more than once in the array, otherwise return false.

Time Complexity: O(n)
Space Complexity: O(n)
"""




class Solution:
    def containsDuplicate(self, nums: List[int]) -> bool:
        return(len(nums)!=len(set(nums)))
        

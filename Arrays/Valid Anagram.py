"""
Problem : Valid Anagram
Problem Statement : Given two strings s and t, return true if the two strings are anagrams of each other, otherwise return false.

An anagram is a string that contains the exact same characters as another string, but the order of the characters can be different.

"""



class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        if(len(s)!=len(t)):
            return False
        
        arr=[0]*26
        for key in range(len(s)):
            arr[ord(s[key])-ord("a")] +=1
            arr[ord(t[key])-ord("a")] -=1

        for key in arr:
            if(key!=0):
                return False
                
        return True

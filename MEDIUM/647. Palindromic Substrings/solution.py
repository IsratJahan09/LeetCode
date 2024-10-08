class Solution:
    def countSubstrings(self, s: str) -> int:
        n = len(s)
        count = 0
        for i in range(n):
            l = i
            r = i
            if l>=0 and r<n:
                while l>=0 and r<n and s[l]==s[r]:
                    l-=1
                    r+=1
                    count+=1
        for i in range(n):
            l = i
            r = i+1
            if l>=0 and r<n:
                while l>=0 and r<n and s[l]==s[r]:
                    l-=1
                    r+=1
                    count+=1
        return count 
        
        

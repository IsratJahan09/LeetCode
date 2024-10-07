class Solution:
    def isplaindrom(self, s, l, r):
        while l<r:
            if s[l]!=s[r]:
                return False
            l += 1
            r -= 1
        return True
    def validPalindrome(self, s: str) -> bool:
        n = len(s)
        l = 0 
        r = n-1
        while l<r:
            if s[l]!=s[r]:
                return self.isplaindrom(s, l+1, r) or self.isplaindrom(s, l, r-1)
            l = l+1
            r = r-1
        return True


class Solution:
    def isAnagram(self, s: str, t: str) -> bool:
        alpha = [0] * 26;
        for i in s:
            print(ord(i) - 97)
            alpha[ord(i) - 97] += 1
        for i in t:
            print(ord(i) - 97)
            alpha[ord(i) - 97] -= 1
        for i in alpha:
            if i != 0:
                return False
        return True

        
        
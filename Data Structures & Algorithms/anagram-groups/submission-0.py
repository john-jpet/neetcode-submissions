class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        arrofmaps = {}
        returner = []
        index = 0
        for i in strs:
            checker: dict[str,int] = {}
            for l in i:
                if l in checker:
                    checker[l] += 1
                else:
                    checker[l] = 1
            checker_tuple = tuple(sorted(checker.items()))
            if checker_tuple in arrofmaps:
                returner[arrofmaps[checker_tuple]].append(i)
            else:
                arrofmaps[checker_tuple] = index
                returner.append([i])
                index += 1
        return returner
class Solution {
    fun hasDuplicate(nums: IntArray): Boolean {
        val visited: HashSet<Int> = hashSetOf();
        for(i in nums) {
            if(visited.contains(i)) return true;
            visited.add(i);
        }
        return false;
    }
}

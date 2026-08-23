class Solution {
    fun twoSum(nums: IntArray, target: Int): IntArray {

        val tracker = HashMap<Int, Int>();
        var index = 0;
        for(n in nums) {
            if(tracker.containsKey(target - n)) return intArrayOf(tracker.get(target - n)!!, index);
            tracker.put(n, index);
            index++;
        }
        return intArrayOf()
    }
}
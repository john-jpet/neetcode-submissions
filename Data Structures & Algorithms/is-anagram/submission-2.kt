class Solution {
    fun isAnagram(s: String, t: String): Boolean {
        if(s.length != t.length) return false

        val tracker = HashMap<Char, Int>()

        for(c in s) {
            tracker[c] = tracker.getOrDefault(c, 0) + 1
        }
        for(c in t) {
            tracker[c] = tracker.getOrDefault(c, 0) - 1
        }
        for(c in s) {
            if(tracker[c] != 0) return false
        }
        return true
    }
}
class Solution {
    public String toLowerCase(String str) {
        char array[] = str.toCharArray();
        for (int i = 0;i < array.length;++i) {
            array[i] += 32;
        }
        return new String(array);
    }
}

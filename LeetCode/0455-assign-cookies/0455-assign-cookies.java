class Solution {
    public int findContentChildren(int[] g, int[] s) {
        Arrays.sort(g);
        Arrays.sort(s);
        int content = 0;
        int j = 0;
        for (int i = 0; i < g.length; i++) {
            for (; j < s.length; j++) {
                if (s[j] >= g[i]) {
                    s[j] = -1;
                    content++;
                    break;
                }
            }
            if (j == s.length) break;
        }
        return content;
    }
}
class Solution {
    public List<String> wordBreak(String s, List<String> wordDict) {
        int n = s.length();
        List<String>[] dp = new List[n + 1];
        dp[0] = new ArrayList<>();
        dp[0].add("");
        
        for (int i = 1; i <= n; i++) {
            List<String> list = new ArrayList<>();
            for (int start = 0; start < i; start++) {
                String sub = s.substring(start, i);
                if (wordDict.contains(sub) && dp[start] != null) {
                    for (String sentence : dp[start]) {
                        String str;
                        if (sentence.isEmpty())
                            str = sub;
                        else
                            str = sentence + " " + sub;
                        list.add(str);
                    }
                }
            }
            dp[i] = list;
        }
        
        if (dp[n] == null)
            return new ArrayList<>();
        else 
            return dp[n];
    }
}

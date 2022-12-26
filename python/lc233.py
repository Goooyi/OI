class Solution:
    def countDigitOne(self, n: int) -> int:
        strn = str(n)[::-1]
        l = len(strn)
        dp = [[0] * l for _ in range(2)]
        # 第0行是free的 第1行是bounded的
        dp[0][0] = 1
        dp[1][0] = 1 if int(strn[0]) >= 1 else 0

        for i in range(1, l):
            dp[0][i] = dp[0][i-1] * 10 + 10 ** i - 1
            curval = int(strn[i])
            dp[1][i] = dp[1][i-1] + (curval) * dp[0][i-1] + 10 ** i - 1 if curval > 1 else dp[1][i-1] + curval * (int(strn[:i][::-1]) + 1) + curval * dp[0][i-1]
        print(dp)
        return dp[1][-1]
        

s = Solution()
print(s.countDigitOne(13))
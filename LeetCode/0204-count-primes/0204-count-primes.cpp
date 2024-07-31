class Solution {
public:
    int countPrimes(int n) {
        if (n == 0 || n == 1) {
            return 0;
        }
        int numOfPrimes = n - 2;
        bool prime[n];
        memset(prime, true, sizeof(prime));
    
        for (int p = 2; p * p < n; p++) {
            if (prime[p] == true) {
                for (int i = p * p; i < n; i += p) {
                    if (prime[i]) {
                        numOfPrimes--;
                        prime[i] = false;
                    }
                }
            }
        }
        return (numOfPrimes);
    }
};
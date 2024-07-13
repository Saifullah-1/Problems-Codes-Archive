class Solution {
public:
    int addDigits(int num) {
        int x = num, sum;
        while (true) {
            sum = 0;
            while (x != 0) {
                sum += x % 10;
                x /= 10;
            }
            x = sum;
            if (sum / 10 == 0) {
                break;
            }
        }
        return sum;
    }
};
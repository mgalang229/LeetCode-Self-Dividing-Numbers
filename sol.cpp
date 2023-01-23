class Solution {
    bool self_divide(int x) {
        int orig = x;
        bool checker = true;
        while (x > 0) {
            if (x % 10 == 0) {
                return false;
            }
            checker &= (orig % (x % 10) == 0);
            x /= 10;
        }
        return checker;
    }
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int> vec;
        for (int num = left; num <= right; num++) {
            if (self_divide(num)) {
                vec.push_back(num);
            }
        }
        return vec;
    }
};

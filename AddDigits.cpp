class Solution {
public:
    int addDigits(int x) {
        while(x / 10 != 0){
            x = (x / 10) + (x % 10);
        }
        return x;
    }
};
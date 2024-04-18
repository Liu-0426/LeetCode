class Solution {
public:
    int mySqrt(int x) {
        int sum;
    
        for (int i = 0; i <= 46340; i++){
            if(i * i > x){
                sum = i -1;
                break;
            }
            else if(i * i == x){
                sum = i;
                break;
            }
            
        }
        return sum;
    }
};
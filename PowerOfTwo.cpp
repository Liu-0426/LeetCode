class Solution { 
public:
    bool isPowerOfTwo(int n) {
        int ans;
        bool a = false;
        for(int i = 0; i<=31; i++){
            if(pow(2,i) == n){
                a = true;
                return a;
                break;
            }
            
        }
        return false;
    }
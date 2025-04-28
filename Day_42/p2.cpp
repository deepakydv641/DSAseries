//Minimum Bit Flips to Convert Number

class Solution {
public:
    int minBitFlips(int start, int goal) {
        if(goal==start){
            return 0;
        }
        int c=start^goal;
        int cnt=0;
        while(c>2){
            if(c%2==1){
                cnt++;
            }
            c=c/2;
        }
        return cnt+1;
    }
};

//  T(C)=O(1)
//  S(C)=O(1)

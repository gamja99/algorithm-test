/* 
#문제설명
Given a 32-bit signed integer, reverse digits of an integer.
*/

class Solution{
public:
    int reverse(int x){
        long long num=0;
        while (x){
            num = (x%10)+num*10;
            x=x/10;
        }
        return (num>INT_MAX||num<INT_MIN)?0:num;
        
    }    
};

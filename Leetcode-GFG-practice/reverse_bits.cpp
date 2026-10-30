/*
This program reverse the bits of an integer and prints it in decimal(base-10)
*/
#include <iostream>
class Solution {
public:
    uint32_t reverseBits(uint32_t n) {
        uint32_t ans=0;
        for(int i=0;i<32;i++){
            ans= (ans<<1)|(n&1);        //or -->  ans= (ans*2)+(n&1);
            n=n>>1;
        }
        return ans;
    }
};
int main(){
    int n;
    std::cin>>n;
    Solution s;
    std::cout<< s.reverseBits(n);
    return 0;
}
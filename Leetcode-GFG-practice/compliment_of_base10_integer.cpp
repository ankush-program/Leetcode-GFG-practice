/*
This program prints the Compliment of a base 10 integer.
It has Two methods to do that, can be changed using #define
*/
#include <iostream>
#define M1

class Solution {
public:
    int bitwiseComplement(int n) {

        #ifdef M1
        int ans=0, bit=0,i=0;
        do{
            bit = (~n&1);
            bit <<= i;
            ans = ans|bit;
            i++;
            n>>=1;
        }while(n!=0);
        return ans;
        #endif

        #ifdef M2
        int x = ~n,mask=0;

        if(n==0) return 1;
        while(n!=0){
            mask = (mask<<1)|1;
            n=n>>1;
        }
        x = x&mask;
        return x;
        #endif

    }
};

int main(){
    int n;
    std::cin>>n;

    Solution s;
    std::cout<<s.bitwiseComplement(n);
    return 0;
}
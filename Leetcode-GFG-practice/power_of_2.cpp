#include <iostream>
#define M2      // M1 --> using Loop
// M2 --> using recursion


class Solution {
public:
    bool isPowerOfTwo(int n) {

        #ifdef M1
        if(n==0) return 0;
        while(n!=0){
            if(n==1) return 1;
            if(n%2==1) return 0;
            n/=2;
        }
        return 1;
        #endif

        #ifdef M2
        if(n==1) return 1;
        else if(n==0) return 0;
        else if(n%2==0) return isPowerOfTwo(n/2);
        else return 0;
        #endif

    }
};

int main(){
    int n;
    std::cin>>n;

    Solution s;
    std::cout<<s.isPowerOfTwo(n);
    return 0;
}
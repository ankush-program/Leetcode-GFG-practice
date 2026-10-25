#include <iostream>

class Solution {
  public:
    int factorial(int n) {
        if(n<1) return 1;
        else return n*factorial(n-1);
    }
};

int main(){
    Solution S1;
    S1.factorial(6);
}
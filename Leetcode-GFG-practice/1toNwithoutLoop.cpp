#include <iostream>

class Solution {
  public:
    void printTillN(int n) {
        static int i=1;
        if(i>1){
            std::cout <<" ";
        }
        std::cout << i;
        i++;
        if(i<=n) printTillN(n);
    }
};

int main(){
    Solution S1;
    int n;
    std::cin >> n;

    S1.printTillN(n);
}
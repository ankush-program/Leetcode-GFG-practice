#include <iostream>

class Solution {
  public:
    void printFloydTriangle(int n) {
        // code here
        int sum=1;
        for(int i=1;i<=n;i++){
            for(int j=1;j<=i;j++){
                std::cout<<sum<<' ';
                sum++;
            }
            std::cout<<'\n';
        }
    }
};

int main(){
    Solution S1;
    S1.printFloydTriangle(6);

    return 0;
}
#include <iostream>
using namespace std;

class Solution {
  public:
    void printNos(int n) {
        cout << n;
        if(n>1) {
            cout<<(" ");
            printNos(n-1);
        }
    }
};

int main(){
    std::cout << "Enter an integer: ";
    int n;
    std::cin >> n;

    Solution s1;
    s1.printNos(n);

    return 0;
}
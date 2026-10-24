#include <iostream>

class Solution {
  public:
    int closestNumber(int n, int m) {
        int i=1,n1,n2;
        for( i=0;i<=std::abs(m);i++){
            if((n+i)%m==0){
				n1=std::abs(n+i);
                break;
            }
        }
        int j=0;
        for( j=1;j<=std::abs(m);j++){
            if((n-j)%m==0){
				n2=std::abs(n-j);
                break;
            }
        }
        if (i>j) return (n-j);
        else if (i<j) return (n+i);
        else if (i==j) return (n1>n2)?(n+i):(n-j);
    }
};

int main(){
    int n,m;
    std::cout << "Enter n";
    std::cin >> n;
    std::cout << "Enter m";
    std::cin >> m;

    Solution S1;
    S1.closestNumber(n,m);

    return 0;
}
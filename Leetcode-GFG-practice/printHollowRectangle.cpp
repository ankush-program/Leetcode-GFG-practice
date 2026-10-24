#include <iostream>

class Solution {
  public:
    void printHollowRect(int n, int m) {
        // code here
        for(int i=1;i<=n;i++){
            if (i==1 || i==n){
                for(int j=1;j<=m;j++){
                    printf("*");
                }
            }
            else{
                printf("*");
                for(int j=1;j<=m-2;j++){
                    printf(" ");
                }
                printf("*");
            }
            printf("\n");
        }
    }
};

int main(){
    Solution S1;
    S1.printHollowRect(6,4);

    return 0;
}
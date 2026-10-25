#include <iostream>
using namespace std;

class Solution {
  public:
    void printPat(int n) {
        // code here
        for(int i=1;i<=n;i++){
            for(int j=i;j<n;j++){
                cout << "  ";
            }
            
            cout << " *";
            
            for(int j=1;j<4*(i-1);j++){
                cout << ' ';
            }

            if(i>1) cout << '*';

            cout<<'\n';
        }
        for(int i=1;i<n;i++){
            for(int j=1;j<=i;j++){
                cout << "  ";
            }
            
            cout << " *";
            
            for(int j=4*(n-i-1)-1;j>0;j--){
                cout << ' ';
            }

            if(i<n-1) cout << '*';

            cout<<'\n';
        }
        
    }
};

int main(){
    Solution S1;
    S1.printPat(6);
}
#include <iostream>

int fact(int n){
    int ans=1;
    for(int i=1;i<=n;i++){
        ans*=i;
    }
    return ans;
}
int nCr(int n,int r){
    return (fact(n)/(fact(n-r)*fact(r)));
}
int main(){
    std::cout << "Enter n: ";
    int n;
    std::cin >> n;

    std::cout << "Enter r: ";
    int r;
    std::cin >> r;

    std::cout << nCr(n,r);
    return 0;
}
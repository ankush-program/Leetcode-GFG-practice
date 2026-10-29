#include <iostream>

int main(){
    int n,count=0;
    std::cin >> n;

    while(n!=0){
        if(n&1==1) count++;     //or --> n/2==1
            n=n>>1;             //or --> n/=2
    }

    
    std::cout<<count;
    return 0;
}
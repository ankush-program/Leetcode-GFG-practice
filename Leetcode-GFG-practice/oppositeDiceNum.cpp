#include<iostream>
#define M1

int main(){
    std::cout<<"Enter Die number of Die: ";
    int n;
    std::cin>> n;

    #define M1
    if(n>0 && n<=6)
    std::cout << "The number opposite to "<< n <<" on Die is: "<< 7-n;
    #endif

    #ifdef M2
    std::cout << "The number opposite to "<< n <<" on Die is: ";
    if(n==1) std::cout << 6;
    else if(n == 2) std::cout << 5;
    else if(n == 3) std::cout << 4; 
    else if( n==4 ) std::cout << 3;
    else if( n==5 ) std::cout << 2;
    else std::cout << 1;
    #endif
    return 0;
}
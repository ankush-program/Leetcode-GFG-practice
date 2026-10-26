#include <iostream>
#define M2

using namespace std;

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;

    cout<< "Its digital root: ";
    if(n==0) n=0;

    #ifdef M1       //Brute Force
    int sum=0;
    while(n/10 != 0){
        while(n>0){
            sum+=(n%10);
            n/=10;
        }
        n=sum;
        sum=0;
    }
    #endif

    #ifdef M2       // Optimized
    while(n/10 != 0){
        if(n%9==0){
            n=9;
            break;
        }
        n=n%9;
    }
    #endif

    cout<< n;
    return  0;
}
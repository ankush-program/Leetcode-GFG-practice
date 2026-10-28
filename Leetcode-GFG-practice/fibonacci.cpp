#include <iostream>
#define M2

using namespace std;

int fib(int n){
    if(n==1) return 1;
    else if(n<1) return 0;
    else return fib(n-1)+fib(n-2);
}

int main(){
    cout << "Enter a number: ";
    int n;
    cin >> n;

    #ifdef M1       // Using Loop
    int a=0,b=1;
    for(int i=1;i<=n;i++){
        cout << a <<' ';
        a=a+b;
        b=a-b;
    }
    #endif

    #ifdef M2       // Using recursion
    for(int i=0;i<n;i++){
        cout<<fib(i)<<' ';
    }
    #endif
    return 0;
}
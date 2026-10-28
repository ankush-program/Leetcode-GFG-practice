#include <iostream>
using namespace std;

void printTillN(int n) {
    static int i=1;
    if(i>1) cout <<" ";
    cout << i;
    i++;
    if(i<=n) printTillN(n);
}

void printTillN2(int n){
    if(n>0){
        printTillN2(n-1);
        if(n>1) cout<<' ';
        cout<<n;
    }
}

int main(){
    int n;
    std::cin >> n;

    printTillN2(n);
}
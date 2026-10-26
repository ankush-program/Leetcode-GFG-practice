#include <iostream>
#define M2     

using namespace std;

int main(){
    cout<< "Enter a number: ";
    int n;
    cin>> n;
    
    if(n<=1){
        cout << "Not prime";
        return 0;
    }

    #ifdef M1       //Brute Force
    for(int i=2;i<n;i++){
        if(n%i==0){
            cout<< n << " is not prime";
            return 0;
        }
    }
    cout<< n <<" is Prime";
    #endif

    #ifdef M2       //checking till sqrt(n) --> reducing the no. of processes
    for(int i=2 ; i <= sqrt(n) ; i++){    //or --> i*i <= n
        if(n%i==0){
            cout<< n << " is not prime";
            return 0;
        }
    }
    cout<< n <<" is Prime";
    #endif
    return 0;
}
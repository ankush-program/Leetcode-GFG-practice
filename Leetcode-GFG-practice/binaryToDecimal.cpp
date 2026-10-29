#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a number(in binary): ";
    long long int n;
    cin>>n;

    int ans=0,i=0;
    while(n!=0){
        if(n%2==1) ans+=pow(2,i);     //or -->  n&1==1
            // or --> ans+=(n%2)*pow(2,i)
        i++;
        n/=10;
    }

    cout<<ans;
    return 0;
}
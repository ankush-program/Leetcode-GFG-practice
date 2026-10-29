#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;

    long long ans=0;
    int i=0;
    while(n!=0){
        if(n&1==1) ans+=pow(10,i);
        i++;
        n=n>>1;
    }
    
    cout<<ans;

    return 0;
}
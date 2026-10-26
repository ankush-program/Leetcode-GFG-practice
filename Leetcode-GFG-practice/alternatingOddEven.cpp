/*
This program tells whether the input number has alternating odd even digits or not
*/
#include<iostream>

using namespace std;

int main(){
    cout <<"Enter a number: ";
    int n,x,y;
    cin>>n;

    if ((n < 10)&&(n>-10)) {
        cout << "have alternating odd even digits\n";
        return 0;
    }
    
    x=n%10;
    n/=10;
    y=n%10;

    while(x%2!=y%2){
        x=y;
        n/=10;
        y=(n%10);
    }
    if(n==0){
        cout<<"have alternating odd even digits\n";
    }
    else cout<<"Doesn't have alternating odd even digits\n";
    return 0;
}

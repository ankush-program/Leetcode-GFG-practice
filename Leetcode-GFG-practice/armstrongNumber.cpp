#include <iostream>
using namespace std;

int main(){
    cout<<"Enter a number: ";
    int n;
    cin>>n;

    // Calculate digits
    int dig=0, temp=n;
    while(temp>0){
        dig++;
        temp/=10;
    }

    // Calculate
    int sum=0;
    temp=n;
    for(int i=1;i<=dig;i++){
        sum+=pow((temp%10),dig);
        temp/=10;
    }

    cout << ((sum==n)?"Armstrong":"not Armstrong");
    return 0;
}
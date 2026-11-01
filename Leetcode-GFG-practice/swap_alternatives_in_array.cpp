#include <iostream>

int main(){
    int size;
    std::cin >> size;

    int arr[30];
    
    for(int i=0; i<size; i++){
        std::cin>>arr[i];
    }

    for(int i=0; i<size; i++){
        std::cout<<arr[i] << ' ';
    }

    std::cout << '\n';

    for(int i=0; i+1<size; i+=2){
        arr[i] = arr[i] + arr[i+1];
        arr[i+1] = arr[i] - arr[i+1];
        arr[i] = arr[i] - arr[i+1];
    }

    for(int i=0; i<size; i++){
        std::cout<<arr[i] << ' ';
    }
    return 0;
}
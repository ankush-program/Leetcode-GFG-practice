#include <iostream>

bool search(int arr[], int size,int a){
    for(int i=0; i<size; i++){
        if(arr[i]==a) return 1;
    }
    return 0;
}

int main(){
    std::cout << "Enter array size: ";
    int size;
    std::cin >> size;

    int arr[30];
    std::cout << "Enter array elements: ";
    for(int i=0; i<size; i++){
        std::cin >> arr[i];
    }

    std::cout << "Enter number to search in array: ";
    int a;
    std::cin >> a;

    if(search(arr, size, a)) std::cout<<"Found";
    else std::cout<<"Not found";

    return 0;
}
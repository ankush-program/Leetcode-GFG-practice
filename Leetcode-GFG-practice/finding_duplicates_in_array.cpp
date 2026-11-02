#include <iostream>
#define M2      // M1 or M2

int main(){

    #ifdef M1
    int arr[] = {3,8,-7,8,9,6,4}, size = 7;
    int duparr[7], k=0;

    for(int i=0; i<size; i++){
        for(int j=i+1; j<size; j++){
            if(arr[i]==arr[j]){
                duparr[k]=arr[i];
                k++;
            }
        }
    }

    for(int i=0; i<k; i++){
        std::cout << duparr[i]<<' ';
    }
    #endif

    #ifdef M2
    // if array contains N elements from 1 to N-1 with 1 element duplicate
    int arr1[10] = {1,4,2,7,9,8,3,5,6,7}, n = 9, size = 10, ans=0;

    // XORing all elements of array, this removes the duplicate element
    for(int i=0;i<size;i++){
        ans=ans^arr1[i];
    }
    // XORing it with 1 to N-1 removes all elements except the duplicate one as it was not in ans
    for(int i=0;i<size;i++){
        ans=ans^i;
    }

    std::cout << ans;
    #endif

    return 0;
}
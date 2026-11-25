#include <iostream>
#define M1      // M1 or M2

int main(){

    #ifdef M1
    int arr[] = {3,8,-7,8,9,6,4}, n = 7;

    int uarr[30],k=-1, flag=1;
    for(int i=0;i<n;i++){
        flag=1;
        for(int j=0;j<=k;j++){
            if(arr[i]==uarr[j]){
                flag=0; break;
            }
        }
        if(flag==1)
        for(int j=i+1;j<n;j++){
            if((arr[i]==arr[j])&&(i!=j)){
                k++;
                uarr[k]=arr[i];
                break;
            }
        }
    }
    for(int i=0;i<=k;i++){
        std::cout << uarr[i] << ' ';
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
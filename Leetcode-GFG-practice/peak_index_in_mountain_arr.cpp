#include <iostream>
#define M2

int main(){
    int arr[11] = {1,3,4,8,12,15,12,11,10,9,6};   //Mountain array
    int n=sizeof(arr)/sizeof(int);

    #ifdef M1       //Linear Search
    int ans=0;
    for(int i=0;i<n;i++){
        if(arr[i+1]>arr[i]) ans=arr[i+1];
        else break;
    }
    #endif

    #ifdef M
    int start=0, end=n-1, mid, ans;

    while(start<=end){
        mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1]) start=mid+1;
        else if(arr[mid]>arr[mid+1]) end=mid;

        ans=arr[mid];
        if((arr[mid]>arr[mid+1])&&(arr[mid-1]<arr[mid])) break;
    }
    #endif

    #ifdef M2
    int start=0, end=n-1, mid, ans;
    while(start<end){
        mid=start+(end-start)/2;
        if(arr[mid]<arr[mid+1]) start=mid+1;
        else if(arr[mid]>arr[mid+1]) end=mid;
        ans=arr[start];
    }
    #endif

    std::cout << ans;
    return 0;
}
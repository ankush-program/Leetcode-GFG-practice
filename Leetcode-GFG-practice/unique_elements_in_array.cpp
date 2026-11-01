#include <iostream>
#define M1      // M1 or M2

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

    #ifdef M1
    int flag=1, uarr[30]={0}, k=0;
    for(int i=0;i<size;i++){
        for(int j=0;j<size;j++){
            if((arr[i]==arr[j])&&(i!=j)){
                flag=0;
                break;
            }
        }
        if(flag==1){
            uarr[k]=arr[i];
            k++;
        }
    }

    for(int i=0;i<k;i++){
        std::cout << uarr[i] << ' ';
    }
    #endif

    #ifdef M2
    // if only one element is unique and all others twice
    int ans=0;
    for(int i=0;i<size;i++){
        ans=ans^arr[i];
    }
    // for bits, a^a = 0 , a^0 = a

    std::cout << "Unique element: " << ans;

    #endif

    return 0;
}
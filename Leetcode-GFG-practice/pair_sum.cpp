#include <iostream>
#include <vector>
#define M2      //M1 or M2

int main(){
    #ifdef M1       //Unsorted Array
    std::vector<int> arr={1,6,7,4,8,9,10,5,3,2};
    int s=9, n=arr.size();
    std::vector<std::vector<int>> ans;
    
    for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if((arr[i]+arr[j]==s)&&(i!=j)){
                ans.push_back({arr[i],arr[j]});
                arr[i]=INT_MAX;
                arr[j]=INT_MIN;
                break;
            }
        }
    }
    #endif

    #ifdef M2       // sorted Array
    std::vector<int> arr={1,3,4,6,7,8,9,10,11,13};
    int s=12, n=arr.size(), i=0,j=n-1;
    std::vector<std::vector<int>> ans;

    while(i<j){
        if(arr[i]+arr[j]<s) i++;
        else if(arr[i]+arr[j]>s) j--;
        else if(arr[i]+arr[j]==s){
            ans.push_back({arr[i],arr[j]});
            i++;
            j--;
        }
    }
    #endif

    for(int i=0,j=0; i<ans.size(); i++){
        if(i!=0) std::cout<<", ";
        std::cout<<'(';
        if(ans[i][j]>ans[i][j+1]) std::cout<<ans[i][j+1]<<','<<ans[i][j];
        else std::cout<<ans[i][j]<<','<<ans[i][j+1];
        std::cout<<")";
    }
    return 0;
}
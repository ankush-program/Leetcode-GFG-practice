#include <iostream>
#include <vector>

int main(){
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

    for(int i=0,j=0; i<n; i++){
        if(ans[i][j]>ans[i][j+1]) std::cout<<'('<<ans[i][j+1]<<','<<ans[i][j]<<"), ";
        else std::cout<<'('<<ans[i][j]<<','<<ans[i][j+1]<<"), ";
    }
    return 0;
}
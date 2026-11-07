#include <iostream>
#include <vector>
#define M2      //M1 or M2

using namespace std;

class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]<nums[i]){
                    nums[i]=nums[i]+nums[j];
                    nums[j]=nums[i]-nums[j];
                    nums[i]=nums[i]-nums[j];
                }
            }
        }
        vector<vector<int>> ans;

        #ifdef M1           // Brute force
        for(int i=0;i<nums.size();i++){
            if((i>0)&&(nums[i]==nums[i-1])) continue;
            for(int j=i+1;j<nums.size();j++){
                if((j>i+1)&&(nums[j]==nums[j-1])) continue;
                for(int k=j+1;k<nums.size();k++){
                    if((k>j+1)&&(nums[k]==nums[k-1])) continue;
                    if((nums[i]+nums[j]+nums[k]==0)){      
                        ans.push_back({nums[i],nums[j],nums[k]});
                    }
                }
            }
        }
        #endif

        #ifdef M2
        for(int i=0;i<nums.size();i++){
            if ((i>0)&&(nums[i] == nums[i-1])) continue;
            int j=i+1,k=nums.size()-1;
            while((j<k)){
                if(nums[i]+nums[j]+nums[k]<0) j++;
                else if(nums[i]+nums[j]+nums[k]>0) k--;
                else if((nums[i]+nums[j]+nums[k]==0)){
                    ans.push_back({nums[i],nums[j],nums[k]});
                    j++; k--;
                }
                while((nums[j]==nums[j-1])&&(j<k)&&(j>i+1)&&(k<nums.size()-1)) j++;
            }
        }
        #endif

        return ans;
    }
};

int main(){
    vector<int> arr={-1,0,1,2,-1,-2,0,-1,-4,0,-3,2,2,1};

    Solution s;
    vector<vector<int>> ans;
    ans= s.threeSum(arr);
    for(int i=0,j=0; i<ans.size(); i++){
        std::cout<<'(';
        std::cout<<ans[i][j]<<','<<ans[i][j+1]<<','<<ans[i][j+2];
        std::cout<<") ";
    }
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;
class Solution {
public:
    void sort(vector<int>& nums) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[j]<nums[i]){
                    nums[i]=nums[i]+nums[j];
                    nums[j]=nums[i]-nums[j];
                    nums[i]=nums[i]-nums[j];
                }
            }
        }
    }
};

int main(){
    vector<int> arr={-1,0,1,2,-1,-4};

    Solution s;
    s.sort(arr);

    for(int i=0; i<arr.size(); i++){
        std::cout<<arr[i]<<' ';
    }
    return 0;
}
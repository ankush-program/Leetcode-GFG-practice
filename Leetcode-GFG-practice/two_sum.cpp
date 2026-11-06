#include <iostream>
#include <vector>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(int i=0;i<nums.size();i++){
            for(int j=i+1;j<nums.size();j++){
                if(nums[i]+nums[j]==target){
                    return {i,j};
                }
            }
        }
        return {};
    }
};

int main(){
    vector<int> arr={1,6,7,4,8,9,10,5,3,2};
    Solution s;
    vector<int> sa;
    sa = s.twoSum(arr,9);
    std::cout << sa[0]<<' '<< sa[1];
    return 0;
}
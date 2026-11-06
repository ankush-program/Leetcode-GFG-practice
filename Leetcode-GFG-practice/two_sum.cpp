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

    vector<int> twoSum_sorted(vector<int>& numbers, int target) {
        int i=0,j=numbers.size()-1;
        while(i<j){
            if(numbers[i]+numbers[j]<target) i++;
            else if(numbers[i]+numbers[j]>target) j--;
            else if(numbers[i]+numbers[j]==target) return {i,j};
        }
        return {};
    }
};

int main(){
    vector<int> arr={1,6,7,4,8,9,10,5,3,2};
    Solution s;
    vector<int> sa;
    sa = s.twoSum(arr,9);
    std::cout << sa[0]<<' '<< sa[1]<<'\n';

    std::vector<int> arr2={1,3,4,6,7,8,9,10,11,13};
    sa = s.twoSum_sorted(arr2,12);
    std::cout << sa[0]<<' '<< sa[1]<<'\n';

    return 0;
}
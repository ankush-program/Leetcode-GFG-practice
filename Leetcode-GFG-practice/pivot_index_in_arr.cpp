#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int pivotIndex(vector<int>& nums) {
        int sum=0, n=nums.size();
        for(int i=0;i<n;i++){
            sum+=nums[i];
        }
        int right_sum=sum, left_sum=0;
        int i=0;
        while(i<n){
            if(i>0) left_sum+=nums[i-1];
            right_sum=right_sum-nums[i];
            if(left_sum==right_sum) return i;
            i++;
        }
        return -1;
    }
};
int main(){
    vector<int> arr = {-1,-1,-1,-1,-1,0};

    Solution s;

    std::cout<<"pivot index: "<<s.pivotIndex(arr);
    return 0;
}
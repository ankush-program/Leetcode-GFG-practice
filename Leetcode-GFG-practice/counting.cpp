#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        vector<vector<int>> count(vector<int> &arr){

            int count,flag ;
            vector<vector<int>> ans;
            for(int i=0;i<arr.size();i++){
                flag =1;
                for(int j=0;j<i;j++){
                    if(arr[i]==arr[j]){ flag=0;break;}
                }
                if(flag==0) continue;
                count = 1;
                for(int j=0;j<arr.size();j++){
                    if((arr[i]==arr[j])&&(i!=j)) count++;
                }
                ans.push_back({arr[i],count});
            }
            return ans;
        }
};

int main(){
    vector<int> arr={1,4,2,2,1,4,3,4};
    Solution s;
    vector<vector<int>> ans = s.count(arr);

    for(int i=0,j=0; i<ans.size(); i++){
        std::cout<<'('<<ans[i][j]<<" --> "<<ans[i][j+1]<<") ";
    }
    return 0;
}
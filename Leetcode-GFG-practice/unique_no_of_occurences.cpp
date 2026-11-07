/*
return true if the number of occurrences of each value in the array is unique or false otherwise
*/
#include <iostream>
#include<vector>

using namespace std;

class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        vector<int> ans;
        int count,flag;
        for(int i=0;i<arr.size();i++){
            flag=1;
            for(int j=0;j<i;j++){
                if(arr[i]==arr[j]){
                    flag=0; break;
                }
            }
            if(flag==0) continue;
            count =1;
            for(int j=0;j<arr.size();j++){
                if((i!=j)&&(arr[i]==arr[j])) count++;
            }
            ans.push_back(count);
        }
        for(int i=0;i<ans.size();i++){
            for(int j=i+1;j<ans.size();j++){
                if(ans[i]==ans[j]) return 0;
            }
        }
        return 1;
    }
};


int main(){
    vector<int> arr={1,2,2,1,1,3};
    Solution s;
    cout << boolalpha << s.uniqueOccurrences(arr);
    return 0;
}
#include <iostream>
#include <vector>
using namespace std;

class Solution{
    public:
        void sort_0_1(vector<int> &arr){
            // M1 - counting
            // M2 - sorting
            // M3 - Two pointer

            // M3 -->
            int i=0, j=arr.size()-1;
            while(i<j){

                if(arr[i]==0) i++;
                else if(arr[j]==1) j--;
                else{
                    arr[i] = arr[i]+arr[j];
                    arr[j] = arr[i]-arr[j];
                    arr[i] = arr[i]-arr[j];
                }

                // or -->
                // while(arr[i]==0) i++;
                // while(arr[j]==1) j--;
                // if(i<j){
                //     arr[i] = arr[i]+arr[j];
                //     arr[j] = arr[i]-arr[j];
                //     arr[i] = arr[i]-arr[j];
                // }
            }
        }
};

int main(){
    vector<int> arr={1,0,0,0,1,1,0,1,0,1,1};
    Solution s;
    s.sort_0_1(arr);

    for(int i=0; i<arr.size(); i++){
         std::cout<<arr[i]<<' ';
    }
    return 0;
}
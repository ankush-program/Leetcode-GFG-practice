#include <iostream>
#include <vector>
#define M2
using namespace std;

class Solution{
    public:
        pair<int,int> first_last_pos(vector<int> &arr, int s){

            #ifdef M1
            // for Leftmost/First
            int start=0, end=arr.size()-1,mid=0, ans1=-1, ans2=-1;
            while(start<=end){
                mid=(start)+(end-start)/2;
                if(arr[mid]==s){
                    ans1=mid;
                    end=mid-1;
                }
                else if(arr[mid]<s) start=mid+1;
                else if(arr[mid]>s) end=mid-1;
            }

            // for Rightmost/Last
            start=0, end=arr.size()-1,mid=0, ans2=-1;
            while(start<=end){
                mid=(start)+(end-start)/2;
                if(arr[mid]==s){
                    ans2=mid;
                    start=mid+1;
                }
                else if(arr[mid]<s) start=mid+1;
                else if(arr[mid]>s) end=mid-1;
            }

            return{ans1,ans2};
            #endif

            #ifdef M2
            int i=0, j=arr.size()-1;
                while(i<j){
                    if(arr[i]<s) i++;
                    else if(arr[j]>s) j--;
                    if((arr[i]==s)&&(arr[j]==s)){
                        return {i,j};
                    }
                }
                return {};
            #endif
        }
};
int main(){
    vector<int> arr={1,2,3,3,3,5,5,8,9,10};
    int s=3;
    Solution sol;

    pair<int,int> p = sol.first_last_pos(arr,s);

    std::cout << "First: "<<p.first <<" ,Last: " << p.second
                <<"\nNo. of occurence: "<< p.second - p.first + 1;
    return 0;
}
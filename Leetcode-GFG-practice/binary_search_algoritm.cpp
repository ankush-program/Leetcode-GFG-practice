#include <iostream>
#include<vector>

using namespace std;

class Solution{
    public:
        void swap(int &a,int &b){
            a=a+b;
            b=a-b;
            a=a-b;
        }
        void sort(vector<int> &arr){
            for(int i=0;i<arr.size();i++){
                for(int j=i+1;j<arr.size();j++){
                    if(arr[i]>arr[j]) swap(arr[i],arr[j]);
                }
            }
        }
        int binary_s(vector<int> &arr, int s){
            sort(arr);
            int start=0, end= arr.size() - 1, mid=0;
            while(start<=end){
                mid = (start+end)/2;
                if(arr[mid]==s) return mid;
                else if(arr[mid]>s){
                    end=mid-1;
                }else if(arr[mid]<s){
                    start=mid+1;
                }
            }
            return -1;
        }
};

int main(){
    vector<int> arr={1,2,3,5,8,9,10,11,19};
    int n;
    std::cin >> n;

    Solution s;

    if(s.binary_s(arr,n)==-1) std::cout << "not found";
    else std::cout << "at index "<< s.binary_s(arr,n);

    return 0;
}
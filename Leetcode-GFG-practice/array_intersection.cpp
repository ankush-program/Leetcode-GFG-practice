#include <iostream>
#include <vector>
#define M3      //M1 or M2 or M3

int main(){
    //Given Range of elements: (INT_MIN,INT_MAX)

    // Mapping one element to one, no other can map these both again
    #ifdef M1
    std::vector<int> arr1={8,4,2,7,1,2,3,8,9,11};
    std::vector<int> arr2={8,8,1,17,8,4,11};
    std::vector<int> ans;

    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr2.size(); j++){
            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);         //or -->  ans[k]=arr1[i]; k++; (creating k outside)
                arr2[j]= INT_MIN;   //changing so that no other element can map this again
                break;      //if one match found, then no need to look next elements
            }
        }
    }
    #endif

    #ifdef M2
    std::vector<int> arr1={1,4,6,8,10,15,17,18};
    std::vector<int> arr2={4,8,10,12,13,18};
    std::vector<int> ans;

    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr2.size(); j++){
            if(arr1[i]<arr2[j]) break;  //If both arrays already sorted in ascending order
            else if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);         //or -->  ans[k]=arr1[i]; k++; (creating k outside)
                arr2[j]= INT_MIN;   //changing so that no other element can map this again
                break;      //if one match found, then no need to look next elements
            }
        }
    }
    #endif

    #ifdef M3
    std::vector<int> arr1={1,4,6,8,10,15,17,18};
    std::vector<int> arr2={4,8,10,12,13,18};
    std::vector<int> ans;

    int i=0,j=0;
    while((i<arr1.size())&&(j<arr2.size())){
        if(arr1[i]<arr2[j]){
            i++;
        }
        else if(arr1[i]>arr2[j]){
            j++;
        }
        else if(arr1[i]==arr2[j]){
            ans.push_back(arr1[i]);
            i++;
            j++;
        }
    }
    #endif

    for(int i=0; i<ans.size(); i++){
        std::cout << ans[i] << ' ';
    }

    return 0;
}
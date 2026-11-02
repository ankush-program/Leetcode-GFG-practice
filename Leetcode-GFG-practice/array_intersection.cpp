#include <iostream>
#include <vector>
// #define M2s

int main(){
    //Given Range of elements: (INT_MIN,INT_MAX)
    std::vector<int> arr1={8,4,2,7,1,2,3,8,9,11};
    std::vector<int> arr2={8,8,1,17,8,4,11};
    std::vector<int> ans;

    // Mapping one element to one, no other can map these both again
    for(int i=0; i<arr1.size(); i++){
        for(int j=0; j<arr2.size(); j++){

            #ifdef M2       //If both arrays sorted in ascending order
            if(arr1[i]<arr2[j]) break;
            #endif

            if(arr1[i]==arr2[j]){
                ans.push_back(arr1[i]);         //or -->  ans[k]=arr1[i]; k++; (creating k outside)
                arr2[j]= INT_MIN;   //changing so that no other element can map this again
                break;      //if one match found, then no need to look next elements
            }
        }
    }
    for(int i=0; i<ans.size(); i++){
        std::cout << ans[i] << ' ';
    }


    return 0;
}
#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

vector<int> findDuplicates(vector<int>& arr) {
        int n = arr.size();
        vector<int> result;
        for(int i=0;i<n;i++){
                for(int j=i+1;j<n;j++){
                        if(arr[i] == arr[j]){
                           result.push_back(arr[i]);
                           break;             
                        }
                }
        }
        return result;
}

vector<int> findDuplicatesOp1(vector<int>& arr) {
        int n = arr.size();
        vector<int> result;
        int i = 0;
        int j = n-1;
        sort(arr.begin(),arr.end());
        while(i<j){
                if(arr[i] == arr[i+1] && i+1 <= j){
                        result.push_back(arr[i]);
                }
                
                if(arr[j] == arr[j-1] && arr[i] != arr[j]){
                        result.push_back(arr[j]);
                }
                i++;
                j--;
        }
        return result;
}

int main()
{
    std::cout<<"Hello World"<<endl;
    
    vector<int> nums = {2,3,1,2,3};
    
    //Approach-1 TC: O(n^2)
    vector<int> dumplicates = findDuplicates(nums);
    
    for(auto i:dumplicates){
        cout<<i<<" ";
    }
    cout<<endl;
    
    //Approach-2, TC: O(n), SC: O(n)
    vector<int> dumplicates1 = findDuplicatesOp1(nums);
    for(auto i:dumplicates1){
        cout<<i<<" - ";
    }
    cout<<endl;
    
    return 0;
}

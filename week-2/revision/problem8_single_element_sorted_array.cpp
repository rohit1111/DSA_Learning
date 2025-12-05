#include <iostream>
#include <vector>
#include <iomanip>

using namespace std;

int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int signleElement = -1;
        for(int i=0;i<n;i++){
                int appearsTwice = false;
                for(int j=i+1;j<n;j++){
                        if(nums[i] == nums[j]){
                                appearsTwice = true;
                                i++;
                                break;
                        }
                      //cout<<nums[i]<<":"<<nums[j]<<"--"<<boolalpha<<appearsTwice<<endl;  
                }
                
                if(appearsTwice == false){
                      signleElement = nums[i];  
                }
        }
        return signleElement;
}

int singleNonDuplicateOp1(vector<int>& nums) {
        int n = nums.size();
        int signleElement = -1;
        for(int i=0;i<n;i++){
            if(nums[i] != nums[i+1] && i+1 < n){
                signleElement = nums[i];
                //cout<<signleElement<<endl;
                break;
            }else{
                i++;
            }
        }
        return signleElement;
}

int singleNonDuplicateOp2(vector<int>& nums) {
        int n = nums.size();
        int start = 0, end = n-1;
        
        while(start<end){
                int mid = start + (end - start)/2;
                //cout<<start<<" "<<end<<" "<<mid<<endl;
                if(mid%2 == 0){
                        if(nums[mid] == nums[mid+1]){
                                start = mid+1;
                        }else{
                                end = mid;
                        }
                }else{
                        if(nums[mid] == nums[mid-1]){
                                start = mid+1;
                        }else{
                                end = mid;
                        }
                }
        }
        return nums[start];
}

int main()
{
    std::cout<<"Hello World"<<endl;
    
    vector<int> nums = {1,1,2,3,3,4,4,8,8};
    //vector<int> nums = {3,3,7,7,10,11,11};
    //Approach-1: TC:O(n^2);
    cout<<singleNonDuplicate(nums)<<endl;
    //Approach-2: TC:O(n)
    cout<<singleNonDuplicateOp1(nums)<<endl;
    
    //Approach-3: TC:O(logn)
    cout<<singleNonDuplicateOp2(nums)<<endl;
    

    return 0;
}

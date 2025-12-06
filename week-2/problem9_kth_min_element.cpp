#include <iostream>
#include <vector>
#include <climits>
using namespace std;


int findNextMinElement(vector<int> nums, int prevMin) {
	int n = nums.size();
	int nextMin = INT_MAX;

	for(int i=0; i<n; i++) {
		if(nums[i] > prevMin && nums[i] < nextMin) {
			nextMin = nums[i];
		}
	}

	return nextMin;
}

int KthMinElement(vector<int>& nums, int k) {
	int prevMin = INT_MAX; //also we can set nums[0];
	int n = nums.size();
	int minElementCount = 0;
	for(int i=0; i<n; i++) {
		if(prevMin > nums[i]) {
			prevMin = nums[i];
		}
	}
	minElementCount = 1;
	int nextMin = 0;
	for(int i=minElementCount; i<k; i++) {
		nextMin = findNextMinElement(nums,prevMin);
		prevMin = nextMin;
	}

	return nextMin;
}


int main()
{
	std::cout<<"Hello World"<<endl;
	// vector<int> nums = {7,10,4,3,20,15};
	// int k = 3;
	vector<int> nums = {12, 3, 5, 7, 19};
	int k = 2;

	cout<<KthMinElement(nums,k)<<endl;

	return 0;
}

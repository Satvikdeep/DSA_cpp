#include <iostream>
#include <vector>

using namespace std;

    int singleNonDuplicate(vector<int>& nums) {
        int n = nums.size();
        int left = nums[0];
        int right = nums[n-1];
        int count = 0;

        while (count == 0){

                int mid = (left + right)/2;

                if (nums[mid-1] == nums[mid] && nums[mid] == nums[mid+1]){
                    count = 1;
                    return nums[mid];
                }

                else if (nums[mid+1] == nums[mid] && nums[mid] != nums[mid-1] ){
                    if ((n+1)%2 == 0){
                        right =  mid - 1;
                    }

                    else {
                        left = mid + 1;
                    }


                }

                else if (nums[mid] == nums[mid-1] && nums[mid+1] != nums[mid]){
                    if ((n+1)%2 == 0) {
                        left = mid + 1;
                    }

                    else {
                        right = mid - 1;
                    }
                }
            }

    }
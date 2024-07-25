#include<iostream>
using namespace std;
// class Solution {
// public:

//  int findMaxConsecutiveOnes(vector<int>& nums) {

//  int sum=0,mSum=0;

//  for(int i=0;i<nums.size();i++)

//  {

//   if(nums[i]==0)

//   {

//   sum=0;

//   }

//   else{

//   sum+=1;

//   if(sum>mSum)

//    mSum=sum;

//   }

//  }

//  return mSum;

//  }

// };

int main()
{
    int arr[] = {0, 0,0, 0, 0, 0, 0, 0, 0, 0};
    
    int count = 0;
    int maxCount = 0;

    for(int i = 0; i < 10; i++)
    {
        if(arr[i] == 1)
        {
            count++;
        
            if(count>maxCount)
                maxCount = count;
         }
        
        else
        {
            count = 0;
        }
    }
    
    
    cout << "The maximum number of consecutive 1s is: " << maxCount << endl;


    
    return 0;
}
// class Solution {

// public:

//  int findMaxConsecutiveOnes(vector<int>& nums) {

//  // int arr[6];

//  // int size = sizeof() / sizeof(arr[0]);

//  int max_sum = 0;

//  int current_sum = 0;

//  for (int i = 0; i < nums.size(); i++) {

//   if (nums[i] == 1) {

//   current_sum = current_sum + nums[i];

//   if (current_sum > max_sum) {

//    max_sum = current_sum;

//   }

//   } else {

//   current_sum = 0;

//   }

//  }

//  return max_sum;

//  }

// };



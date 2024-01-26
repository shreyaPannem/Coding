class Solution {
public:
    int searchInsert(vector<int>& nums, int target) {
         int start=0,found=0;
         int end=nums.size()-1;
         int position=0;
         int mid=start+(end-start)/2;
         while(start<=end){
         if(nums[mid]==target){
             found=1;
             return mid;
             }
         if(target>nums[mid]){
             start=mid+1;
         }
         else{
             end=mid-1;
         }
             mid=start+(end-start)/2;
         }
         if(target > nums[nums.size()-1] && found==0){
             found=1;
             return nums.size();
         }
      else    if(target < nums[0]){
              found=1;
             return 0;
         }
  else  if(found==0){
             start=0,end=nums.size()-1;
              mid=start+(end-start)/2;
 while(start<=end){
        
         if(target>nums[mid]){
             start=mid+1;
           if(target>nums[mid] && target<nums[mid+1])
             position=mid+1;
         } 
         else {
             end=mid-1;
             if(target>nums[mid] && target<nums[mid+1])
             position=mid+1;
            
         }
             mid=start+(end-start)/2;
         }
        
         }
 return position;
    }
    

};
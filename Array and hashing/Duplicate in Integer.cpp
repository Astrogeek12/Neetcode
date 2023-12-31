//Given an integer array nums, return true if any value appears at least 
//twice in the array, and return false if every element is distinct.

Code:
class solution{
    public:
    bool ContainsDuplicate(vector<int>& nums){
        unordered_set<int> s;
        for(int i=0;i<nums.size();i++){
            if(s.find(nums)!=s.end()){
                return true;
            }
            s.insert(nums[i]);
        }
        return false;
    }
};

//vector<int> is a dynamic array which it can resize itself when the number of elements exceeds its current capacity
//Unordered set is used for faster retrieval ad used for large datasets
//if s.find()!=s.end() means it has a duplicate that 
//means if there is a duplicate it returns the iterates that pointer or give back the s.end()


//Explanation:
//you can do this problem in two ways one with two for loops which takes O(n2) as time complexity 
//another method is hash set method which takes O(n) , It requires only one for loop which has the numbers and we will have a hash set.
//one element will be checked till the last of set if it is present 
//then true will be returned if it is not there then the element will be returned to the unordered_set and again 
//this process continues till we get the duplicate and return true if not return false


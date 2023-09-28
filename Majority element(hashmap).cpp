//This basically takes a hash map which stores the element and it's count if the count is equalt to the minimum val then it's pushed to list 
//The at max majority element can be only 2 elements doubt refer the video 
class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n=arr.size();
        vector<int> lst;
        map<int,int> m;
        int min=(n/3)+1;
        for(int i=0;i<n;i++){
            m[arr[i]]++;

            if(m[arr[i]]==min){
                lst.push_back(arr[i]);
            }
            if(lst.size()==2) break;
        }
        return lst;
        
    }
};

//Time complexity :O(n) , Space complexity : O(n) [Not that optimal solution to use]   

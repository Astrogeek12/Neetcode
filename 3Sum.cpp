//The brute force solution will be using three for loops and doing it which costs O(n3)
//Optimal approach is using two pointer method , Time complexity: O(nlogn)[Sort] +O(Nn) , Space : O(n)
//The i position will be in first and k will be in last position

class Solution {
public:
    vector<vector<int>> threeSum(vector<int> &arr) {
        vector<vector<int>> ans;
        int n=arr.size();
        sort(arr.begin(),arr.end()); //To avoid duplicate values
        
        for(int i=0;i<n;i++){
            if(i>0 && arr[i]==arr[i-1]) continue;
            int j =i+1;
            int k=n-1;
            while(j<k){
                int sum = arr[i]+arr[j]+arr[k];
                if(sum<0){
                    j++;
                }
                else if (sum>0){
                    k--;
                }
                else{
                    vector<int> temp ={arr[i],arr[j],arr[k]};
                    ans.push_back(temp);
                    j++;
                    k--;
                    while(j<k && arr[j]==arr[j-1]) j++;
                    while(j<k && arr[k]==arr[k+1]) k--;
                }
            }


        }
        return ans;
 
    }

        

        
};

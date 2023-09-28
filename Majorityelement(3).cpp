//Baically dint pass all the test cases 84/87 got passed
class Solution {
public:
    vector<int> majorityElement(vector<int>& arr) {
        int n= arr.size();
        int el1=INT_MIN;
        int el2=INT_MIN;
        int cnt1=0,cnt2=0;
        for(int i=0;i<n;i++){
            if(cnt1==0 && el2!=arr[i]){
                cnt1=1;
                el1=arr[i];

            }
            else if(cnt2==0 && el1 != arr[i]){
                cnt2=1;
                el2=arr[i];
            }
            else if(arr[i]==el1) cnt1++;
            else if(arr[i]==el2) cnt2++;
            else {cnt1--,cnt2--;}

        }
        vector<int> ls;
        for(int i=0;i<n;i++){
            if(arr[i]==el1) cnt1++;
            if (arr[i]==el2) cnt2++;
        }

        int min =(int)(n/3)+1;
        if(cnt1>min) ls.push_back(el1);
        if(cnt2>min) ls.push_back(el2);

        return ls;

}
};

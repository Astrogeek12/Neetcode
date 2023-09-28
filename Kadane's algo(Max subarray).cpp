class solution{
public:
int maxsubarray(vector<int> &arr){
  int n=arr.size();
  int maxi=INT_MIN; //INT_MIN is typically defined as -2147483647 - 1, which is the smallest representable value for a signed 32-bit int on most systems
  int sum=0;
  int start=0;
  int ansStart=-1; int ansEnd=-1;
  for(int i=0;i<n;i+){
      if(sum==0) start=i;
      sum+=arr[i];
      if(sum>maxi){
         maxi=sum;
         ansStart=start;
         ansEnd=i;
         
      }
      if(sum<0){
         sum=0;
      }
  }
  cout<<"The max subarray is [";
  for(int i=ansStart;i<=ansEnd;i++){
     cout<<arr[i];
  }
  cout<<"]"<<endl;
return maxi;
}
};

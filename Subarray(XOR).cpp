//To create subarrays on array [//BRUTE FORCE METHOD]
for(int i=0;i<n;i++){
      for(int j=i;j<n;j++){
          XOR=0;
         for(k=i-->j){
           XOR=XOR^arr[k];
           if(XOR==K) count++;}}}
return count;
//better approach( Remove the third loop)
for(int i=i;i<n;i++{
         XOR=0;
     for(int j=i;j<n;j++){
        XOR=XOR^arr[j];
       if(XOR==K) count++;
     }
}
return count;
//To keep a tract it's alaways reccomended to use hashmap
//Optimal solution
int subarraywithsumK(vector<int> arr, int k){
      int Xor=0;
      int count=0;
      map<int,int> mp;
      mp[xor]++; //here the map takes (0,1)  0--> x [start element] , 1 --> Count of how many times the x comes when xr^k is done
      for(int i=0;i<arr.size();i++){
           int xr=xr^arr[i];
           int x=xr^k;
           count+=mp[x];
           mp[xor]++;
      }
return count;
}


              
          

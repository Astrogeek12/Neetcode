//To find the duplicates and missing numbers [Brute force]  Time: O(n2) space : O(1)
for(int i=0;i<n;i++){
     for(int j=0;j<n-1;j++){
         if(arr[j]==i) count++;
       if count==2 repeating =i;
       else  count==0 missing =i;
      if(repeating !=-1 && missing !=-1) breal;
       }
}

//Hash array approach   Time: O(2n) space;O(n)
int hash[n+1]={0};
for(int i=i;i<ni++){
    hash[a[i]]++;
}
for(int i=0;i<n;i++){
  if (hash[i]==2) repating=i;
  if(hash[i]==0) missing=i;
  if(repeating !=-1 && missing !=-1) break;
}
return(repeating, missing);


//Using maths[Refer note book] Time:O(n) space:O(1)
vector<int> findMissingRepeatingNumbers(vector<int> a) {
    long long n = a.size(); // size of the array

    // Find Sn and S2n:
    long long SN = (n * (n + 1)) / 2;
    long long S2N = (n * (n + 1) * (2 * n + 1)) / 6;

    // Calculate S and S2:
    long long S = 0, S2 = 0;
    for (int i = 0; i < n; i++) {
        S += a[i];
        S2 += (long long)a[i] * (long long)a[i];
    }

    //S-Sn = X-Y:
    long long val1 = S - SN;

    // S2-S2n = X^2-Y^2:
    long long val2 = S2 - S2N;

    //Find X+Y = (X^2-Y^2)/(X-Y):
    val2 = val2 / val1;

    //Find X and Y: X = ((X+Y)+(X-Y))/2 and Y = X-(X-Y),
    // Here, X-Y = val1 and X+Y = val2:
    long long x = (val1 + val2) / 2;
    long long y = x - val1;

    return {(int)x, (int)y};
}


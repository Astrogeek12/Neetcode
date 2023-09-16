#include<bits/stdc++.h>
using namespace std;

int binarysearch(int arr[],int l,int r,int x){                                       //Done by recursive function , iterative function starts with while(r>=l) and 
                                                                                      //it simply returns the l=m+1 and r=m-1 not the whole function
    if(r>=l){
        int m=l+(r-l)/2;
        
    
    if(arr[m]==x){
        return m;
    }
    if(arr[m]>x){
        return binarysearch(arr,l,m-1,x);
    }
    else
    return binarysearch(arr,m+1,r,x);
    }
    return -1;
    
}

int main(void){
    int arr[]={23,25,45,67,87,98,105};
    int x=105;
    int n=sizeof(arr)/sizeof(arr[0]);
    int result=binarysearch(arr,0,n-1,x);
    (result==-1)?cout<<"element is not present at index"
    :cout<<"element is present at index"<< " "<<result;
    return 0;
    
}

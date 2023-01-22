//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;

// } Driver Code Ends

int bs(int arr[],int l,int r,int x)
{
    int mid=(l+r)/2;
    if(arr[mid]>x)
    {
        return bs(arr,l,mid-1,x);
    }
    else if(arr[mid]<x)
    {
        return bs(arr,mid+1,r,x);
    }
    else
    {
        if(mid==0||arr[mid-1]!=arr[mid])
        {
            return mid;
        }
        else
        {
            return bs(arr,l,mid-1,x);
        }
    }
}
int bss(int arr[],int l,int r,int x)
{
    int mid=(l+r)/2;
    if(arr[mid]>x)
    {
        return bs(arr,l,mid-1,x);
    }
    else if(arr[mid]<x)
    {
        return bs(arr,mid+1,r,x);
    }
    else
    {
        if(mid==0||arr[mid]!=arr[mid+1])
        {
            return mid;
        }
        else
        {
            return bs(arr,mid+1,r,x);
        }
    }
}
vector<int> find(int arr[], int n , int x )
{
    // code here
   vector<int>ans;
   int l=0;
   int r=n-1;
   int u=bs(arr,l,r,x);
    ans.push_back(u);
   int v=bss(arr,l,r,x);
   ans.push_back(v);
   return ans;
}

//{ Driver Code Starts.

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,x;
        cin>>n>>x;
        int arr[n],i;
        for(i=0;i<n;i++)
        cin>>arr[i];
        vector<int> ans;
        ans=find(arr,n,x);
        cout<<ans[0]<<" "<<ans[1]<<endl;
    }
    return 0;
}



// } Driver Code Ends

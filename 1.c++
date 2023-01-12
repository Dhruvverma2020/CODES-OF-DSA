//{ Driver Code Starts
#include <bits/stdc++.h>

using namespace std;

// } Driver Code Ends
//User function template for C++
class Solution{
public:	
	int search(int a[], int n)
	{
	    //code
	    unordered_map<int,int>m;
	    for(int i=0;i<n;i++)
	    {
	        m[a[i]]++;
	    }
	    
	    int ans=-1;
	    for(int i=0;i<n;i++)
	    {
	        if(m[a[i]]==1)
	        {
	            ans=a[i];
	        }
	    }
	    return ans;
	}
};

//{ Driver Code Starts.

// Driver program
int main()
{
    int t,len;
    cin>>t;
    while(t--)
    {
        cin>>len;
        int arr[len];
        for(int i=0;i<len;i++){
            cin>>arr[i];
        }
        Solution ob;
        cout<<ob.search(arr, len)<<'\n';
    }
    return 0;
}

// } Driver Code Ends

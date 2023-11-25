//{ Driver Code Starts
#include <bits/stdc++.h>
using namespace std;

// } Driver Code Ends
class Solution{
	
	private:
/*	void swap(int &a , int &b){
	    int temp = a ;
	    a = b ;
	    b = temp ;
	}*/
	
	
	public:
	void shuffleArray(int arr[],int n)
	{
	    // Your code goes here
	    int i = 0 , j = n/2 ;
	    vector<int> v(n,0);
	    for(int i=0;i<n;i++)
	    v[i]=arr[i];
	    for(int k=0;k<n;k++)
	    {
	        arr[k]= k%2==0 ? v[i++] : v[j++];
	    }
	    
	}
		 

};

//{ Driver Code Starts.


int main() 
{
   
   
   	int t;
    cin >> t;
    while (t--)
    {
    	int n;
	    cin>>n;
	    int a[n] ;
	    for(int i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }


       

        Solution ob;
        ob.shuffleArray(a, n);

		for (int i = 0; i < n; i++) 
			cout << a[i] << " ";
    
	
        
	    cout << "\n";
	     
    }
    return 0;
}
// } Driver Code Ends
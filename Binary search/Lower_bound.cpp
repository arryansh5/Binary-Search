#include<iostream>
#include<algorithm>
#include<vector>

using namespace std; 

class Solution{
    public:
        int return_lower_bound(vector<int> &arr , int n){
            int size_of_array = arr.size(); 
            int low = 0 , high = size_of_array - 1; 
            int ans = size_of_array ;
            while(low <= high){
                int mid = (low + high)/2  ; 
                if(arr[mid] > n ){
                    ans = mid ; 
                    high = mid - 1 ; 
                } else { 
                    low = mid + 1 ; 
                }
            }

            return ans ; 
        }
    
};

int main(){
    vector<int> arr ={2, 4, 4, 4, 6, 8};

    int n = 4 ; 
    Solution obj; 
    cout<<obj.return_lower_bound(arr , n )<<endl;

}
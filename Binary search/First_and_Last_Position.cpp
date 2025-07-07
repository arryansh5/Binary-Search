#include<iostream>
#include<vector> 
using namespace std; 

class Solution{
    public:
        int find_ceil(vector<int> &arr , int target){
            int low = 0 , high = arr.size() -1 ; 
            int index = arr.size(); 
            while(low <= high){
                int mid = (low + high) / 2; 
                if(arr[mid] > target){
                    high = mid - 1 ; 
                    index = mid; 
                } else { 
                    low = mid + 1 ; 
                }
            }
            return (index- 1 ); 
        }

        int find_floor(vector<int> &arr , int target){
            int low = 0 , high = arr.size() -1 ; 
            int index = arr.size(); 
            while(low <= high){
                int mid = (low + high) / 2; 
                if(arr[mid] < target){
                    low = mid + 1 ; 
                    index = mid; 
                } else { 
                    high = mid - 1 ; 
                }
            }
            return (index + 1) ; 
        }
}; 

int main(){
    vector<int> arr ={5,7,7,8,8,10};

    int n = 8 ; 
    Solution obj; 
     
    cout<<"Ceil : "<<obj.find_ceil(arr , n )<<endl;
    cout<<"Floor : "<<obj.find_floor(arr , n )<<endl;
}

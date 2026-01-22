#include <iostream>
#include <vector>
using namespace std;


int main(){
        vector<int> arr = {3,5,3,2,0};
        int start = 0;
        int end = arr.size() - 1;
        int mid = start + (end-start) /2;
        while(start <= end){
            
            if( (arr[mid] < arr[mid + 1] || mid+1 >= arr.size()) && arr[mid] > arr[mid - 1]){
                start = mid + 1;
            }

            else if (arr[mid] > arr[mid + 1] && (arr[mid] < arr[mid - 1] || mid-1 >= 0)){
                end = mid - 1;
            }

            else if (arr[mid] > arr[mid + 1] && arr[mid] > arr[mid - 1]){
                cout << mid;
                return 0;
            }
            mid = start + (end-start) /2;
        }
    }
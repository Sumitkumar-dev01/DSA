#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[] = {5,3,4,2,1};
    int n = 5; 
    for(int ele: arr){
        cout<<ele<<" ";
        cout<<endl;
    }   
     
    // now i have to preform selection sort 
    for(int i =0; i<n; i++){
        int min = INT_MAX; 
        int mindx = -1;
        // calculate minimum number from a given array
        for(int j= i;j<n;j++){
            if(arr[j]<min){
                min = arr[j];
                mindx = j;
            }
        }
        swap(arr[i],arr[mindx]);

    }
    for(int i = 0; i<n; i++){
        cout<<arr[i]<< " ";
    }

return 0;
}  


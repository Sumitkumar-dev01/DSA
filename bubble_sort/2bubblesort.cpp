#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[6] = {5,9,3,8,7,5};
    for(int i =0; i<=5; i++){
        cout<<arr[i];
    }
    for(int i =0; i<5; i++){// 1 passes 
        for(int j = 0; j<5;j++){
            if(arr[j]>arr[j+1]){
                // swap element 
                int temp = arr[j];
                arr[j] = arr[j+1];
                arr[j+1] = temp;
            }

        }     
    }
    cout<<endl;
    for(int i =0; i<=5; i++){
        cout<<arr[i];
    }

return 0;
}



/*
-> optimised bubble sort
 for(int i =0; i<=n-1; i++){
 bool flag = true; 
 for(int j=0; j<=n-1-i; j++){
 if(arr[j]>arr[j+1]){
 swap(arr[j],arr[j+1]);
 flag = false;
 }
 }
 if(flag == true){
 break; 
 }
 }
*/
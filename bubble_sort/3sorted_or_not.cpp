// my approach -> it's wrong
// #include<bits/stdc++.h>
// using namespace std;
// int main(){
//     int arr[5] = {1,2,3,4,5};
//     for(int i =0; i<=4; i++){
//         for (int j =0; j<= 4; j++){
//             if(arr[j]>arr[j+1]){
//                 cout<<"thds is sorted array";
//                 cout<<endl;
//             }
//             else{
//                 cout<<"this is not sorted array";
//             }
//         }
//     }


    

// return 0;
// }




#include<bits/stdc++.h>
using namespace std;
int main(){
    int arr[5] = {1,2,3,4,5};
    bool flag = true; 
    for(int i=0; i<=4; i++){
        if(arr[i]>arr[i+1]){
            flag = false; 
            break;
        }
    }
    if(flag == true){
        cout<<"this is sorted array";
    }
    else{
        cout<<"this is not sorted array";
    }

return 0;
}
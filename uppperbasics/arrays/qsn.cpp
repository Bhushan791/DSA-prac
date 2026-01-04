#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void sortOne(int arr[] , int n)  { 
    int left  = 0 ; int right =n-1 ;
    while(left<right && left<right ) { 
        while (arr[left] ==0)
        {
            left++;
        }
        while(arr[right] ==1 && left<right ) { 
            right--; 
        }
if(left<right ) { 
       swap(arr[left], arr[right]) ; 
        left++;
        right--;
}     
    }
}

void printarr(int arr[], int n )  { 
    for(int i=0; i<n; i++ ) { 

        cout<<arr[i] <<" " ; 
    }
}

int main() {
int arr[4] = {1,0,1,0};
int n = sizeof(arr)/sizeof(arr[0]) ; 


sortOne(arr, n);
printarr(arr, n);
return  0 ;  

}




//DO FOR NOW 0,1,2 samesort  3 pointer approach 
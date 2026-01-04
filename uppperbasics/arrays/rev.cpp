#include<iostream> 

using namespace std ; 


void printarr (int arr[], int size) { 


    for(int i=0; i<size; i++) {


        cout<< arr[i]<< " ";
    }
}


int main () {  


    int arr [5] =  {1,2,3,4,5}; 

    
    
    // start index > end index then terminante ; 
    
    
    int start  = 0 ; 
    int end =  4; 
    
    while (start<end) { 
        swap(arr[start], arr[end]) ;  
        start++;
        end--; 
    }
 


printarr(arr, 5) ; 

    return 0 ; 

}

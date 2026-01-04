#include <iostream> 

using namespace std;  

void printarr (int arr[], int size) { 
    for(int i=0; i<size; i++) {
        cout<< arr[i]<< " ";
    }
}
int main ()  { 
    int    arr [6]  =  {1,3,2,7,11,8} ; 
    //swap with alternate if odd then leave the last one if not the swap all
int arr_size =  sizeof(arr) / sizeof(arr[0]) ;  

    int loop_iterations = 0 ;  
    if ((sizeof(arr) )%2 == 0 ) {  
        loop_iterations= arr_size/2 ;
    }
    else { 
        loop_iterations =  (arr_size /2 )-1 ; 
    }
    int  j = 0 ; 
    for(int  i =0; i<loop_iterations; i++) { 
        swap(arr[j], arr[j+1]) ; 
        j+=2 ;
    }
    printarr(arr,arr_size) ; 
    return  0 ; 
}
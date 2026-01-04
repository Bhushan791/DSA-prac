#include <iostream> 
#include <vector>
using namespace std ; 




int binarySearch (int arr[], int size, int key) { 

int start  = 0 ; 
int end = size-1 ; 


int mid = (start+end)/2 ; 


while(start<=end) { 


    if(arr[mid] ==key) {
        return mid ; 
    }

//go to right
    if(key> arr[mid]) { 


        start = mid +1 ;
    }


//go to left
      else{ 


        end = mid -1 ;
    }


    mid = (start+end)/2 ;
}

return -1;


}
int main () { 
    int even [6]  = {2,4,6,8,12,18} ;
    int odd [5] = {3,5,7,9,13} ; 


int evenindex  =  binarySearch(even, 6, 100) ;
cout<<"The index  is: "<< evenindex<<endl;


int oddindex  =  binarySearch(odd, 5, 300) ;
cout<<"The index is: "<< oddindex;

    return 0 ;
}
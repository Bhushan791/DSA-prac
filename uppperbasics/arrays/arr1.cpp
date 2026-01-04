#include <iostream> 
using namespace std ; 
#include <climits> 


// void printArr(int arr[], int size) { 

//     for(int i=0; i<size; i ++) { 
        
//         cout<<arr[i] << " " ;  }



// }



int getmax(int num[] ,  int n) { 

    int max =  INT_MIN; 
    for(int i = 0 ; i<n; i++) { 

        if(num[i]>max) {
            max= num[i] ; 
        }
    }

    return max ; 
}




int getmin(int num[] ,  int n) { 

    int min =  INT_MAX; 
    for(int i = 0 ; i<n; i++) { 

        if(num[i]<min) {
            min= num[i] ; 
        }
    }

    return min ; 
}
int main() {
    
    
    // int number[5] = {1,2,3,4,5};
 
    // cout<< "Value at  0 index is : " <<number[0] <<endl; 
    // cout<< "Value at  1 index is : " <<number[3] ; 


    // printArr(number, 5);
    



   int num[100] ; 
   int size ; 
   cout<<"What is array size: " ; 
   cin>>size; 
    cout<<endl; 
   for(int i =0; i<size; i++)  { 
    
    cout<< "value of index " << i<<" :"  ; 
    cin>> num[i] ; 
   }

   
    cout<<"Min value: " << getmin(num, size) <<endl;
    cout<<"Max value: " << getmax(num,size);
    return 0 ; 
}








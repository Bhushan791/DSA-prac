#include <iostream> 
using namespace std ;
int main () { 
    int n ; 
    cout<<"Your N: "  ; 
    cin>>n; 
   int i=1;


   //1 2 3 
   //4 5 6
   //7 8 9
//    n=3 

int count =1;
   while(i<=n) { 

    int j =1 ; 
    while(j<=n)  { 
         cout<<count<<" " ;
         count+=1;
         j+=1; 

    }

    cout<<"\n"  ;
    i+=1;
   }

    

return 0 ; 

}
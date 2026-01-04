#include <iostream> 

using namespace std ; 

int factorial (int n ) { 
    int fact = 1 ; 

    for(int i= 1; i<=n; i++) { 

        fact*=i ; 
    }

    return fact ;


}


int nCr(int n, int r) { 

    int numerator  = factorial(n); 
    
    int denominator =  factorial(r) * factorial(n-r) ; 


    int ans  = numerator/denominator ; 

    return ans ; 


}

int main () { 

    int a ;
    int b; 

    cout <<"Enter First Number: " ; 
    cin>>a; 

    cout <<"Enter Second Number: " ; 
    cin>>b; 

   cout<< "Answer is: " << nCr(a,b) ; 

return 0 ; 


}




// #include <iostream> 
// using namespace std ;
// int main () { 
//     int n ; 
//     cout<<"Your N: "  ; 
//     cin>>n; 
//     for(int i =0;  i<n; i++) { 
//         for (int j =1; j<=n; j++ ) { 
//             cout<<j<<" " ;
//         }
//         cout<<"\n" ;
//     }

// return 0 ; 

// }


// #include <iostream> 
// using namespace std ;
// int main () { 
//     int n ; 
//     cout<<"Your N: "  ; 
//     cin>>n; 
//     for(int i =0;  i<n; i++) { 
//         for (int j =n; j>=1; j-- ) { 
//             cout<<j<<" " ;
//         }
//         cout<<"\n" ;
//     }

// return 0 ; 

// }






// #include <iostream> 
// using namespace std ;
// int main () { 
//     int n ; 
//     cout<<"Your N: "  ; 
//     cin>>n; 
//    int i=1;

//     while(i<=n) { 

//        int  j=1; 

//        while(j<=n) { 

//         cout<<j<<" ";
//         j+=1;
//     }
//     cout<<"\n";
//     i+=1;
//     }

// return 0 ; 

// }


#include <iostream> 
using namespace std ;
int main () { 
    int n ; 
    cout<<"Your N: "  ; 
    cin>>n; 
   int i=1;

    while(i<=n) { 

       int  j=1; 

       while(j<=n) { 

        cout<<(n-j)+1<<" ";
        j+=1;
    }
    cout<<"\n";
    i+=1;
    }

return 0 ; 

}
#include <iostream> 

using namespace std ; 


int main () { 



    char ch ='1'; 

    cout <<endl ;

    switch (ch)
    {
    case 1: cout<<"First" <<endl;
        break;
    case '1': cout<<"second" <<endl;
        break;
    
    default:
    cout<<"  It is default case";
        break;
    }
}
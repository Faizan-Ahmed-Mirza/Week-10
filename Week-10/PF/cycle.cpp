#include<iostream>
using namespace std ;

int array[100] ;
bool iscyclerepeating(int cyclelength , int size ){
    for(int i = 0 ; i < size-cyclelength ; i++){  
            if(array[i] != array[i + cyclelength]){
                return false ;
            }
        }

    return true ; }

main(){
    int size ;
    cout << "Enter length of array: " ;
    cin >> size ;

    for(int i = 0 ; i < size ; i++){
        cout << "Enter number: " ;
        cin >> array[i] ;
    }

    int cyclelength ;
    cout << "After how many numbers is the cycle repeating: " ;
    cin >> cyclelength ;

    bool result = iscyclerepeating(cyclelength , size) ;

    if(result == true){
        cout << "True" ;
    }
    else {
        cout << "False" ;
    }
    
}
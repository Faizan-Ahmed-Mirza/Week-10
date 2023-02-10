#include<iostream>
using namespace std ;

int chkneighbor(int housing0 , int housing1 , int housing2){
    int superneighbor ;
    if((housing1 > housing2) && (housing1 > housing0)){
            superneighbor = housing1 ;
        }
        else{
            superneighbor = 999 ;
    }
    return superneighbor ; }


main(){
    int size ; int count = 0 ;
    cout << "Enter size of array: " ;
    cin >> size ;
    int housing[size] ; int superneighbor[size] ;

    for(int i = 0 ; i < size ; i++){
        cout << "Enter number " << i+1 << " : " ;
        cin >> housing[i] ;
    }

    for(int i = 1 ; i < size-1 ; i++){
        superneighbor[i] = chkneighbor(housing[i-1] , housing[i] , housing[i+1]) ;
        
    }

    for(int i = 1 ; i < size-1 ; i++){
        if(superneighbor[i] != 999){
            cout << "  " << superneighbor[i] << " , " ;
            count = count + 1 ;
        }
    }

    if(count == 0){
        cout << "No peak found!" ;
    }
}

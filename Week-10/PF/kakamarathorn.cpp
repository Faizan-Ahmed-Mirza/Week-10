#include<iostream>
using namespace std ;

main(){
    int num , progressday = 0 ;
    cout << "Enter num of Saturdays he ran: " ;
    cin >> num ;
    int saturday[num] ;

    for(int i = 0 ; i < num ; i++){
        cout << "Enter miles he ran at Saturday " << i+1 << " : " ;
        cin >> saturday[i] ;
    }

    for(int i = 0 ; i < num-1 ; i++){
        if(saturday[i] < saturday[i+1]){
            progressday = progressday + 1 ;
        }
    }

    cout << "Progress days of KAKA are: " << progressday ; 
}
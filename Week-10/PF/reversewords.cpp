#include<iostream>
using namespace std ;

main(){
    int size ;
    cout << "Enter number of words in string: " ;
    cin >> size ; string sentence[size] ;

    cout << "Enter sentence(word by word): " ;

    for(int i = 0 ; i < size ; i++){
        cin >> sentence[i] ;
    }

    for (int i = size-1 ; i >= 0 ; i--){
        cout << sentence[i] << " " ;
    }


}
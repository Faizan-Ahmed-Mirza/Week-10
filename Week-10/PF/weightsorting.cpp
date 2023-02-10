#include<iostream>
using namespace std ;

main(){
    int size , x ;
    cout << "Enter Number of packages: " ;
    cin >> size ; 
    int weight[size] ;

    for(int i = 0 ; i < size ; i++){
        cout << "Enter package " << i+1 << " weight: " ;
        cin >> weight[i] ;
    }

    for(int i = 0 ; i < size ; i++){
        for(int k = 0 ; k < size ; k++){
            if(weight[i] < weight[k] && i > k){
                x = weight[k] ;
                weight[k] = weight[i] ;
                weight[i] = x ;
            }
        }
    }

    for(int i = 0 ; i < size ; i++){
        cout << "  " << weight[i] ;
    }

}
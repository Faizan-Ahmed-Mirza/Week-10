#include<iostream>
using namespace std ;

int volume(int i , int i1 , int i2){
    int boxvolume = (i*i1*i2) ;
    return boxvolume ;
}

main(){
    int boxes ; int sum = 0 ;
    cout << "Enter no of boxes: " ;
    cin >> boxes ; int dimensions[3*boxes] ;
    cout << "Enter Dimensions: " ;

    for(int i = 0 ; i < (3*boxes) ; i++){
        cout << "Dimension " << i+1 << ": " ;
        cin >> dimensions[i] ;
    }

    for(int i = 0 ; i < (3*boxes) ; i = i+3){
        sum = sum + volume(dimensions[i] , dimensions[i+1] , dimensions[i+2]) ;
    }

    cout << "Total volume of boxes is: " << sum ;

}
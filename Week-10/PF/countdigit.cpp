#include<iostream>
using namespace std ;

int countsameletter(char letter , string name){
    int count = 0 ;
        for(int k = 0 ; name[k] != '\0' ; k++){
            if(letter == name[k]){
                count = count + 1 ;
            }
        }
    return count ;

}

main(){
    int words , finalcount = 0 ; int count ;
    cout << "How many words do you want to enter: " ;
    cin >> words ;
    string name[words] ;

    for(int i = 0 ; i < words ;i++){
        cout << "Enter word " << i+1 << " :" ;
        cin >> name[i] ;
    }

    char letter ; 
    cout << "Enter letter you want to find: " ;
    cin >> letter ;

    for(int i = 0 ; i < words ; i++ ){
        count = countsameletter(letter , name[i]) ;
        finalcount = finalcount + count ;

    }
    
    cout << "Number of common letters are: " << finalcount ; 
}

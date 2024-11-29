#include<iostream>

using namespace std;

int main(){

    for(int i=6; i<=10; i++){

        for(int j=10; j>=i; j--){
            cout << " " ;
        }

        for(int k=6; k<=i; k++){
            cout << k ;
        }

      cout << " " << endl;

    }

    

}
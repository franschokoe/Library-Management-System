#include <iostream>
#include <array>
using namespace std;

int main (){
    // normal arrays
    int numberArray[5] = {1,2,3,4,5};
    int total= 0;
    for(int k = 0 ; k <5; k++ ){
        
        total += numberArray[k];

    }
    cout<<"The total is " << total << endl;
    
    cout<<"Complete iteration"<<endl;
}
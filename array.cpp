#include <iostream>
#include <vector>
#include <array>
using namespace std;

int main (){
    // normal arrays
    int numberArray[5] = {1,2,3,4,5};
    vector<int> vectorArray = {1,2,4};
    int total= 0;
    int total2 = 0;
    //  for loop for first array
    for(int k = 0 ; k <5; k++ ){
        
        total += numberArray[k];
        // when you want to see each step of iteration
        // cout<<"The total is " << total << endl;
    }
    cout<<"The total is " << total << endl;
    // cout << "Vecto array is flexible "<< vectorArray<<endl;

    // 2D arrays is like a matrix
    // arrayDim[number of rows][number of columns]
    int arrayDim[2][3] = {
        {1,2,3},
        {4,3,2}
    };

    // for loop for array 2d 
    for(int i=0 ; i<2;i++){
        for (int k = 0 ; k <3;k++){
            // outputing array
            int mapNumber = 104000;
            // just playing
            cout<<arrayDim[i][k] * mapNumber * total <<endl;
        }
    }


    cout<<"A new matrix complete"<<endl;

    cout<<"Complete iteration"<<endl;

    return 0;
}
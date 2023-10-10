// C++ Program to display all elements
// of an initialised two dimensional array

#include <iostream>
using namespace std;

int main() {
    //two pages 3 rows 3 colums
    int test[3][3][3] = {
            {
                {1,2,3},
                {4,5,6},
                {7,8,9}    
            },
            {
                {10,11,12},
                {13,14,15},
                {16,17,18}
            },
            {
                {19,20,21},
                {22,23,24},
                {25,26,27}
            }
    };
    // use of nested for loop
    // access rows of the array
    
    for(int p = 0 ;p<3;p++){
            cout<<"Page :- "<<p+1<<endl;
            for(int i=0;i<3;i++){
                    for(int j=0;j<3;j++){
                        
                            cout<<"  ["<<i<<"]"<<"["<<j<<"] = "<<test[p][i][j];
                            // cout<<test[p][i][j];
                          
                    }
                    cout<<endl;
            }
            cout<<endl;
        
    }
    

    return 0;
}
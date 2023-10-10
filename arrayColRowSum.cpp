#include<bits/stdc++.h>
using namespace std;

int main(){

        int arr[3][3]{{1,2,3},
                      {4,5,6},
                      {7,8,9}
                    };

       int ans[4][4] {0};

       // row sum
       for(int i{0};i<3;i++){
                int rowSum = 0;
                for(int j{0};j<3;j++){
                        ans[i][j] = arr[i][j];
                        rowSum+=arr[i][j]; 
                }
                ans[i][3]=rowSum;
       }             

       //colSum
       for(int j{0};j<3;j++){
            int colSum = 0;
            for(int i{0};i<3;i++){
                    colSum+= arr[i][j];
            }
            ans[3][j] = colSum;
       }

       for(int i{0};i<4;i++){
            for(int j{0};j<4;j++){

                    cout<<ans[i][j]<<" ";

            }
            cout<<endl;
       }

}
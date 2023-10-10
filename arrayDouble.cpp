#include<bits/stdc++.h>
using namespace std;


int main(){
     int arr[]{10,21,13,34,50,65,72};
     for(auto& num : arr){
            if(num % 2 ==0){
                    num *= 2;
            }  
     }
    for(const auto& num : arr){
            cout<<num<<" ";
    }
    
}




// test(char (&arr)[5][7])
// std:: pair <int,char> test(char (&arr)[5][6])
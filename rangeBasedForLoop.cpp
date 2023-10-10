#include<iostream>
using namespace std;
int main(){
    int arr[]{10,21,13,14,34,50,65,72};
    for(int &num : arr){
            if(num%2==0)
            num*=2;
    }
    //print array 
    for(int &num:arr){
        cout<<num<<" ";
    }
}
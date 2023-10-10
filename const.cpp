#include<bits/stdc++.h>
using namespace std;
int main(){

        int i =  10;
        int j = 20;

        const int * cp1 = &i;
        int * cp2 = &j;

        *cp2 -=10;
        if(*cp1==*cp2){
                cp1=cp2;
                cout << "t" << endl;
        }
        
}
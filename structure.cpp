#include<bits/stdc++.h>
using namespace std;
struct Student
{
        int id;
        string name;
};

int main(){

    Student * studentArray[10];

    for(int i{0};i<10;i++){
            studentArray[i] = new Student{};
            studentArray[i]->id = i+1;
            studentArray[i]->name = "Student "+to_string(i+1);
    }

    for(int i{0};i<10;i++){
            cout<<studentArray[i]->id<<endl;
            cout<<studentArray[i]->name<<endl;
    }

    for(int i{0};i<10;i++){

        delete(studentArray[i]);
        studentArray[i]=nullptr;
        
    }
    cout<<"Freed memoryy!!";

}
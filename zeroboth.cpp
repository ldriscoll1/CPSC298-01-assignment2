#include <iostream>
using namespace std;
//Sets both input1 and input 2 to 0
//Both are pass by reference
void zeroBoth(int& input1, int& input2){
    input1=0;
    input2=0;
}
//Testing zeroBoth Method
int main(){
    int int1;
    int int2;
    //Gets user input
    cout<<"Please enter an integer."<<endl;
    cin>>int1;
    cout<<"Please enter another integer."<<endl;
    cin>>int2;
    //Zeros out both the inputs
    zeroBoth(int1,int2);
    //Prints the results
    cout<<"The new integers are "<<int1<<", and "<<int2<<"."<<endl;

    return 0;
}
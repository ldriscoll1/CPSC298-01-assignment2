#include <iostream>
using namespace std;

int main(){
    //The array the holds a max of 10 integers
    int numberArray[10];
    int inputNum=0;
    //Counter to find the amount of integers inputted
    int i=0;
    //The loops runs until the array is full or the break value of -1 is entered
    while(inputNum!=-1&&i!=10){
        cout<<"Please input a non-negative integer enter -1 to stop"<<endl;
        cin>>inputNum;
        if(inputNum>=0){
            numberArray[i]=inputNum;
            ++i;
        }else if(inputNum==-1){
            break;
        }
        else{
            cout<<"Incorrect input please input a non-negative number"<<endl;
        }
    }
    //Prints out the array
    cout<<"Printing out the Array:"<<endl;
    for(int j = 0; j < i; ++j){
        cout<<numberArray[j]<<endl;
    }
    
    return 0;
}
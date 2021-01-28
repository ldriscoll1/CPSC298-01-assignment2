#include <iostream>
using namespace std;
//Gets the user input for both feet and inches
//Uses pass by reference to set feet and inches to the user input
void inputFeetInch(float& feet,float& inches){
    cout<<"Please enter the length in feet."<<endl;
    cin>>feet;
    cout<<"Please enter the rest of the length inches."<<endl;
    cin>>inches;
}
//Converts the feet and inches to meters and centimeters
//Uses pass by reference to set the meters and centimeters
void feetToMeters(float feet,float inches,float& meters,float& centimeters){
    //Converting the inches to feet
    feet += inches/12;
    //Converting the feet to meters
    meters = feet*0.3048;
    //Converts the meters to centimeters
    centimeters=meters*100;
}
//Outputs the meters and centimeters
void output(float meters,float centimeters){
    cout<<"The length is "<<meters<<" meters and "<<centimeters<<" centimeters."<<endl;
}
int main(){
    string input="";
    //Runs until the User inputs quit 
    while(input!="quit"){
        float feet;
        float inches;
        float meters;
        float centimeters;
        //Gets user input
        inputFeetInch(feet,inches);
        //Converts the feet and inches to meters and centimeters
        feetToMeters(feet,inches,meters,centimeters);
        //Outputs the results to the console
        output(meters,centimeters);
        //Checks if the user wants to continue
        cout<<"Type anything to continue or type \"quit\" to quit"<<endl;
        cin>>input;
    }
    return 0;
}
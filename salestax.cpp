#include <iostream>
#include <iomanip>
using namespace std;
//The total price is the percent*cost+cost
float addTax(float taxRate, float cost){
    float tax = cost*(taxRate/100);
    return cost+tax;
}
//Tests out the addTax method
int main(){
    float taxRate;
    float cost;
    float totalCost;
    //Gets user input
    cout<<"Please enter the cost of the item."<<endl;
    cin>>cost;
    cout<<"Please enter the percent of tax(0.0-100.0)."<<endl;
    cin>>taxRate;
    //Calculates the total cost of the item
    totalCost = addTax(taxRate,cost);
    //Prints out the total cost
    
    cout<<"The total cost of the item is $"<< fixed <<setprecision(2)<<totalCost<<endl;

    return 0;
}
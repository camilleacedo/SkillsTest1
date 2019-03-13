#include <iostream>
#include <conio.h>
#include <iomanip>

using namespace std;

int main(){
    double payrate, grossincome, netincome, school, bonds, clothes, parentsbonds, hoursworked;
    
    const double tax = 0.14;
    const double clothes = 0.10;
    const double schoolsupplies = 0.01;
    const double savingsbonds = 0.25;
    const double addl = 0.50;
    
    cout << "How many hours did you work: "<< endl;
    cin >> hoursworked;
    
    cout << "What was the hourly rate: $" << endl;
    cin >> payrate;
    
    grossincome = hoursworked * payrate;
    netincome = grossincome * tax;
    clothes = netincome * clothes;
    school = netincome * schoolsupplies;
    netincome = netincome - (clothes + school); 
    bonds = netincome * savingsbonds;
    parentsbonds = bonds * addl;
    
    cout << fixed << showpoint << setprecision(2);

	
  
    cout << "Gross Income: $" << grossincome << endl;
    cout << "Net Income: $" << netincome << endl;
    cout << "Clothes & Accessories: $" << clothes << endl;
    cout << "School Supplies: $" << school << endl;
    cout << "Savings Bonds: $" << bonds << endl;
    cout << "Additional Savings Bonds: $" << parentsbonds << endl;
    
    -getch();
    return 0;
}
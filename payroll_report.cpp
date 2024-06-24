#include <iostream>

using namespace std;

int main()
{
    int emp_num;
    double gross, state, federal, fica, net;

    do {
    cout << "Employee Number: ";
    cin >> emp_num;


    cout << "Gross Pay: ";
    cin >> gross;
    
    
    
    cout << "State Tax: ";
    cin >> state;
    
    
    
    cout << "Federal Tax: ";
    cin >> federal;
    
    
    
    cout << "FICA withholdings: ";
    cin >> fica;

    if (emp_num < 0 || gross < 0)
    {
        cout << "Negative values are invalid, please enter positive value";
        cin >> gross;
    }

    } while (emp_num != 0);





    cout << "\n";
    cout << "Employee Totals\n";
    cout << "---------------\n";
    cout << "Gross Pay: " << gross << "\t" << "State Tax: " << state << "\t" << "Federal Tax: " << federal << "\t" << "FICA withholdings: " << fica << "Net Pay: " << net;

    return 0;
}
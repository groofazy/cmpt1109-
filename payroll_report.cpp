#include <iostream>

using namespace std;

int main()
{
    int emp_num;
    double gross, state, federal, fica;

        cout << "Employee Number";
        cin >> emp_num;
        cout << "Gross Pay";
        cin >> gross;
        cout << "State Tax";
        cin >> state;
        cout << "Federal Tax";
        cin >> federal;
        cout << "FICA withholdings:";
        cin >> fica;


    if (state + federal + fica > gross)
    {
        cout << "Taxes and FICA are higher than Gross Pay, please re-enter the employee data";
    }

    cout << "Employee Totals\n";
    cout << "---------------";
    cout << "Gross Pay: " << gross << "\t" << "State Tax: " << state << "\t" << "Federal Tax" << "\t" << "FICA withholdings" << fica;

    


    return 0;
}
#include <iostream>

using namespace std;
int main()
{
    int emp_num, employee_count, divisor = 100;
    double gross, gross_total, state, state_total, federal, federal_total, fica, fica_total, net, net_total, tax_fica_sum;

    cout << "Employee Number: ";
    cin >> emp_num;

    while (emp_num != 0)
    {  
        employee_count++;
        cout << "Gross Pay: ";
        cin >> gross;
        while (gross < 0)
        {
            cout << "Invalid Gross Amount, please try again: ";
            cin >> gross;
        }
        gross_total += gross;

        cout << "State Tax: ";
        cin >> state;
        while (state < 0 || state > gross)
        {
            cout << "Invalid State Tax Amount, please try again: ";
            cin >> state;
        }

        cout << "Federal Tax: ";
        cin >> federal;
        while (federal < 0)
        {
            cout << "Invalid Federal Amount, please try again: ";
            cin >> federal;
        }

        cout << "FICA withholdings: ";
        cin >> fica;
        while (fica < 0)
        {
            cout << "Invalid FICA Withholdings, please try again: ";
            cin >> fica;
    }

    // validation loop for taxes + fica to be less than employee gross pay 
    tax_fica_sum = state + federal + fica;
    while (tax_fica_sum > gross)
    {
        cout << gross << " " << tax_fica_sum << " " << state << " " << federal << " " << fica;
        cout << "Please re-enter the data for State, Federal, and FICA\n";
        cout << "State: ";
        cin >> state;
        cout << "Federal";
        cin >> federal;
        cout << "FICA";
        cin >> fica;

        tax_fica_sum = state + federal + fica; // refreshes value and is checked by condition above
    }

    // counters for taxes and FICA    
    state_total += state;
    federal_total += federal;
    fica_total += fica;

    // employee input 
    cout << "Employee Number: ";
    cin >> emp_num;
    }
    
    state_total = state_total / 100;
    federal_total = federal_total / 100;
    fica_total = fica_total / 100;

    net_total = gross_total - (gross_total * ((state_total + federal_total + fica_total) * employee_count));

    cout << "\n";
    cout << "Employee Totals\n";
    cout << "---------------\n";

    cout << "Gross Pay: $" << gross_total << " | " << "State Tax: " << state_total << "% | " << "Federal Tax: " << federal_total << "% | " << "FICA withholdings: $" << fica_total << " | " << "Net Pay: $" << net_total;

    return 0;
}
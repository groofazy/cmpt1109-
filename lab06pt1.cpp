#include <iostream>

using namespace std;

int main()
{
    
    int amt_num;
    int count;
    double sum = 0;
    double real_num;

    do {
        cout << "Enter the number of numbers: " << endl;
        cin >> amt_num;
    } while (amt_num <= 0);
        

    for (count = 0; count < amt_num; count++)
    {

        do {
            cout << "Enter a real number: " << endl;
            cin >> real_num;
        } while (real_num <= 0);

        sum += real_num;
    }

    double avg = sum / amt_num;

    cout << "Sum of numbers you entered is " << sum << endl;
    cout << "The average of numbers you entered is " << avg << endl;
   
    return 0;
}

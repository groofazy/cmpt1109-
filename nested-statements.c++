#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int choice;
    int months;
    double charges;

    const double ADULT = 40.0, SENIOR = 30.0, CHILD = 20.0;

    const int ADULT_CHOICE = 1, CHILD_CHOICE = 2, SENIOR_CHOICE = 3, QUIT_CHOICE = 4;

    cout << "\t\tHealth Club Membership Menu\n\n"
        << "1. Standard Adult Membership\n"
        << "2. Child Membership\n"
        << "3. Senior Citizen Membership\n"
        << "4. Quit the Program\n\n"
        << "Enter your choice: ";
    cin >> choice;

    cout << fixed << showpoint << setprecision(2);

    if (choice == ADULT_CHOICE)
    {
        cout << "For how many months? ";
        cin >> months;
        charges = months * ADULT;
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == CHILD_CHOICE)
    {
        cout << "For how many months? ";
        cin >> months;
        charges = months * CHILD_CHOICE; 
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == SENIOR_CHOICE)
    {
        cout << "For how many months? ";
        cin >> months;
        charges = months * SENIOR_CHOICE;
        cout << "The total charges are $" << charges << endl;
    }
    else if (choice == QUIT_CHOICE)
    {
        cout << "Program ending.\n";
    }
    else
    {
        cout << "The valid choice are 1 through 4. Run the\n"
            << "program again and select one of those.\n";         
    }
    return 0;
}
// Sales prediction

#include <iostream>

using namespace std;

int main()
{
   int month, day, year;
   int month_plus_day = month + day;


   cout << "Enter a month in numeric form: " << endl;
   cin >> month;
   
   if (0 >= month || month > 12)
   {
    cout << "Month invalid" << endl;
   }
   else
   {
    cout << "Enter a day: " << endl;
    cin >> day;
    
    if (0 >= day || day >= 31)
    {
        cout << "Invalid day" << endl;
    }
    else
    {
        cout << "Enter a two digit year: " << endl;
        cin >> year;

        if (year > 100)
        {
            cout << "Invalid year" << endl;
        }
        else
        {
            if (month_plus_day == year)
            {
                cout << "The date of " << month << "/" << day << "/" << year << " is magic!" << endl;
            }
            else
            {
                cout << "The date of " << month << "/" << day << "/" << year << " is not magic!" << endl;
            }
        }
    }
   }

    return 0;
}
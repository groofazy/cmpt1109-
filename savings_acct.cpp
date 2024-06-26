#include <iostream>
#include <iomanip>

//savings account

using namespace std;
int main()
{
	double deposit, withdrawn, monthly_interest, annual_interest, balance, monthly_rate;
	double totalDeposits = 0, totalWithdrawals = 0, totalInterest = 0;
	int months;
	int divisor = 12;

	cout << "Annual Interest Rate: ";
	cin >> annual_interest;

	cout << "Starting Balance: ";
	cin >> balance;

	cout << "Number of months since account was established: ";
	cin >> months;

	for (int count = 1; count <=months; count++)
	{
		cout << endl;
		cout << "Month " << count << endl;
		cout << "Amount deposited into account: ";
		cin >> deposit;

		while (deposit < 0)
		{
			cout << "Amount cannot be a negative value, please re-enter: ";
			cin >> deposit;
		}

		cout << "Amount withdrawn from account: ";
		cin >> withdrawn;

		while (withdrawn < 0)
		{
			cout << "Withdrawn amount can't be negative, please re-enter value: ";
			cin >> withdrawn;
		}

		monthly_rate = annual_interest / divisor;
		balance += deposit;
		totalDeposits += deposit;
		balance -= withdrawn;
		totalWithdrawals += withdrawn;

		monthly_interest = balance * monthly_rate;
		totalInterest += monthly_interest;

		balance += monthly_interest;

	}
	cout << endl;
	cout << "Ending Balance: \t   $" << setw(10) << balance << endl;
	cout << "Amount of deposits: \t   $" << setw(10) << totalDeposits << endl;
	cout << "Amount of withdrawals: \t   $" << setw(10) << totalWithdrawals << endl;
	cout << "Amount of interest earned: $" << setw(10) << totalInterest << endl;
	
	return 0;
}
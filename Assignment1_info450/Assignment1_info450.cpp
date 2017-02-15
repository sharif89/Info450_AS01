#include "stdafx.h"
#include <iostream>
#include <ctype.h>
#include <iomanip>

using namespace std;


int main()


{
	double checkBalance(double curBalance);
	{
		double beginningBalance=0;
		double endingBalance=0;
		double Deposit=0;
		double Withdrawal=0;
		double Checks=0;
		double totalDeposit=0;
		double totalWithdrawal=0;
		double totalChecks=0;
		double curBalance = 0;
		int Amount = 0;
		char answer = ('D', 'W', 'C', 'Q');
		bool notDone = true;

		
		cout << "Welcome to Banking Program, Please Enter Your Balance:" << endl;
		cin >> curBalance;
		beginningBalance = curBalance;
		
		
		while (notDone) {

			cout << "Enter D for Deposit, W for Withdrawal, C for Checks, or Q for Quit" << endl;
			cin >> answer;

			switch (toupper(answer))
			{
			case 'D':
				

				cout << "How much do you want to deposit? " << endl;

				cin >> Deposit;

				curBalance += Deposit;

				totalDeposit += Deposit;

			

				cout << "Your Deposit is: " << fixed << setprecision(2) << Deposit << "\n" << endl;

				break;


			case 'W':

				cout << "How much do you want to withdraw? " << endl;

				cin >> Withdrawal;

				curBalance -= Withdrawal;

				totalWithdrawal += Withdrawal;

				cout << "Your Withdrawal is: " << fixed << setprecision(2) << Withdrawal << "\n" << endl;

				break;


			case 'C':
				
				cout << "Enter Amount of Check: " << endl;

				cin >> Checks;

				curBalance -= Checks;

				cout << "Your Check is for: " << fixed << setprecision(2) << Checks << "\n" << endl;

				totalChecks += Checks;
				break;

			case 'Q':

				endingBalance = beginningBalance + totalDeposit - totalWithdrawal - totalChecks;

				cout << "Transaction Summary:" << endl;
				cout << "------------------------------" << "\n" << endl;
				cout << "Beginning Balance:  " << fixed << setprecision(2) << "$" << beginningBalance << "\n" << endl;
				cout << "Ending Balance:  " << fixed << setprecision(2) << "$" << endingBalance << "\n" << endl;
				cout << "------------------------------" << "\n" << endl;
				cout << "Total Deposits:  " << fixed << setprecision(2) << "$" << totalDeposit << "\n"<< endl;
				cout << "Total Withdrawals:  " << fixed << setprecision(2) << "$" << totalWithdrawal << "\n" << endl;
				cout << "Total Checks:  " << fixed << setprecision(2) << "$"<< totalChecks << "\n" << endl;
				
				
				
				exit(0);
				break;

			default:

				cout << "Not Valid input, try again.";

				break;









			}
		}
	}
}
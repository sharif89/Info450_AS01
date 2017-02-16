#include "stdafx.h"
#include <iostream>
#include <ctype.h>
#include <iomanip>

using namespace std;


int main()


{
	void BankingProgram();
	{
		double beginningBalance = 0;
		double value = 0;
		double totalDeposit = 0;
		double totalWithdrawal = 0;
		double totalChecks = 0;
		double curBalance = 0;
		double DArray[50];
		double WArray[50];
		double CArray[50];
		int numD = 0;
		int numW = 0;
		int numC = 0;
		int i = 0;
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

				cin >> value;
				
				curBalance = curBalance + value;

				totalDeposit += value;

				DArray[numD] = value;

				numD++;



				cout << "Your Deposit is: " << fixed << setprecision(2) <<'$' << value << "\n" << endl;

				break;


			case 'W':

				cout << "How much do you want to withdraw? " << endl;

				cin >> value;

				curBalance = curBalance - value;
				
				totalWithdrawal += value;

				WArray[numW] = value;

				numW++;

				cout << "Your Withdrawal is: " << fixed << setprecision(2) << '$' << value << "\n" << endl;

				break;


			case 'C':

				cout << "Enter Amount of Check: " << endl;

				cin >> value;

				curBalance = curBalance - value;

				totalChecks += value;

				CArray[numC] = value;
				
				numC++;

				cout << "Your Check is for: " << fixed << setprecision(2) << '$' << value << "\n" << endl;

				
				break;

			case 'Q':
				
				cout << "Transaction Summary:" << "\n"<< endl << endl;
				cout << "Beginning Balance: " << fixed << setprecision(2) << '$' << beginningBalance << endl << endl;
				cout << "Deposits:" << endl;
				for (i = 0; i < numD; i++)
				{
					cout << setw(27) << right<< fixed << setprecision(2) <<'$'<< DArray[i] << endl;
				}
				cout << "---------------" << endl << endl;
				cout << "Total Deposit:" << setw(13) << right << fixed << setprecision(2) << '$' << totalDeposit << "\n"<< endl;
				


				cout << "Withdrawals:" << endl;
				for (i = 0; i < numW; i++)
				{
				cout << setw(27) << right << fixed << setprecision(2) << '$'<< WArray[i] << endl;
				}
				cout << "---------------" << endl << endl;
				cout << "Total Withdrawal:" << setw(10) << right << fixed << setprecision(2) << '$' << totalWithdrawal << "\n" << endl;
				
				
				
				cout << "Checks:" << endl;
				for (i = 0; i < numC; i++)
				{
					cout << setw(27) << right << fixed << setprecision(2) << '$'<< CArray[i] << endl;
				}
				cout << "---------------" << endl << endl;
				cout << "Total Checks:" <<setw(14) << right<< fixed << setprecision(2) << '$' << totalChecks << "\n" << endl << endl;
				
				
				cout << "---------------" << endl << endl;
				cout << "Ending Balance:" << setw(12) << right << fixed << setprecision(2) << '$' << curBalance << endl << endl;
				
				
				exit(0);
				break;

			default:

				cout << "Not Valid input, try again.";

				break;

			}
		}


		
	
}
}
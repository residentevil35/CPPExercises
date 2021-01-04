/********************************************************************************
 * Rachel Coughanour                                                             *
 * Starting Out with C++ From Control Structures Through Objects 8th Edition     *
 * Programming Challenges - Chapter 4                                            *
 * 17) Personal Best - Pg. 223                                                   *
 * Description: Write a program that asks for the name of a pole vaulter and the *
 * dates and vault heights (in meters) of the athlete's three best vaults. It    *
 * should then report, in order of heigh (best first), the date on which each    *
 * vault was made and its height. Input validation: only accept values between   *
 * 2.0 and 5.0 for the heights.                                                  *
 ********************************************************************************/

#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()
{
	string name;
	string date1;
	string date2;
	string date3;
	float height1;
	float height2;
	float height3;
	float vaultMin = 2.0;
	float vaultMax = 5.0;

	cout << "Enter the name of the pole vaulter: ";
	getline(cin, name);

	cout << "Enter the first date: ";
	cin >> date1;

	cout << "Enter the height for date 1 in meters: ";
	cin >> height1;

	cout << "Enter the second date: ";
	cin >> date2;

	cout << "Enter the height for date 2 in meters: ";
	cin >> height2;

	cout << "Enter the third date: ";
	cin >> date3;

	cout << "Enter the height for date 3 in meters: ";
	cin >> height3;

	cout << fixed << setprecision(2);
	cout << endl << endl;

	cout << "Vaulter: " << name << endl;
	cout << "-------------------------" << endl;

	//input validation 
	if ((height1 < vaultMin || height1 > vaultMax)
		|| (height2 < vaultMin || height2 > vaultMax)
		|| (height3 < vaultMin || height3 > vaultMax))
	{
		cout << "The heights must be less than" << vaultMin
			<< " and greater than " << vaultMax << endl;
	}

	else
	{
		if (height1 > height2)
		{
			if (height1 > height3)
			{
				cout << "1st: " << height1 << " Date: " << date1 << endl;

				if (height2 > height3)
				{
					cout << "2nd: " << height2 << " Date: " << date2 << endl;
					cout << "3rd: " << height3 << " Date: " << date3 << endl;
				}

				else //if 3 > 2 
				{
					cout << "2nd: " << height3 << " Date: " << date3 << endl;
					cout << "3rd: " << height2 << " Date: " << date2 << endl;
				}
		     }
	     }

		if (height2 > height1)
		{
			if (height2 > height3)
			{
				cout << "1st: " << height2 << " Date: " << date2 << endl;

				if (height1 > height3)
				{
					cout << "2nd: " << height1 << " Date: " << date1 << endl;
					cout << "3rd: " << height3 << " Date: " << date3 << endl;
				}

				else //if 3 > 1
				{
					cout << "2nd: " << height3 << " Date: " << date3 << endl;
					cout << "3rd: " << height1 << " Date: " << date1 << endl;
				}
			}
		}

		if (height3 > height1)
		{
			if (height3 > height2)
			{
				cout << "1st: " << height3 << " Date: " << date3 << endl;

				if (height2 > height1)
				{
					cout << "2nd: " << height2 << " Date: " << date2 << endl;
					cout << "3rd: " << height1 << " Date: " << date1 << endl;
				}

				else // 1 > 2
				{
					cout << "2nd: " << height1 << " Date: " << date1 << endl;
					cout << "3rd: " << height2 << " Date: " << date2 << endl;
				}
			}
		}
	}
	return 0;
}
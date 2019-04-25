#include <iostream>
#include <iomanip>
#include <string>

using namespace std;

int main()

{

int month, day, year;

cout << "Enter Month (1-12): "; cin >> month;
cout << "Enter Day (1-31): "; cin >> day;
cout << "Enter Year: "; cin >> year;

switch (month)
{
	case 1:
		if (day >=1 && day <= 31)
		cout << "January " << day << ", " << year;
		else
		cout << "Invalid date!";
		break;
	case 2:
		if (day >=1 && day <= 28)
		cout << "February " << day << ", " << year;
		else
		cout << "Invalid date!";
		break;
	case 3:
		if (day >=1 && day <= 31)
		cout << "March " << day << ", " << year;
		else
		cout << "Invalid date!";
		break;
	case 4:
		if (day >=1 && day <= 30)
		cout << "April " << day << ", " << year;
		else
		cout << "Invalid date!";
		break;
	case 5:
		if (day >=1 && day <= 31)
		cout << "May " << day << ", " << year;
		else
		cout << "Invalid date!";
		break;
	case 6:
		if (day >=1 && day <= 30)
		cout << "June " << day << ", " << year;
		else
		cout << "Invalid date!";
		break;
	case 7:
		if (day >=1 && day <= 31)
		cout << "July " << day << ", " << year;
		else
		cout << "Invalid date!";
		break;
	case 8:
		if (day >=1 && day <= 31)
		cout << "August " << day << ", " << year;
		else
		cout << "Invalid date!";
		break;
	case 9:
		if (day >=1 && day <= 30)
		cout << "September " << day << ", " << year;
		else
		cout << "Invalid date!";
		break;
	case 10:
		if (day >=1 && day <= 31)
		cout << "October " << day << ", " << year;
		else
		cout << "Invalid date!";
		break;
	case 11:
		if (day >=1 && day <=30)
		cout << "November " << day << ", " << year;
		else
		cout << "Invalid date!";
		break;
	case 12:
		if (day >=1 && day <= 31)
		cout << "December " << day << ", " << year;
		else
		cout << "Invalid date!";
		break;
	default:
		cout << "Invalid date!";
}

return 0;

}

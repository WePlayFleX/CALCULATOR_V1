#include <iostream>

using namespace std;

int main()
{
	double n1, n2, ans;
	char oper, ch;

	do
	{
		cout << "\nEnter first operand, operation, second operand: ";
		cin >> n1 >> oper >> n2;

		switch (oper)
		{
		case '+':
			ans = n1 + n2;
			break;
		case '-':
			ans = n1 - n2;
			break;
		case '*':
			ans = n1 * n2;
			break;
		case '/':
			ans = n1 / n2;
			break;
		default:
			ans = 0;
		}

		cout << "Result = " << ans;
		cout << "\nContinue (Enter 'y' or 'n')?";
		cin >> ch;

	} while (ch != 'n');

	system("pause");
	return 0;
}
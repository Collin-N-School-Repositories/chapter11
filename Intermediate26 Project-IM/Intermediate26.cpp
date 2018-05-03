//Intermediate26.cpp - increases the prices stored in
//an array and then displays the increased prices
//Created/revised by <your name> on <current date>

#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
	cout << fixed << setprecision(2);

	//declare array
	double prices[10] = {10.5, 25.5, 9.75, 6.0, 35.0, 100.4, 10.65, .56, 14.75, 4.78};
	//declare variable
	double increase = 0.0;
	double increase2 = 0.0;
	
	//update prices
	cout << "Enter increase percentage (for example, enter 15 for 15%): ";
	cin >> increase;
	for (int i = 0; i < 9; i++){
		increase2 = increase;
		increase2 = (increase2 / 100) * prices[i];
		prices[i] += increase2;

	}
	cout << "these are the prices after increases >>" << endl;
	for (int i = 0; i < 9; i++){
		
		cout << prices[i] << endl;
		
	}
	//end for

	//display contents of array
	
	//end for

	system("pause");
	return 0;
}	//end of main function
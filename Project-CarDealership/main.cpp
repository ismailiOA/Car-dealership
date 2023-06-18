#include <iostream>
#include <string>
using namespace std;

int main()
{

	// set username and password
	string userName = "ismail";
	string password = "password";

	// Variable for authentication
	string inputUsername;
	string inputPassword;
	int attempts = 0;

	// Authentication the user
	while (attempts < 3) {
		cout << "Enter username: ";
		getline(cin, inputUsername);
		cout << "Enter password: ";
		getline(cin, inputPassword);

		if (inputUsername == userName && inputPassword == password) {
			cout << "Authentication successful!" << endl;
			break;
		}
		else {
			cout << "Invalid username or password. Please try again." << endl;
			attempts++;
		}
	}

	if (attempts >= 3) {
		cout << "Authentication failed. Exiting program." << endl;
		return 0;
	}

	// store car dealership data
	string carModels[] = { "Model A", "Model B", "Model C" };
	int carYears[] = { 2020, 2010, 2006 };
	double carPrices[] = { 60000, 45000, 25000 };

	// Query car information
	cout << "Enter car model: ";
	string queryModel;
	getline(cin, queryModel);

	// find the car in the dealership
	bool carFound = false;
	int carIndex = 0;

	while (carIndex < 3) {
		if (carModels[carIndex] == queryModel) {
			carFound = true;
			break;
		}
		carIndex++;
	}

	if (!carFound) {
		cout << "Car not found" << endl;
	}

	// Display car information
	cout << "Car:" << carModels[carIndex] << endl;
	cout << "Year:" << carYears[carIndex] << endl;
	cout << "Prices:" << carPrices[carIndex] << endl;

	// calculate total
	cout << "Enter the number of cars to purchase:";
	int numPurchase;
	cin >> numPurchase;
	double totalPrice = carPrices[carIndex] * numPurchase;

	// Display total price
	cout << "Total Price:$" << totalPrice << endl;

	// Trick monthly car sales
	int monthlySales;
	cout << "Enter the total number of cars sold this month:";
	cin >> monthlySales;
	cout << "Total number of cars sold this month:" << monthlySales << endl;

	return 0;
}
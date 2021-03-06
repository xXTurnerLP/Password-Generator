#include <iostream>
#include <string>
#include <cstdlib>
#include <ctime>
#include <fstream>
using namespace std;

// My includes (custom functions/classes):
#include "str_toLower.h"

int main() {
	cout << "########################################################################################" << endl;
	cout << "#   _____                _____    _____  __          __   ____    _____    _____       #" << endl;
	cout << "#  |  __ \\      /\\      / ____|  / ____| \\ \\        / /  / __ \\  |  __ \\  |  __ \\      #" << endl;
	cout << "#  | |__) |    /  \\    | (___   | (___    \\ \\  /\\  / /  | |  | | | |__) | | |  | |     #" << endl;
	cout << "#  |  ___/    / /\\ \\    \\___ \\   \\___ \\    \\ \\/  \\/ /   | |  | | |  _  /  | |  | |     #" << endl;
	cout << "#  | |       / ____ \\   ____) |  ____) |    \\  /\\  /    | |__| | | | \\ \\  | |__| |     #" << endl;
	cout << "#  |_|      /_/    \\_\\ |_____/  |_____/      \\/  \\/      \\____/  |_|  \\_\\ |_____/      #" << endl;
	cout << "#                                                                                      #" << endl;
	cout << "#    _____   ______   _   _   ______   _____             _______    ____    _____      #" << endl;
	cout << "#   / ____| |  ____| | \\ | | |  ____| |  __ \\      /\\   |__   __|  / __ \\  |  __ \\     #" << endl;
	cout << "#  | |  __  | |__    |  \\| | | |__    | |__) |    /  \\     | |    | |  | | | |__) |    #" << endl;
	cout << "#  | | |_ | |  __|   | . ` | |  __|   |  _  /    / /\\ \\    | |    | |  | | |  _  /     #" << endl;
	cout << "#  | |__| | | |____  | |\\  | | |____  | | \\ \\   / ____ \\   | |    | |__| | | | \\ \\     #" << endl;
	cout << "#   \\_____| |______| |_| \\_| |______| |_|  \\_\\ /_/    \\_\\  |_|     \\____/  |_|  \\_\\    #" << endl;
	cout << "#                                                                                      #" << endl;
	cout << "#  VERSION: 2.0                                                        MADE BY TURNER  #" << endl;
	cout << "########################################################################################\n" << endl;

	int strength;
	cout << "What your password strength should be [4, 3, 2, 1]: ";
	cin >> strength;
	cout << endl;

	if (strength == 1) { // Difficulty: 1 ########################################################
		srand(time(nullptr));
		int passArraySize = rand() % 10;
		if (passArraySize < 4) passArraySize = 4;

		char password[10] = {};

		srand(time(nullptr));
		char randomCharacter;
		for (int i = 0; i < passArraySize; i++) {
			randomCharacter = 48 + (rand() % 10); // 48 is offset from the ascii table ex. 48 + 0 == '0', 48 + 6 == '6'
			password[i] = randomCharacter;
		}
		password[passArraySize] = '\0';

		cout << "Your password is: " << password << endl;
		string descriptionOfPassword;
		cout << "Give your password a description: ";

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(cin, descriptionOfPassword, '\n');

		ofstream savePass;
		savePass.open("generated_passwords.txt", fstream::app);
		savePass << "Password: " << password << endl;
		savePass << "Description: " << descriptionOfPassword << endl << endl;
		savePass.close();

		cout << "Your password has been saved in a file \"generated_passwords.txt\" where this program is located at." << endl;
		cout << endl;
	} else if (strength == 2) { // Difficulty: 2 ########################################################
		const char* charSet = "abcdefghijklmnopqrstuvwxyz"; // ABCDEFGHIJKLMNOPQRSTUVWXYZ
		srand(time(nullptr));
		int passArraySize = rand() % 15;
		if (passArraySize < 8) passArraySize = 8;

		char password[15] = {};

		char randomCharacter;
		for (int i = 0; i < passArraySize; i++) {
			srand(time(nullptr) + i); // Seeds it with the current time + iteration of i because its really fast and will be something like xxxxxxxx or aaaaaaaa
			randomCharacter = charSet[rand() % 27];
			password[i] = randomCharacter;
		}
		password[passArraySize] = '\0';

		cout << "Your password is: " << password << endl;
		string descriptionOfPassword;
		cout << "Give your password a description: ";

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(cin, descriptionOfPassword, '\n');

		ofstream savePass;
		savePass.open("generated_passwords.txt", fstream::app);
		savePass << "Password: " << password << endl;
		savePass << "Description: " << descriptionOfPassword << endl << endl;
		savePass.close();

		cout << "Your password has been saved in a file \"generated_passwords.txt\" where this program is located at." << endl;
		cout << endl;
	} else if (strength == 3) { // Difficulty: 3 ########################################################
		const char* charSet = "TUVWXYZab0cd1ef2gh3ij4kl5mnOPQRS6op7qr8st9uvABCDEwxyFGHIJKLMNz"; //Alpha bet upper and lower case + numbers -> mixed
		srand(time(nullptr));
		int passArraySize = rand() % 25;
		if (passArraySize < 10) passArraySize = 10;

		char password[25] = {};

		char randomCharacter;
		for (int i = 0; i < passArraySize; i++) {
			srand(time(nullptr) + i); // Seeds it with the current time + iteration of i because its really fast and will be something like xxxxxxxx or aaaaaaaa
			randomCharacter = charSet[rand() % 63];
			password[i] = randomCharacter;
		}
		password[passArraySize] = '\0';

		cout << "Your password is: " << password << endl;
		string descriptionOfPassword;
		cout << "Give your password a description: ";

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(cin, descriptionOfPassword, '\n');

		ofstream savePass;
		savePass.open("generated_passwords.txt", fstream::app);
		savePass << "Password: " << password << endl;
		savePass << "Description: " << descriptionOfPassword << endl << endl;
		savePass.close();

		cout << "Your password has been saved in a file \"generated_passwords.txt\" where this program is located at." << endl;
		cout << endl;
	} else if (strength == 4) { // Difficulty: 4 ########################################################
		const char* charSet = "TU!VW@XY#Za$b0%cd^1e&f2*gh(3i)j4[kl]5m{nO}PQ'RS\"6o;p7:qr/8s\\t9.uv>AB,CD<Ew`xy~FGHIJKLMNz"; //Alpha bet upper and lower case + numbers + symbols -> mixed
		srand(time(nullptr));
		int passArraySize = rand() % 41;
		if (passArraySize < 14) passArraySize = 14;

		char password[41] = {};

		char randomCharacter;
		for (int i = 0; i < passArraySize; i++) {
			srand(time(nullptr) + i); // Seeds it with the current time + iteration of i because its really fast and will be something like xxxxxxxx or aaaaaaaa
			randomCharacter = charSet[rand() % 91];
			password[i] = randomCharacter;
		}
		password[passArraySize] = '\0';

		cout << "Your password is: " << password << endl;
		string descriptionOfPassword;
		cout << "Give your password a description: ";

		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
		getline(cin, descriptionOfPassword, '\n');

		ofstream savePass;
		savePass.open("generated_passwords.txt", fstream::app);
		savePass << "Password: " << password << endl;
		savePass << "Description: " << descriptionOfPassword << endl << endl;
		savePass.close();

		cout << "Your password has been saved in a file \"generated_passwords.txt\" where this program is located at." << endl;
		cout << endl;
	}
	system("pause");
}
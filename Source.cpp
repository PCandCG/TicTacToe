#include <iostream>
using namespace std;

//Create empty board
char row0[3] = { '-', '-', '-' };
char row1[3] = { '-', '-', '-' };
char row2[3] = { '-', '-', '-' };

bool gameInProgress = true;


bool checkEmptyCoord(int x, int y) {
	switch (x) {
	case 1:
		switch (y) {
		case 1:
			if (row0[0] == '-') {
				return true;
			}
			else {
				return false;
			}
			break;
		case 2:
			if (row0[1] == '-') {
				return true;
			}
			else {
				return false;
			}
			break;
		default:
			if (row0[2] == '-') {
				return true;
			}
			else {
				return false;
			}
			break;
		}
		break;
	case 2:
		switch (y) {
		case 1:
			if (row1[0] == '-') {
				return true;
			}
			else {
				return false;
			}
			break;
		case 2:
			if (row1[1] == '-') {
				return true;
			}
			else {
				return false;
			}
			break;
		default:
			if (row1[2] == '-') {
				return true;
			}
			else {
				return false;
			}
			break;
		}
		break;
	default:
		switch (y) {
		case 1:
			if (row2[0] == '-') {
				return true;
			}
			else {
				return false;
			}
			break;
		case 2:
			if (row2[1] == '-') {
				return true;
			}
			else {
				return false;
			}
			break;
		default:
			if (row2[2] == '-') {
				return true;
			}
			else {
				return false;
			}
			break;
		}
		break;
	}
}

int checkForWin() {
	if (row0[0] == 'x' && row0[1] == 'x' && row0[2] == 'x') {
		gameInProgress = false;
		cout << "Player x won" << endl;
	}
	if (row0[0] == 'x' && row1[0] == 'x' && row2[3] == 'x') {
		gameInProgress = false;
		cout << "Player x won" << endl;
	}
	if (row0[2] == 'x' && row1[2] == 'x' && row2[2] == 'x') {
		gameInProgress = false;
		cout << "Player x won" << endl;
	}
	if (row2[0] == 'x' && row2[1] == 'x' && row2[2] == 'x') {
		gameInProgress = false;
		cout << "Player x won" << endl;
	}
	if (row0[0] == 'x' && row1[1] == 'x' && row2[2] == 'x') {
		gameInProgress = false;
		cout << "Player x won" << endl;
	}
	if (row2[0] == 'o' && row1[1] == 'o' && row0[0] == 'o') {
		gameInProgress = false;
		cout << "Player o won" << endl;
	}
	if (row0[0] == 'o' && row0[1] == 'o' && row0[2] == 'o') {
		gameInProgress = false;
		cout << "Player o won" << endl;
	}
	if (row0[0] == 'o' && row1[0] == 'o' && row2[3] == 'o') {
		gameInProgress = false;
		cout << "Player o won" << endl;
	}
	if (row0[2] == 'o' && row1[2] == 'o' && row2[2] == 'o') {
		gameInProgress = false;
		cout << "Player o won" << endl;
	}
	if (row2[0] == 'o' && row2[1] == 'o' && row2[2] == 'o') {
		gameInProgress = false;
		cout << "Player o won" << endl;
	}
	if (row0[0] == 'o' && row1[1] == 'o' && row2[2] == 'o') {
		gameInProgress = false;
		cout << "Player o won" << endl;
	}
	if (row2[0] == 'o' && row1[1] == 'o' && row0[0] == 'o') {
		gameInProgress = false;
		cout << "Player o won" << endl;
	}
	return 0;
}

int playerXturn() {
	int xCoord = 0;
	int yCoord = 0;
	cout << "Enter X co-ord (1-3)" << endl;
	while (xCoord < 1 and xCoord > 3) {
		cin >> xCoord;
		if (xCoord < 1 and xCoord > 3) {
			cout << "Invalid Input, please enter a number between one and 3" << endl;
		}
	}
	cout << "Enter Y co-ord (1-3)" << endl;
	while (yCoord < 1 and yCoord > 3) {
		cin >> yCoord;
		if (yCoord < 1 and yCoord > 3) {
			cout << "Invalid Input, please enter a number between one and 3" << endl;
		}
	}
	if (checkEmptyCoord(xCoord, yCoord) == true) {
		switch (xCoord) {
		case 1:
			row0[yCoord - 1] = 'x';
			break;
		case 2:
			row1[yCoord - 1] = 'x';
			break;
		default:
			row2[yCoord - 1] = 'x';
			break;
		}
		return 0;
	}
}

int playerOturn() {
	int xCoord = 0;
	int yCoord = 0;
	cout << "Enter X co-ord (1-3)" << endl;
	while (xCoord < 1 and xCoord > 3) {
		cin >> xCoord;
		if (xCoord < 1 and xCoord > 3) {
			cout << "Invalid Input, please enter a number between one and 3" << endl;
		}
	}
	cout << "Enter Y co-ord (1-3)" << endl;
	while (yCoord < 1 and yCoord > 3) {
		cin >> yCoord;
		if (yCoord < 1 and yCoord > 3) {
			cout << "Invalid Input, please enter a number between one and 3" << endl;
		}
	}
		
	if (checkEmptyCoord(xCoord, yCoord) == true) {
		switch (xCoord) {
		case 1:
			row0[yCoord - 1] = 'o';
			break;
		case 2:
			row1[yCoord - 1] = 'o';
			break;
		default:
			row2[yCoord - 1] = 'o';
			break;
		}
	}
	return 0;
}

int displayBoard() {
	cout << row0[0] << row0[1] << row0[2] << endl;
	cout << row1[0] << row1[1] << row1[2] << endl;
	cout << row2[0] << row2[1] << row2[2] << endl;
	return 0;
}

int main() {
	while (gameInProgress == true) {
		displayBoard();
		playerXturn();
		playerOturn();
		checkForWin();
	}

	system("PAUSE");
	return 0;
}

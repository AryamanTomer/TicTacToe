// TicTacToe.cpp : This file contains the 'main' function. Program execution begins and ends there.
//

#include <iostream>
using namespace std;
char matrix[9] = { '1', '2', '3', '4', '5', '6', '7', '8', '9' };
enum Position{LEFT, RIGHT, CENTER};
void printPos(Position pos, string s, int length) {
	int space = 0;
	switch (pos) 
	{
	case CENTER: space = (length - s.size()) / 2;
	} 
	if (space > 0) {
		cout << string(space, ' ');
	}
	cout << s << endl;
}
void changeOne(char c) {
	if (c == '1') {
		matrix[0] = 'X';
	}
	if (c == '2') {
		matrix[1] = 'X';
	}
	if (c == '3') {
		matrix[2] = 'X';
	}
	if (c == '4') {
		matrix[3] = 'X';
	}
	if (c == '5') {
		matrix[4] = 'X';
	}
	if (c == '6') {
		matrix[5] = 'X';
	}
	if (c == '7') {
		matrix[6] = 'X';
	}
	if (c == '8') {
		matrix[7] = 'X';
	}
	if (c == '9') {
		matrix[8] = 'X';
	}
}
void changeTwo(char c) {
	if (c == '1') {
		matrix[0] = 'O';
	}
	if (c == '2') {
		matrix[1] = 'O';
	}
	if (c == '3') {
		matrix[2] = 'O';
	}
	if (c == '4') {
		matrix[3] = 'O';
	}
	if (c == '5') {
		matrix[4] = 'O';
	}
	if (c == '6') {
		matrix[5] = 'O';
	}
	if (c == '7') {
		matrix[6] = 'O';
	}
	if (c == '8') {
		matrix[7] = 'O';
	}
	if (c == '9') {
		matrix[8] = 'O';
	}
}
int outcomes() {
	if (matrix[0] == matrix[1] && matrix[1] == matrix[2]) {
		return 1;
	}
	else if (matrix[3] == matrix[4] && matrix[4] == matrix[5]) {
		return 1;
	}
	else if (matrix[6] == matrix[7] && matrix[7] == matrix[8]) {
		return 1;
	}
	else if (matrix[0] == matrix[3] && matrix[3] == matrix[6]) {
		return 1;
	}
	else if (matrix[1] == matrix[4] && matrix[4] == matrix[7]) {
		return 1;
	}
	else if (matrix[2] == matrix[5] && matrix[5] == matrix[8]) {
		return 1;
	}
	else if (matrix[0] == matrix[4] && matrix[4] == matrix[8]) {
		return 1;
	}
	else if (matrix[2] == matrix[4] && matrix[4] == matrix[6]) {
		return 1;
	}
}
void board() {
	cout << "   |   |   " << endl;
	cout << " " << matrix[0] << " | " << matrix[1] << " | " << matrix[2] << " " << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << matrix[3] << " | " << matrix[4] << " | " << matrix[5] << " " << endl;
	cout << "___|___|___" << endl;
	cout << "   |   |   " << endl;
	cout << " " << matrix[6] << " | " << matrix[7] << " | " << matrix[8] << " " << endl;
	cout << "___|___|___" << endl;
}
int main()
{
	system("cls");
	const int length = 50;
	printPos(CENTER, "Tic Tac Toe", length);
	printPos(CENTER, "Player A: X - Player B: Y", length);

	
	char a;
	char b;
	cout << "\n" << endl;
	do {
		
		board();
		
		printPos(CENTER, "Enter the Option for Player A", length);
		cin >> a;
		changeOne(a);
		printPos(CENTER, "Enter the Option for Player B", length);
		cin >> b;
		changeTwo(b);


	} while (outcomes() != 1);
	for (int i = 0; i < sizeof(matrix); i++)
	{
		if (matrix[0] == matrix[1] && matrix[1] == matrix[2] && matrix[0] == 'X') {
			cout << "Player A Wins!!!" << endl;
			break;
		}
		else if (matrix[0] == matrix[1] && matrix[1] == matrix[2] && matrix[0] == 'O') {
			cout << "Player B Wins!!!" << endl;
			break;
		}
		else if (matrix[3] == matrix[4] && matrix[4] == matrix[5] && matrix[3] == 'X') {
			cout << "Player A Wins!!!" << endl;
			break;
		}
		else if (matrix[3] == matrix[4] && matrix[4] == matrix[5] && matrix[3] == 'O') {
			cout << "Player B Wins!!!" << endl;
			break;
		}
		else if (matrix[6] == matrix[7] && matrix[7] == matrix[8] && matrix[6] == 'X') {
			cout << "Player A Wins!!!" << endl;
			break;
		}
		else if (matrix[6] == matrix[7] && matrix[7] == matrix[8] && matrix[6] == 'O') {
			cout << "Player B Wins!!!" << endl;
			break;
		}
		else if (matrix[0] == matrix[3] && matrix[3] == matrix[6] && matrix[0] == 'X') {
			cout << "Player A Wins!!!" << endl;
			break;
		}
		else if (matrix[0] == matrix[3] && matrix[3] == matrix[6] && matrix[0] == 'O') {
			cout << "Player B Wins!!!" << endl;
			break;
		}
		else if (matrix[1] == matrix[4] && matrix[4] == matrix[7] && matrix[1] == 'X') {
			cout << "Player A Wins!!!" << endl;
			break;
		}
		else if (matrix[1] == matrix[4] && matrix[4] == matrix[7] && matrix[1] == 'O') {
			cout << "Player B Wins!!!" << endl;
			break;
		}
		else if (matrix[2] == matrix[5] && matrix[5] == matrix[8] && matrix[2] == 'X') {
			cout << "Player A Wins!!!" << endl;
			break;
		}
		else if (matrix[2] == matrix[5] && matrix[5] == matrix[8] && matrix[2] == 'O') {
			cout << "Player B Wins!!!" << endl;
			break;
		}
		else if (matrix[0] == matrix[4] && matrix[4] == matrix[8] && matrix[0] == 'X') {
			cout << "Player A Wins!!!" << endl;
			break;
		}
		else if (matrix[0] == matrix[4] && matrix[4] == matrix[8] && matrix[0] == 'O') {
			cout << "Player B Wins!!!" << endl;
			break;
		}
		else if (matrix[2] == matrix[4] && matrix[4] == matrix[6] && matrix[2] == 'X') {
			cout << "Player A Wins!!!" << endl;
			break;
		}
		else if (matrix[2] == matrix[4] && matrix[4] == matrix[6] && matrix[2] == 'O') {
			cout << "Player B Wins!!!" << endl;
			break;
		}
		else {
			cout << "It's a draw!" << endl;
			break;
		}
	}
}

// Run program: Ctrl + F5 or Debug > Start Without Debugging menu
// Debug program: F5 or Debug > Start Debugging menu

// Tips for Getting Started: 
//   1. Use the Solution Explorer window to add/manage files
//   2. Use the Team Explorer window to connect to source control
//   3. Use the Output window to see build output and other messages
//   4. Use the Error List window to view errors
//   5. Go to Project > Add New Item to create new code files, or Project > Add Existing Item to add existing code files to the project
//   6. In the future, to open this project again, go to File > Open > Project and select the .sln file

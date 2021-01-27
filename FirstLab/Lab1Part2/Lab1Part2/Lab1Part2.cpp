#include "pch.h"
#include <iostream>
using namespace std;

const int WIDTH = 10;
const int HEIGHT = 10;
const int SHIP_SIZE = 5;

int board[WIDTH][HEIGHT];

int* ship[SHIP_SIZE]; //ship takes 5 spaces on the board.

int hits = 0;

int main()
{
	ship[0] = &board[4][5];
	ship[1] = &board[4][6];
	ship[2] = &board[4][7];
	ship[3] = &board[4][8];
	ship[4] = &board[4][9];

	while (hits < SHIP_SIZE) {
		cout << "Enter an x and y coordinate separated by a space" << endl;
		int x, y;
		cin >> x >> y;
		bool hit = false;
		for (int i = 0; i < SHIP_SIZE; i++) {
			if (&board[x][y] == ship[i]) {
				hits++;
				hit = true;
				cout << "Hit!" << endl;
			}
			else {
				
			}
		}
		if (hit) {
			cout << "Hit!" << endl;
		}
		else {
			cout << "Miss!" << endl;
		}

	}
	if (bool hit = true) {
		cout << "You sunk all my battleships!" << endl;
	}
}

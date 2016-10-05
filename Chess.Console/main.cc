#include "board.h"
#include <iostream>
#include <sstream>

using namespace std;
using namespace chess;

int main() {
	Board board;

	while (true) {
		cout << board << endl;

		string move;

		cout << "Move piece (from-to, b2-b3): ";
		cin >> move;
		cout << endl;

		board.MovePiece(move);
	}

	return 0;
}

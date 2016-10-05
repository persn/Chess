#include "board.h"
#include <iostream>

using namespace std;
using namespace chess;

int main() {
	Board board;

	cout << board << endl;

	board.MovePiece(6, 1, 5, 1);

	cout << board << endl;

	return 0;
}

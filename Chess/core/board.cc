#include "board.h"
#include <iostream>

using namespace std;

namespace core {
	Board::Board()
	{
		cout << "Generating Board" << endl;
	}

	ostream &operator<<(ostream &stream, const Board &board) {
		for (int i = 0; i < board.kDimensionSize; i++) {
			for (int j = 0; j < board.kDimensionSize; j++) {
				stream << "O";
			}
			stream << endl;
		}

		return stream;
	}
}

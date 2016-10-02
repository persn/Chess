#include "board.h"
#include <iostream>

using namespace std;

namespace core {
	Board::Board()
	{
		cout << "Creating Board" << endl;

		for (int i = 0; i < this->kDimensionSize; i++) {
			for (int j = 0; j < this->kDimensionSize; j++) {
				this->tiles[i][j] = 0;
			}
		}
	}

	Board::~Board()
	{
		cout << "Destroying Board" << endl;
	}

	ostream &operator<<(ostream &stream, const Board &board) {
		for (int i = 0; i < board.kDimensionSize; i++) {
			for (int j = 0; j < board.kDimensionSize; j++) {
				stream << "0";
			}
			stream << endl;
		}

		return stream;
	}
}

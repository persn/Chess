#include "game.h"
#include <iostream>
#include <sstream>


using namespace std;
using namespace chess;

int main() {
	Game game;

	while (game.getIsGameRunning()) {
		cout << *game.GetBoard() << endl;

		string move;

		cout << "Move piece (from-to, b2-b3): ";
		cin >> move;
		cout << endl;

		game.GetBoard()->MovePiece(move);
	}

	return 0;
}

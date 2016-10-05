#include "game.h"

namespace chess {
	Game::Game() : isGameRunning(true), pBoard() {
		this->pBoard = new Board();
	}

	Game::~Game() {
		delete this->pBoard;
		this->pBoard = nullptr;
	}

	bool Game::getIsGameRunning() const {
		return this->isGameRunning;
	}

	Board *Game::GetBoard() const {
		return this->pBoard;
	}
}

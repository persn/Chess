#pragma once

#include "board.h"

namespace chess {
	class Game {
		bool isGameRunning;
		Board *pBoard;

	public:
		Game();
		~Game();

		bool getIsGameRunning() const;
		Board *GetBoard() const;
	};
}

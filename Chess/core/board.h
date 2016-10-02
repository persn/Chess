#pragma once

#include <ostream>

namespace core {
	class Board {
	public:
		Board();
		~Board();

		friend std::ostream &operator<<(std::ostream &, const Board &);
	private:
		static const int kDimensionSize = 8;
		int tiles[kDimensionSize][kDimensionSize];
	};
}

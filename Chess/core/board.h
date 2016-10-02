#pragma once

#include <ostream>

namespace core {
	class Board {
	public:
		Board();

		friend std::ostream &operator<<(std::ostream &, const Board &);
	private:
		const int kDimensionSize = 8;
	};
}

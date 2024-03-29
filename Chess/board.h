#pragma once

#include <stdint.h>
#include <ostream>

namespace chess {
	class Board {
	public:
		Board();

		void MovePiece(const std::string move);
		void MovePiece(
			const int fromRow,
			const int fromColumn,
			const int toRow,
			const int toColumn);

		friend std::ostream &operator<<(std::ostream &, const Board &);

	private:
		static const uint8_t kDimensionSize = 8;

		int8_t tiles[kDimensionSize][kDimensionSize];

		static void AppendHeaderFooter(std::ostream &);
		static void AppendRow(std::ostream &, const char row, const int8_t[]);
	};
}

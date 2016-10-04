#include "board.h"
#include "piece.h"
#include <iomanip>

using namespace std;

namespace chess {
	/**
	 * Standard constructor for a chess board. Will set all pieces to default positions.
	 */
	Board::Board() {
		this->tiles[0][0] = -kRook;
		this->tiles[0][1] = -kKnight;
		this->tiles[0][2] = -kBishop;
		this->tiles[0][3] = -kKing;
		this->tiles[0][4] = -kQueen;
		this->tiles[0][5] = -kBishop;
		this->tiles[0][6] = -kKnight;
		this->tiles[0][7] = -kRook;

		this->tiles[1][0] = -kPawn;
		this->tiles[1][1] = -kPawn;
		this->tiles[1][2] = -kPawn;
		this->tiles[1][3] = -kPawn;
		this->tiles[1][4] = -kPawn;
		this->tiles[1][5] = -kPawn;
		this->tiles[1][6] = -kPawn;
		this->tiles[1][7] = -kPawn;

		this->tiles[6][0] = kPawn;
		this->tiles[6][1] = kPawn;
		this->tiles[6][2] = kPawn;
		this->tiles[6][3] = kPawn;
		this->tiles[6][4] = kPawn;
		this->tiles[6][5] = kPawn;
		this->tiles[6][6] = kPawn;
		this->tiles[6][7] = kPawn;

		this->tiles[7][0] = kRook;
		this->tiles[7][1] = kKnight;
		this->tiles[7][2] = kBishop;
		this->tiles[7][3] = kKing;
		this->tiles[7][4] = kQueen;
		this->tiles[7][5] = kBishop;
		this->tiles[7][6] = kKnight;
		this->tiles[7][7] = kRook;

		for (int i = 2; i < this->kDimensionSize - 2; i++) {
			for (int j = 0; j < this->kDimensionSize; j++) {
				this->tiles[i][j] = kDummy;
			}
		}
	}

	ostream &operator<<(ostream &stream, const Board &board) {
		Board::AppendHeaderFooter(stream);
		Board::AppendRow(stream, '8', board.tiles[0]);
		Board::AppendRow(stream, '7', board.tiles[1]);
		Board::AppendRow(stream, '6', board.tiles[2]);
		Board::AppendRow(stream, '5', board.tiles[3]);
		Board::AppendRow(stream, '4', board.tiles[4]);
		Board::AppendRow(stream, '3', board.tiles[5]);
		Board::AppendRow(stream, '2', board.tiles[6]);
		Board::AppendRow(stream, '1', board.tiles[7]);
		Board::AppendHeaderFooter(stream);

		return stream;
	}

	void Board::AppendHeaderFooter(std::ostream& stream) {
		const char separator = ' ';
		const int width = 2;

		stream << right << setw(width) << setfill(separator) << " ";
		stream << right << setw(width) << setfill(separator) << "a";
		stream << right << setw(width) << setfill(separator) << "b";
		stream << right << setw(width) << setfill(separator) << "c";
		stream << right << setw(width) << setfill(separator) << "d";
		stream << right << setw(width) << setfill(separator) << "e";
		stream << right << setw(width) << setfill(separator) << "f";
		stream << right << setw(width) << setfill(separator) << "g";
		stream << right << setw(width) << setfill(separator) << "h";
		stream << right << setw(width) << setfill(separator) << " ";
		stream << right << setw(width) << setfill(separator) << endl;
	}

	void Board::AppendRow(std::ostream &stream, const char rowNumber, const int8_t row[]) {
		const char separator = ' ';
		const int width = 2;

		stream << left << setw(width) << setfill(separator) << rowNumber;
		stream << right << setw(width) << setfill(separator) << static_cast<int>(row[0]);
		stream << right << setw(width) << setfill(separator) << static_cast<int>(row[1]);
		stream << right << setw(width) << setfill(separator) << static_cast<int>(row[2]);
		stream << right << setw(width) << setfill(separator) << static_cast<int>(row[3]);
		stream << right << setw(width) << setfill(separator) << static_cast<int>(row[4]);
		stream << right << setw(width) << setfill(separator) << static_cast<int>(row[5]);
		stream << right << setw(width) << setfill(separator) << static_cast<int>(row[6]);
		stream << right << setw(width) << setfill(separator) << static_cast<int>(row[7]);
		stream << right << setw(width) << setfill(separator) << rowNumber;
		stream << right << setw(width) << setfill(separator) << endl;
	}
}

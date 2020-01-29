#include "GameBoard.h"

int main()
{
	GameBoard board(10, 10);
	GamePiece piece;
	board.at(0, 0) = piece;
	board.at(0, 1) = board.at(0, 0);

	GameBoard board2;
	board2 = board;

	processGame(board2);

	return 0;
	
}

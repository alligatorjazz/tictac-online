#include <iostream>
#include <vector>
#include <format>

enum space
{
	Empty,
	X,
	O
};

int main()
{
	std::cout << "starting program...\n";
	// DATA
	int p1score = 0;
	int p2score = 0;

	// BOARD
	int board_rows = 3;
	int board_columns = 3;
	std::vector<space> board (board_rows * board_columns, Empty);

	// TODO: print contents of board with names to console

	
	std::cout << " . | A | B | C |\n"; // print column labels
	for (size_t c = 0; c < board_columns; c++)
	{
		std::cout << std::format(" {} | ", c + 1);
		for (size_t r = 0; r < board_rows; r++)
		{	
			std::cout << std::format("{} |", board[c * r]);
		}
		std::cout << "\n";
	}
	
	return 0;
}
#pragma once

class GamePiece {};

class GameBoard
{
public:
	explicit GameBoard(size_t width = DefaultWidth, size_t height = DefaultHeight);
	GameBoard(const GameBoard& src); //copy construcrot
	virtual ~GameBoard() noexcept;
	GameBoard& operator=(const GameBoard& rhs);//assignment

	GamePiece& at(size_t x, size_t y);
	const GamePiece& at(size_t x, size_t y) const;

	size_t getHeight() { return mHeight; }
	size_t getWidth() { return mWidth; }

	static const size_t DefaultWidth = 100;
	static const size_t DefaultHeight = 100;

	friend void swap(GameBoard& first, GameBoard& second) noexcept;


private:
	size_t mHeight = 0, mWidth = 0;
	GamePiece** mCells = nullptr;
};

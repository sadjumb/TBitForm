#pragma once
#include<string>

class TBitField
{
public:
	TBitField();
	TBitField(int);
	TBitField(const TBitField&);
	~TBitField();
	
	TBitField& operator=(const TBitField&);
	TBitField operator+(const TBitField&) const;
	TBitField operator*(TBitField) const;
	TBitField operator~() const;
	unsigned int GetMemMask(const int n) const;
	void add(int);
	void del(int);
	void resize(int);
	int getSize() const;
	
	std::string TBitToStr(int sizeU) const;

private:
	unsigned int* mem;
	int size;
	int universe;
	
	int getBit(long long int) const;
	int getIndex(long long int) const;
};


#pragma once
#include "TBitField.h"
#include <vector>

class TSet
{
public:
	TSet() = default;
	TSet(int);
	TSet(const TSet&);
	~TSet() = default;

	TSet& operator=(TSet);
	TSet operator+(TSet);
	TSet operator*(TSet);
	TSet operator~();

	void add(int);
	void del(int);
	std::string ToString();


	

private:
	int size;
	TBitField tb;
};


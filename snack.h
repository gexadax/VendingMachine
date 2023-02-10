#pragma once
using namespace std;

class Snack
{
public:
	Snack(const char* name);
	const char* name;
	const char* getName() const;
	const char* setName(const char*);
};
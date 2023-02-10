#include "snack.h"
#include <string>

using namespace std;

Snack::Snack(const char* _name)
{
	_name = name;
}

const char* Snack::setName(const char* _name) {
	return _name = name;
};

const char* Snack::getName() const {
	return name;
};




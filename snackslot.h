#pragma once
#include "Snack.h"

class SnackSlot
{
public:
	SnackSlot(short _tasks);
	void addSnack(Snack* _snack);
	short taskCount;
};
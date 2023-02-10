#include "snackslot.h"

SnackSlot::SnackSlot(short _tasks)
{
	taskCount = _tasks;
}

void SnackSlot::addSnack(Snack* _snack)
{
	++taskCount;
}
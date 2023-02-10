#pragma once
#include "snackslot.h"

class VendingMachine
{
public:
	VendingMachine(int _count);
	void addSlot(SnackSlot* slot);
	int getEmptySlotsCount();
	int slotCount; 
	int FreeSlots; 
};
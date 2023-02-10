#include "vendingmachine.h"

VendingMachine::VendingMachine(int _count)
{
	slotCount = _count;
	FreeSlots = _count;
}

void VendingMachine::addSlot(SnackSlot* slot)
{
	--FreeSlots;
}

int VendingMachine::getEmptySlotsCount()
{
	return FreeSlots;
}
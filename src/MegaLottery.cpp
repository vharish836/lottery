#include "MegaLottery.h"

namespace lotto {

MegaLottery::MegaLottery(int ticketSize, int maxNum, int maxMegaNum) :
		Lottery { ticketSize, maxNum } {
	this->maxMegaNum = maxMegaNum;
}

MegaLottery::~MegaLottery() {
}

std::string MegaLottery::printTicket() {
	std::ostringstream tick { };
	tick << Lottery::printTicket() << " Mega: ";
	int mega { 1 + rand() % this->maxMegaNum };
	tick << mega;
	return tick.str();
}

} /* namespace lotto */

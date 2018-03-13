#ifndef MEGALOTTERY_H_
#define MEGALOTTERY_H_

#include "Lottery.h"

namespace lotto {

class MegaLottery: public Lottery {
protected:
	int maxMegaNum;
public:
	MegaLottery(int, int, int);
	virtual ~MegaLottery();
	std::string printTicket();
};

} /* namespace lotto */

#endif /* MEGALOTTERY_H_ */

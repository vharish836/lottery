#ifndef LOTTERYFACTORY_H_
#define LOTTERYFACTORY_H_

#include "Lottery.h"

namespace lotto {

class LotteryFactory {
private:
	LotteryFactory();
public:
    enum State { California, Florida };
    static LotteryFactory* getInstance();
    Lottery* getLottery(State);
};

} /* namespace lotto */

#endif /* LOTTERYFACTORY_H_ */

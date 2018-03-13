#include "LotteryFactory.h"
#include "MegaLottery.h"

namespace lotto {

LotteryFactory::LotteryFactory() {
	srand(time(nullptr));
}

Lottery* LotteryFactory::getLottery(State s)
{
    if (s == LotteryFactory::California)
    {
		Lottery* lotto { new MegaLottery { 5, 47, 27 } };
        return lotto;
    }
    else
    {
        Lottery* lotto { new Lottery {6,53} };
        return lotto;
    }
}

LotteryFactory* LotteryFactory::getInstance()
{
    static LotteryFactory instance {};
    return &instance;
}

} /* namespace lotto */

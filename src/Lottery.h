#ifndef LOTTERY_H_
#define LOTTERY_H_

#include <string>
#include <sstream>
#include <cstdlib>
#include <time.h>


namespace lotto {

class Lottery {
protected:
	int ticketSize, maxNum;
	int* generateNumbers();
public:
	Lottery(int size, int num);
	virtual ~Lottery();
	virtual std::string printTicket();
};

} /* namespace lotto */

#endif /* LOTTERY_H_ */

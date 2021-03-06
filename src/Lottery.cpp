#include "Lottery.h"

namespace lotto {

Lottery::Lottery(int size, int num) {
	this->ticketSize = size;
	this->maxNum = num;
}

Lottery::~Lottery() {

}

int* Lottery::generateNumbers() {
	int* allNums = new int[this->maxNum + 1] { };
	for (int i = 0; i <= this->maxNum; i++) {
		allNums[i] = 0;
	}
	int* nums = new int[this->ticketSize] { };
	for (int i = 0; i < this->ticketSize; i++) {
		int val { 1 + rand() % (this->maxNum) };
		if (allNums[val]) {
			i--;
		} else {
			nums[i] = val;
			allNums[val] = 1;
		}
	}
	return nums;
}

std::string Lottery::printTicket() {
	std::ostringstream str { };
	int* nums = this->generateNumbers();
	for (int i = 0; i < this->ticketSize; i++) {
		str << *nums << ' ';
		nums++;
	}
	return str.str();
}
} /* namespace lotto */

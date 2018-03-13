#include <iostream>
#include "LotteryFactory.h"

using namespace lotto;
using namespace std;
int main()
{
    LotteryFactory* factory = LotteryFactory::getInstance();
    cout << "What lottery do you want to play?" << endl;
    cout << "(1) California, (2) Florida" << endl;
    int cmd {};
    scanf("%d", &cmd);
    Lottery* lotto = 0;
    switch (cmd)
    {
        case 1 :
        lotto = factory->getLottery(LotteryFactory::California);
        break;

        case 2 :
        lotto = factory->getLottery(LotteryFactory::Florida);
        break;

        default :
        cout << "Sorry didn't understand that" << endl;
    }
    cout << "Ticket: " << lotto->printTicket() << endl;
    delete lotto;
    return 0;
}

#include <string>
#include "requisites.h"
int main()
{
    requisites R;
    R.Show();
    requisites REQ("Anatoliy", "88005054700", 25.5);
    R = REQ;
    R.Show();
    REQ.Show();
    REQ.add_money_on_balance(50);
    REQ.Show();
    REQ.withdrawal(20.85);
    REQ.Show();
    return 0;
}
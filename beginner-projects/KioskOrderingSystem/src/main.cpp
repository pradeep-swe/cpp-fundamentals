#include <iostream>
#include "../include/Menu.h"
#include "../include/Order.h"
#include "../include/Functions.h"

namespace Kiosk {
    int runKiosk() 
    {
        Order myOrder;

        // Collect user choices
        myOrder.mainDish = chooseMainDish();
        myOrder.sides = chooseSides();
        myOrder.drink = chooseDrink();
        myOrder.dessert = chooseDessert();
        myOrder.paymentMethod = choosePaymentMethod();

        // Display summary
        orderSummary(myOrder);

        return 0;
    }
}

// ---------------------------------------------------------
//                     ENTRY POINT
// ---------------------------------------------------------
int main()
{
    return Kiosk::runKiosk();
}

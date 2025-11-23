#include <iostream>
#include "../include/order.h"
#include "../include/menu.h" // for toString* helpers

namespace Kiosk
{

    void orderSummary(const Order &orderRef)
    {
        std::cout << "\n\n+========================( Your Order Summary )====================================+\n";

        std::cout << "\t\tMain Dish      : "
                  << toStringMainDish(orderRef.mainDish) << '\n';

        if (orderRef.sides)
            std::cout << "\t\tSides          : "
                      << toStringSides(*orderRef.sides) << '\n';

        if (orderRef.drink)
            std::cout << "\t\tDrink          : "
                      << toStringDrink(*orderRef.drink) << '\n';

        if (orderRef.dessert)
            std::cout << "\t\tDessert        : "
                      << toStringDessert(*orderRef.dessert) << '\n';

        std::cout << "\t\tPayment Method : "
                  << toStringPaymentMethod(orderRef.paymentMethod) << '\n';
    }

}

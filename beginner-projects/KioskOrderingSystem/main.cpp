#include <iostream>
#include <optional>
#include "include/menu.h"
#include "include/order.h"

int main()
{
    using namespace Kiosk;
    Order o{MainDish::Burger, std::nullopt, std::nullopt, std::nullopt, PaymentMethod::Card};
    (void)o;
    std::cout << "Order object constructed successfully\n";
    return 0;
}

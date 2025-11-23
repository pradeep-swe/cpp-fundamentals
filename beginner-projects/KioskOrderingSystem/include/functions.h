#pragma once
#include "../include/menu.h"

namespace Kiosk {

// Functions that handle user input and menu choices
MainDish chooseMainDish();
std::optional<Sides> chooseSides();
std::optional<Drink> chooseDrink();
std::optional<Dessert> chooseDessert();
PaymentMethod choosePaymentMethod();

}

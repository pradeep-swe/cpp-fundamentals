#pragma once
#include <optional>
#include "menu.h"   // For the enums and string conversion functions


namespace Kiosk {

    // Structure to hold the user's complete order
    struct Order
    {
        MainDish mainDish;                 // Mandatory
        std::optional<Sides> sides;         // Optional
        std::optional<Drink> drink;         // Optional
        std::optional<Dessert> dessert;     // Optional
        PaymentMethod paymentMethod;         // Mandatory
    };

    // Function to display a summary of the order
    void orderSummary(const Order& orderRef);

} 
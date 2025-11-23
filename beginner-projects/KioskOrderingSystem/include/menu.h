#pragma once
#include <string_view>
#include <optional>

namespace Kiosk
{

    // =========================== Enums ==============================//
    enum class MainDish
    {
        Burger,
        Pizza,
        ChipotleBowl,
        COUNT
    };
    enum class Sides
    {
        Fries,
        OnionRings,
        Nachos,
        Wedges,
        Salad,
        COUNT
    };
    enum class Drink
    {
        Coke,
        Sprite,
        Fanta,
        IceTea,
        COUNT
    };
    enum class Dessert
    {
        CaramelCustard,
        ApplePie,
        ChocoFudge,
        PineappleKesari,
        COUNT
    };
    enum class PaymentMethod
    {
        Card,
        UPI,
        Cash,
        Wallet,
        COUNT
    };

    //====================== Function Prototypes ======================//
    // Display menus and return user choice
    MainDish chooseMainDish();
    std::optional<Sides> chooseSides();
    std::optional<Drink> chooseDrink();
    std::optional<Dessert> chooseDessert();
    PaymentMethod choosePaymentMethod();

    //====================== Helper Functions ======================//
    // Convert enum values to readable strings
    // Implementations of the menu-display helper functions
    constexpr std::string_view toStringMainDish(MainDish mainDish)
    {
        switch (mainDish)
        {
        case MainDish::Burger:
            return "Burger";
        case MainDish::Pizza:
            return "Pizza";
        case MainDish::ChipotleBowl:
            return "Chipotle Bowl";
        default:
            return "Meal Not Available!";
        }
    }

    constexpr std::string_view toStringSides(Sides side)
    {
        switch (side)
        {
        case Sides::Fries:
            return "Fries";
        case Sides::OnionRings:
            return "Onion Rings";
        case Sides::Nachos:
            return "Nachos";
        case Sides::Wedges:
            return "Wedges";
        case Sides::Salad:
            return "Salad";
        default:
            return "Side Not Available!";
        }
    }

    constexpr std::string_view toStringDrink(Drink drink)
    {
        switch (drink)
        {
        case Drink::Coke:
            return "Coke";
        case Drink::Sprite:
            return "Sprite";
        case Drink::Fanta:
            return "Fanta";
        case Drink::IceTea:
            return "Ice Tea";
        default:
            return "Drink Not Available!";
        }
    }

    constexpr std::string_view toStringDessert(Dessert dessert)
    {
        switch (dessert)
        {
        case Dessert::CaramelCustard:
            return "Caramel Custard";
        case Dessert::ApplePie:
            return "Apple Pie";
        case Dessert::ChocoFudge:
            return "Choco Fudge";
        case Dessert::PineappleKesari:
            return "Pineapple Kesari";
        default:
            return "Dessert Not Available!";
        }
    }

    constexpr std::string_view toStringPaymentMethod(PaymentMethod pm)
    {
        switch (pm)
        {
        case PaymentMethod::Card:
            return "Card";
        case PaymentMethod::UPI:
            return "UPI";
        case PaymentMethod::Cash:
            return "Cash";
        case PaymentMethod::Wallet:
            return "Wallet";
        default:
            return "Payment Method Not Available!";
        }
    }

}

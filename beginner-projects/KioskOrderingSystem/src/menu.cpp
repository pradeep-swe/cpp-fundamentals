#include <iostream>
#include <limits>
#include "../include/functions.h"
#include "../include/order.h"

namespace Kiosk
{

    // Display all the available Main Dishes, prompt user for input
    // Validates user input, and returns the choosen value
    MainDish chooseMainDish()
    {

        while (true)
        {
            // Display Main Dish Menu
            std::cout << "\n+========================( Welcome, Choose a dish you want )========================+ \n";
            for (int i = 0; i < static_cast<int>(MainDish::COUNT); ++i)
            {
                MainDish mainDish = static_cast<MainDish>(i);
                std::cout << "\t\t " << i << "  " << toStringMainDish(mainDish) << '\n';
            }

            // Prompt user for the Main Dish
            int mainDish{};
            std::cout << "\n Choose an option ( Pleas Enter Corresponding Number ) : ";
            std::cin >> mainDish;

            // Check possible Out of Bound, Type mismatch or Stream Errors
            if (std::cin.fail() || mainDish >= static_cast<int>(MainDish::COUNT) || mainDish < 0)
            {
                std::cerr << "\n Main meal is Must. Choose One";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
            else
                return static_cast<MainDish>(mainDish); // returns the Main Dish
        }
    }

    // Display all the available Sides, prompt user for input,
    // Validates user input, and returns the choosen value
    std::optional<Sides> chooseSides()
    {
        std::cout << "\n\n+========================( Choose the side you want )=============================+\n";
        // Iterate through all the Sides available and list them all
        for (int i = 0; i < static_cast<int>(Sides::COUNT); ++i)
        {
            Sides sides = static_cast<Sides>(i);
            std::cout << "\t\t" << i << "  " << toStringSides(sides) << '\n';
        }

        // Prompt user for choice
        std::cout << "\n Choose an option ( Please Enter corresponding Number ) : ";
        int sides{};
        std::cin >> sides;

        // Check possible Out of Bound
        if (sides < static_cast<int>(Sides::COUNT))
            return static_cast<Sides>(sides);
        else
            return std::nullopt;
    }

    // Display all the available Drink, prompt user for input,
    // Validates user input, and returns the choosen value
    std::optional<Drink> chooseDrink()
    {
        std::cout << "\n\n+========================( Choose any drink you want )============================+\n";
        // Iterate thorugh all the Drinks available and list them all
        for (int i = 0; i < static_cast<int>(Drink::COUNT); ++i)
        {
            Drink drink{static_cast<Drink>(i)};
            std::cout << "\t\t" << i << "  " << toStringDrink(drink) << '\n';
        }

        // Prompt user for their choice
        int drink{};
        std::cout << "\n Choose a drink of your choice: ";
        std::cin >> drink;

        // Check possible Out of Bound
        if (drink < static_cast<int>(Drink::COUNT))
            return static_cast<Drink>(drink);
        else
            return std::nullopt;
    }

    // Display all the available Dessert, prompt user to choose one,
    // Validates user input, and returns the choosen value
    std::optional<Dessert> chooseDessert()
    {
        std::cout << "\n\n+========================( Choose the Dessert you want )==========================+\n";
        // Iterate through all the available Desserts and list it to the user
        for (int i = 0; i < static_cast<int>(Dessert::COUNT); ++i)
        {
            Dessert dessert = static_cast<Dessert>(i);
            std::cout << "\t\t " << i << "  " << toStringDessert(dessert) << '\n';
        }

        // Prompt user for their choice
        int dessert{};
        std::cout << "\n Enter your choice ( Please Enter corresponding number ) : ";
        std::cin >> dessert;

        // If choice not Out of Bound return choice, Else return NULL.
        if (dessert < static_cast<int>(Dessert::COUNT))
            return static_cast<Dessert>(dessert);
        else
            return std::nullopt;
    }

    // Display all the available Payment Method, prompt user to choose one,
    // Validates user input, and returns the choosen value
    PaymentMethod choosePaymentMethod()
    {
        while (true)
        {
            std::cout << "\n\n+========================( Choose the Payment Methods you like )==================+\n";
            // Iterate through every Payment Method available and display them to user
            for (int i = 0; i < static_cast<int>(PaymentMethod::COUNT); ++i)
            {
                PaymentMethod paymentMethod{static_cast<PaymentMethod>(i)};
                std::cout << "\t\t " << i << "  " << toStringPaymentMethod(paymentMethod) << '\n';
            }

            // Ask user to choose the Payment Method
            std::cout << "\nEnter the option ( Please choose the corresponding number ) : ";
            int paymentMethod{};
            std::cin >> paymentMethod;

            // Check for input error and Out of Bound checks
            // If error re-read the Payment Method, Else return the choosed Payment Method
            if (std::cin.fail() || paymentMethod >= static_cast<int>(PaymentMethod::COUNT) || paymentMethod < 0)
            {
                std::cerr << "Invalid Payment Method! Please Choose Among The Options!\n";
                std::cin.clear();
                std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
                continue;
            }
            else
                return static_cast<PaymentMethod>(paymentMethod);
        }
    }
}
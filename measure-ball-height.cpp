/*
Program to simulate a ball being dropped off of a tower. To start, the user is asked for the height of the tower in meters. 
Assuming normal gravity (9.8 m/s2), and that the ball has no initial velocity (the ball is stationary at start). Have the 
program  output the height of the ball above the ground after 0, 1, 2, 3, 4, and 5 seconds. The ball should not go underneath
the ground (height 0). 
*/
#include <iostream>


// Get the Tower height form the user.
double getHeight() {
    std::cout << "Enter the towerHeight of the tower in meters: ";
    double towerHeight{};
    std::cin >> towerHeight;

    return towerHeight;
}

// Display the distance the ball travelled over the time.
void displayDistance(double towerHeight, double time) {
    std::cout << "The towerHeight of the tower at " << time << "sec is: " << towerHeight << " meters." << std::endl;
}

void calculateDistance(double towerHeight, double initialVelocity, double gravity) {
    /*
    Calculate the distance the ball travelled when given Tower Height, acceleration
    due to gravity, initial velocity and time.
    */
    double totalTime{5.0};

    for (double time = 0.0; time <= totalTime; time++)
    {
        double fallDistance = (gravity * time * time) / 2;
        double ballHeight = towerHeight - fallDistance;
        if (ballHeight >= 0)
            displayDistance(ballHeight, time);
        else if (ballHeight < 0)
            std::cout << "Ball has hit the ground" << std::endl;
        else
            return;
    }
}

int main() {
    double gravity{9.8};
    double initialVelocity{0.0};
    double towerHeight{getHeight()};

    // Calculate distance;
    calculateDistance(towerHeight, initialVelocity, gravity);

    return 0;
}
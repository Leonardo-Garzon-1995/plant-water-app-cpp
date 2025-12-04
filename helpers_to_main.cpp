#include <iostream>
#include <string>

// This functions can be used in main.cpp
// Dont forget to include helpers_to_main.cpp when compiling
std::string needs_water(int days, bool is_succulent) {
    if (!is_succulent && days > 3) {
        return "Time to water your plant.";
    } else if (is_succulent && days <= 15) {
        return "Don't water yet.";
    } else if (is_succulent && days > 15) {
        return "Time to water your succulent.";
    } else {
        return "no need to water";
    }
}

int get_days_input() {
    int days;
    std::cout << "Number of days since last watering: ";
    std::cin >> days;
    return days;
}

bool get_is_succulent_input() {
    bool is_succulent;
    std::cout << "Is the plant succulent? (y/n): ";
    std::string input;
    std::cin >> input;
    if (input == "yes" || input == "y" || input == "Y" || input == "Yes") {
        is_succulent = true;
    } else {
        is_succulent = false;
    }
    return is_succulent;
}
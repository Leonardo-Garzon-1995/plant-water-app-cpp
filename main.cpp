#include <iostream>

// Using modular reference
// This functions are defined in helpers_to_main.cpp
std::string needs_water(int days, bool is_succulent);
int get_days_input();
bool get_is_succulent_input();

int main() {

    std::cout << "Welcome to the Plant Watering App!" << std::endl;
    std::cout << "----------------------------------" << std::endl;

    int days = get_days_input();
    bool is_succulent = get_is_succulent_input();

    std::string result = needs_water(days, is_succulent);

    std::cout << result << std::endl;
    return 0;

}
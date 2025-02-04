#include "CustomItem.h"

CustomItem::CustomItem(std::string size) : IceCreamItem(size) {
    if (size == "small") {
        price = 3.00;
    } else if (size == "medium") {
        price = 5.00;
    } else if (size == "large") {
        price = 6.50;
    }
}

CustomItem::~CustomItem() {}

void CustomItem::addTopping(std::string topping) {
    toppings[topping]++;
}

std::string CustomItem::composeItem() {
    std::ostringstream oss;
    oss << "Custom Size: " << size << "\n";
    oss << "Toppings:\n";
    
    for (const auto& pair : toppings) {
        oss << pair.first << ": " << pair.second << " oz\n";
    }

    oss << "Price: $" << std::fixed << std::setprecision(2) << getPrice() << "\n"; 
    return oss.str();
}

double CustomItem::getPrice() {
    double total = price;
    for (const auto& pair : toppings) {
        total += pair.second * 0.40;
    }
    return total;
}


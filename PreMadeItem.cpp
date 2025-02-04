#include "PreMadeItem.h"

PreMadeItem::PreMadeItem(std::string name, std::string size) : IceCreamItem(size), name(name) {
    if (size == "small") {
        price = 4.00;
    } else if (size == "medium") {
        price = 6.00;
    } else if (size == "large") {
        price = 7.50;
    }
}

PreMadeItem::~PreMadeItem() {}

std::string PreMadeItem::composeItem() {
    std::ostringstream oss;
    oss << "Pre-made Size: " << size << "\n";
    oss << "Pre-made Item: " << name << "\n";
    oss << "Price: $" << std::fixed << std::setprecision(2) << getPrice() << "\n"; 
    return oss.str();
}

double PreMadeItem::getPrice() {
    return price;
}


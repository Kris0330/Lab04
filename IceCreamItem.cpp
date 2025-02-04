#include "IceCreamItem.h"

IceCreamItem::IceCreamItem(std::string size) : price(0.0), size(size) {}  


double IceCreamItem::getPrice() { 
    return price;
}


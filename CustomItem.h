#ifndef CUSTOMITEM_H
#define CUSTOMITEM_H

#include "IceCreamItem.h"
#include <map>
#include <string>
#include <sstream>
#include <iomanip>

class CustomItem : public IceCreamItem {
public:
    CustomItem(std::string size);
    virtual ~CustomItem();

    void addTopping(std::string topping);
    virtual std::string composeItem() override;  // ✅ 移除 const，匹配基類
    virtual double getPrice() override;         // ✅ 移除 const，匹配基類

private:
    std::map<std::string, int> toppings;
};

#endif


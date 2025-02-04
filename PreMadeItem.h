#ifndef PREMADEITEM_H
#define PREMADEITEM_H

#include "IceCreamItem.h"
#include <string>
#include <sstream>
#include <iomanip>

class PreMadeItem : public IceCreamItem {
public:
    PreMadeItem(std::string name, std::string size);
    virtual ~PreMadeItem();

    virtual std::string composeItem() override;  // ✅ 移除 const，匹配基類
    virtual double getPrice() override;         // ✅ 移除 const，匹配基類

private:
    std::string name;
};

#endif


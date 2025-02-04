#include "IceCreamItem.h"

IceCreamItem::IceCreamItem(std::string size) : price(0.0), size(size) {}  // ✅ 修正初始化順序


double IceCreamItem::getPrice() {  // ✅ 移除 const，確保與 .h 檔案一致
    return price;
}


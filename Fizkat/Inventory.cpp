#include "Inventory.hpp"

bool InventoryItem::operator<(const InventoryItem& other) const {
    return inventoryId() < other.inventoryId();
}

std::ostream& operator<<(std::ostream& out, const InventoryItem& item) {
    return out << item.inventoryId() << " " << item.name();
}


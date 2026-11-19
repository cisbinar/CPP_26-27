#pragma once

#include <string>
#include "Inventory.hpp"
#include "Errors.hpp"

class Transport : public InventoryItem {
public:
    Transport(const std::string& id, const std::string& name, int score);

    
};

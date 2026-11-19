#pragma once

#include <iostream>
#include <string>

//просто бахнули абстрактный класс, по сути пустышка, через которую потом все и будем строить 
class InventoryItem {
public:
    virtual std::string inventoryId() const = 0;
    virtual std::string name() const = 0;
    virtual std::string describe() const = 0;
    virtual ~InventoryItem() {}

    bool operator<(const InventoryItem& other) const;
    friend std::ostream& operator<<(std::ostream& out, const InventoryItem& item);
};


//аналогичная темка с первым
class EnergyConsumer {
public:
    virtual double dailyEnergy() const = 0;
    virtual ~EnergyConsumer() {}
};


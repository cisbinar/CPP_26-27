#pragma once

#include <string>
#include "Inventory.hpp"
#include "Errors.hpp"

class Transport : public InventoryItem {
public:
    Transport(const std::string& id, const std::string& name, int score);
    std::string inventoryId() const;
    std::string name() const;
    int noviceScore() const;

private:     
    std::string id_;
    std::string name_;
    int noviceScore_;
};


class Bike : public Transport {
public:
    Bike(const std::string& id, const std::string& name, int score);

    std::string describe() const;
};


class Scooter : public Transport, public EnergyConsumer {
public:
    Scooter(const std::string& id, const std::string& name, double energy, int score);

    double dailyEnergy() const;
    std::string describe() const;

private:
    double energy_;
};

class EBike : public Transport, public EnergyConsumer {
public:
    EBike(const std::string& id, const std::string& name, double energy, int score);

    double dailyEnergy() const override;
    std::string describe() const override;

private:
    double energy_;
};

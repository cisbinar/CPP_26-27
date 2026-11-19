#include "Transport.hpp"

Transport::Transport(const std::string& id, const std::string& name, int score)
    : id_(id), name_(name), noviceScore_(score) {
    if ((id.empty()) or (name.empty()) or (noviceScore_ < 1) or (noviceScore_ > 10)) {
        throw IncorrectArg();
    }
}

std::string Transport::inventoryId() const {
    return id_;
}

std::string Transport::name() const {
    return name_;
}

int Transport::noviceScore() const {
    return noviceScore_;
}


Bike::Bike(const std::string& id, const std::string& name, int score) 
    : Transport(id, name, score) {}

std::string Bike::describe() const {
    return "Bike " + inventoryId() + " " + name() + " " + std::to_string(noviceScore());
}

Scooter::Scooter(const std::string& id, const std::string& name, double energy, int score)
    : Transport(id, name, score), energy_(energy) {
        if (energy < 0.0) {
            throw IncorrectArg();
        }
    }

std::string Scooter::describe() const {
    return "Scooter " + inventoryId() + " " + name() +  " " + std::to_string(noviceScore()) + " " + std::to_string(energy_);
}

double Scooter::dailyEnergy() const {
    return energy_;
}

EBike::EBike(const std::string& id, const std::string& name, double energy, int score)
    : Transport(id, name, score), energy_(energy) {
        if (energy < 0.0) {
            throw IncorrectArg();
        }
    }

std::string EBike::describe() const {
    return "EBike " + inventoryId() + " " + name() + " " + std::to_string(noviceScore()) + " " + std::to_string(energy_);
}

double EBike::dailyEnergy() const {
    return energy_;
}

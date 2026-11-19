#pragma once

#include <stdexcept>
#include <string>

class FleetError : public std::runtime_error {
public:
    FleetError(const std::string& msg)         //сюда прилетает сообщение от двух других классов ошибок, поэтому выбирает че выводить
        : std::runtime_error(msg) {}
};
 
class InspectionError : public FleetError { 
public:
    InspectionError()
        : FleetError("inspection rejected") {}
};

class IncorrectArg : public FleetError {
public: 
    IncorrectArg()
        : FleetError("incorrect arguments") {}
};

#include "ID.h"

ID::ID(const std::string& full_ID) {
    setFull_ID(full_ID);
}

std::string ID::getFull_ID() const {
    return full_ID;
}

void ID::setFull_ID(const std::string& full_ID) {
    this->full_ID = full_ID;
}

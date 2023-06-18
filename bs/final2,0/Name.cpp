#include "Name.h"

Name::Name(const std::string& full_name) {
    setFull_Name(full_name);
}

std::string Name::getFull_Name() const {
    return full_name;
}

void Name::setFull_Name(const std::string& full_name) {
    this->full_name = full_name;
}

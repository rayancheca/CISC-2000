#include "UnivMember.h"
#include <iostream>

UnivMember::UnivMember(const ID& id, const std::string& type) : id(id), type(type) {}

std::string UnivMember::getType() const {
    return type;
}

ID UnivMember::getID() const {
    return id;
}

void UnivMember::printID() const {
    std::cout << "ID: " << id.get_ID() << ", Type: " << type << std::endl;
}

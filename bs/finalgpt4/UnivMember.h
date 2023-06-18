#ifndef UNIVMEMBER_H
#define UNIVMEMBER_H

#include "ID.h"
#include <string>

class UnivMember {
public:
    UnivMember(const ID& id, const std::string& type);

    std::string getType() const;
    ID getID() const;
    void printID() const;

private:
    ID id;
    std::string type;
};

#endif

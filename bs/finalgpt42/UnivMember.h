#ifndef UNIVMEMBER_H
#define UNIVMEMBER_H

#include "ID.h"
#include <string>

class UnivMember {
public:
    explicit UnivMember(const std::string& type);

    std::string getType() const;
    ID getID() const;
    void printID() const;

private:
    ID id;
    std::string type;
};

#endif // UNIVMEMBER_H

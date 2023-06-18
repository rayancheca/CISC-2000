#ifndef ID_H
#define ID_H

#include <string>

class ID {
private:
    std::string full_ID;

public:
    ID() {}
    ID(const std::string& full_ID);

    std::string getFull_ID() const;
    void setFull_ID(const std::string& full_ID);
};

#endif // ID_H

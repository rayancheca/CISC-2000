#ifndef NAME_H
#define NAME_H

#include <string>

class Name {
private:
    std::string full_name;

public:
    Name() {}
    Name(const std::string& full_name);

    std::string getFull_Name() const;
    void setFull_Name(const std::string& full_name);
};

#endif // NAME_H

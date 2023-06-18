#ifndef ID_H
#define ID_H

#include <string>

class ID {
public:
    explicit ID(const std::string& idValue = "");
    void set_ID(const std::string& idValue);
    std::string get_ID() const;

private:
    std::string m_idValue; // changed from 'id'
};

#endif // ID_H

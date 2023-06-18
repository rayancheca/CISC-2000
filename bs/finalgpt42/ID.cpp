#include "ID.h"

ID::ID(const std::string& idValue)
    : m_idValue(idValue)
{
}

void ID::set_ID(const std::string& idValue)
{
    m_idValue = idValue;
}

std::string ID::get_ID() const
{
    return m_idValue;
}

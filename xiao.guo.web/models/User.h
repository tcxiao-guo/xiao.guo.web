#ifndef USER_H
#define USER_H
#include <drogon/drogon.h>

using namespace drogon;
class User : public orm::DbObject<User>
{
public:
    User() = default;
}

#endif //USER_H
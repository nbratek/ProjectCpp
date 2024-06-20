#include "userprofile.h"

UserProfile::UserProfile()
    : name(""), age(0), gender("")
{
}

QString UserProfile::getName() const
{
    return name;
}

void UserProfile::setName(const QString &value)
{
    name = value;
}

int UserProfile::getAge() const
{
    return age;
}

void UserProfile::setAge(int value)
{
    age = value;
}

QString UserProfile::getGender() const
{
    return gender;
}

void UserProfile::setGender(const QString &value)
{
    gender = value;
}

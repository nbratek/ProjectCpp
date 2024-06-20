
#ifndef USERPROFILE_H
#define USERPROFILE_H

#include <QString>

class UserProfile
{
public:
    UserProfile();
    QString getName() const;
    void setName(const QString &value);

    int getAge() const;
    void setAge(int value);

    QString getGender() const;
    void setGender(const QString &value);

private:
    QString name;
    int age;
    QString gender;
};

#endif // USERPROFILE_H

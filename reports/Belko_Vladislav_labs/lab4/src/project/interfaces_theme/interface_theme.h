#ifndef INTERFACE_THEME_H
#define INTERFACE_THEME_H

#include <QObject>
#include <QString>
#include <QPalette>

class Interface_theme
{
public:
    virtual QPalette changeInterfase() = 0;
};

Q_DECLARE_INTERFACE(Interface_theme, "calc.Interface_theme");

#endif // INTERFACE_THEME_H

#ifndef SETTINGBASE
#define SETTINGBASE

#include <QObject>
#include "SettingsPage.h"

class SettingBase
{
    Q_OBJECT

public:
    explicit SettingBase(QObject* parent = nullptr);
};

#endif // SETTINGBASE


#ifndef SETTINGSPAGE
#define SETTINGSPAGE

#include <QWidget>
#include <vector>
#include "SettingBase.h"

class SettingsPage
{
    Q_OBJECT

public:
    explicit SettingsPage(const QString & title, QObject* parent = nullptr);
    void Add(const SettingsBase & setting);
    const QString & Title() const;

private:
    QString mTitle;
    std::vector<SettingBase> mSettings;
};

#endif // SETTINGSPAGE


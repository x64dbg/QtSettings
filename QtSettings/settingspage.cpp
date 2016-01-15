#include "SettingsPage.h"

SettingsPage::SettingsPage(const QString & title, QObject* parent)
    : mTitle(title),
      QObject(parent)
{
}

void SettingsPage::Add(const SettingBase & setting)
{
    mSettings.push_back(setting);
}

const QString & SettingsPage::Title() const
{
    return mTitle;
}

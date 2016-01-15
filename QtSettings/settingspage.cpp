#include "SettingsPage.h"
#include <QLabel>

SettingsPage::SettingsPage(const QString & title, QObject* parent)
    : mTitle(title),
      QObject(parent)
{
}

void SettingsPage::Add(const SettingBase* setting)
{
    mSettings.push_back(setting);
}

void SettingsPage::Build(QTabWidget* tabWidget) const
{
    auto tab = new QWidget(tabWidget);
    auto layout = new QVBoxLayout(tab);
    tab->setLayout(layout);

    for(auto setting : mSettings)
        setting->Build(layout);

    layout->addItem(new QSpacerItem(20, 40, QSizePolicy::Minimum, QSizePolicy::Expanding));
    tabWidget->addTab(tab, mTitle);
}

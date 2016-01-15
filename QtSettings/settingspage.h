#ifndef SETTINGSPAGE
#define SETTINGSPAGE

#include <QtCore>
#include <QLayout>
#include <QTabWidget>
#include <vector>
#include "SettingBase.h"

class SettingsPage : public QObject
{
    Q_OBJECT

public:
    explicit SettingsPage(const QString & title, QObject* parent = nullptr);
    void Add(const SettingBase* setting);
    void Build(QTabWidget* tabWidget) const;

private:
    QString mTitle;
    std::vector<const SettingBase*> mSettings;
};

#endif // SETTINGSPAGE


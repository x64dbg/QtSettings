#ifndef SETTINGBASE
#define SETTINGBASE

#include <QLayout>

class SettingBase : public QObject
{
    Q_OBJECT

public:
    explicit SettingBase(QObject* parent = nullptr) : QObject(parent) {}
    virtual ~SettingBase() {}
    virtual void Build(QLayout* layout) const = 0;
};

#endif // SETTINGBASE


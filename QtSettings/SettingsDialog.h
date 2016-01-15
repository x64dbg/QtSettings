#ifndef SETTINGSDIALOG_H
#define SETTINGSDIALOG_H

#include <QDialog>
#include "SettingsPage.h"

namespace Ui
{
class SettingsDialog;
}

class SettingsDialog : public QDialog
{
    Q_OBJECT

public:
    explicit SettingsDialog(QWidget* parent = nullptr);
    ~SettingsDialog();

private:
    void addPage(const SettingsPage & page);

    Ui::SettingsDialog* ui;
};

#endif // SETTINGSDIALOG_H

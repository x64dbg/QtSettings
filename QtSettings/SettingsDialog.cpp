#include "SettingsDialog.h"
#include "ui_SettingsDialog.h"
#include <QVBoxLayout>
#include <QLabel>

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
    setupSettings();
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}

void SettingsDialog::setupSettings()
{
    SettingsPage page1("Page 1", this);
    addPage(page1);

    SettingsPage page2("Page 2", this);
    addPage(page2);
}

void SettingsDialog::addPage(const SettingsPage & page)
{
    page.Build(ui->tabWidget);
}

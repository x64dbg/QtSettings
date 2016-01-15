#include "SettingsDialog.h"
#include "ui_SettingsDialog.h"
#include <QVBoxLayout>
#include <QLabel>

SettingsDialog::SettingsDialog(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::SettingsDialog)
{
    ui->setupUi(this);
}

SettingsDialog::~SettingsDialog()
{
    delete ui;
}

void SettingsDialog::addPage(const SettingsPage & page)
{
    auto tab = new QWidget(ui->tabWidget);
    auto layout = new QVBoxLayout(tab);
    tab->setLayout(layout);

    layout->addWidget(new QLabel("test label", layout));

    ui->tabWidget->addTab(tab,)
}

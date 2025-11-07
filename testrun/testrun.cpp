#include "testrun.h"
#include "ui_testrun.h"

testrun::testrun(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::testrun)
{
    ui->setupUi(this);
}

testrun::~testrun()
{
    delete ui;
}

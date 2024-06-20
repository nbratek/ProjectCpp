#include "calendardialog.h"
#include <QVBoxLayout>
#include <QHBoxLayout>
#include <QFormLayout>

CalendarDialog::CalendarDialog(QWidget *parent) : QDialog(parent) {
    setupUi();
    //connectSignals();
}

void CalendarDialog::setupUi() {
    QVBoxLayout *layout = new QVBoxLayout(this);
    calendar = new QCalendarWidget(this);
    layout->addWidget(calendar);

    descriptionEdit = new QLineEdit(this);
    layout->addWidget(descriptionEdit);

    dateTimeEdit = new QDateTimeEdit(this);
    dateTimeEdit->setCalendarPopup(true);
    dateTimeEdit->setDateTime(QDateTime::currentDateTime());
    layout->addWidget(dateTimeEdit);

    saveButton = new QPushButton("Save", this);
    connect(saveButton, &QPushButton::clicked, this, &CalendarDialog::accept);
    layout->addWidget(saveButton);
}

QDateTime CalendarDialog::getSelectedDateTime() const {
    return dateTimeEdit->dateTime();
}

QString CalendarDialog::getEventDescription() const {
    return descriptionEdit->text();
}

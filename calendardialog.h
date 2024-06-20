#include <QDialog>
#include <QCalendarWidget>
#include <QLineEdit>
#include <QPushButton>
#include <QDateTimeEdit>
#include <QVBoxLayout>

class CalendarDialog : public QDialog {
    Q_OBJECT

public:
    explicit CalendarDialog(QWidget *parent = nullptr);
    QDateTime getSelectedDateTime() const;
    QString getEventDescription() const;

private:
    QCalendarWidget *calendar;
    QLineEdit *descriptionEdit;
    QDateTimeEdit *dateTimeEdit;
    QPushButton *saveButton;
    void setupUi();
};

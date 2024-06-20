#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include "qframe.h"
#include "userprofile.h"
#include <QMainWindow>
#include <QDate>


QT_BEGIN_NAMESPACE
namespace Ui {
class MainWindow;
}
QT_END_NAMESPACE

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    MainWindow(QWidget *parent = nullptr);
    ~MainWindow();

private slots:
    void on_pulse_spinbox_valueChanged(int arg1);

    void on_blood_pressure_spinbox_valueChanged(int arg1);

    void on_sugar_level_spinbox_valueChanged(int arg1);

    void on_add_data_clicked();

    void on_read_data_clicked();

    void saveDataToFile(const QString &filename, int value);

    QVector<int> readDataFromFile(const QString &filename);

    double calculateAverage(const QVector<int>& data);


    void updatePlot(const QVector<int> &data, QFrame *frame);

    void on_delete_data_button_clicked();

    void clearDataFromFile(const QString &filename);

    void on_save_profile_clicked();

    void on_load_profile_clicked();
    void generateHealthReport();

    void on_openCalendarButton_clicked();


private:
    Ui::MainWindow *ui;
    int pulse = 80;
    int blood_pressure = 100;
    int sugar_level = 90;
    int number = 0;
    UserProfile userProfile;
};

#endif // HEALTHSYSTEM_H

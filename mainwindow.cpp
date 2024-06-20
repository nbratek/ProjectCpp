#include "mainwindow.h"
#include "ui_healthsystem.h"
#include "userprofile.h"
#include <QFile>
#include <QTextStream>
#include <QVector>
#include <QVBoxLayout>
#include <QChartView>
#include <QLineSeries>
#include <QMessageBox>
#include <QDate>
#include "calendardialog.h"
#include <healthevent.h>

#include <numeric>

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)

{
    ui->setupUi(this);
    connect(ui->save_profile_button, SIGNAL(clicked()), this, SLOT(on_save_profile_clicked()));
    connect(ui->load_profile_button, SIGNAL(clicked()), this, SLOT(on_load_profile_clicked()));
    connect(ui->generateReportButton, &QPushButton::clicked, this, &MainWindow::generateHealthReport);


}

MainWindow::~MainWindow()
{
    delete ui;
}

void saveUserProfile();
void loadUserProfile();

double calculateAverage(const QVector<int> &data) {
    if (data.isEmpty()) {
        return 0.0;
    }
    int sum = std::accumulate(data.begin(), data.end(), 0);
    return static_cast<double>(sum) / data.size();
}

void MainWindow::on_pulse_spinbox_valueChanged(int arg1)
{
    pulse = arg1;
}

void MainWindow::on_blood_pressure_spinbox_valueChanged(int arg1)
{
    blood_pressure = arg1;
}

void MainWindow::on_sugar_level_spinbox_valueChanged(int arg1)
{
    sugar_level = arg1;
}

void MainWindow::on_add_data_clicked()
{
    saveDataToFile("pulse.txt", pulse);
    saveDataToFile("blood_pressure.txt", blood_pressure);
    saveDataToFile("sugar_level.txt", sugar_level);
}

void MainWindow::on_read_data_clicked()
{
    QVector<int> pulseData = readDataFromFile("pulse.txt");
    QVector<int> bloodPressureData = readDataFromFile("blood_pressure.txt");
    QVector<int> sugarLevelData = readDataFromFile("sugar_level.txt");
    ui->pulse_frame->layout();
    updatePlot(pulseData, ui->pulse_frame);
    number++;
    updatePlot(bloodPressureData, ui->blood_pressure_frame);
    number++;
    updatePlot(sugarLevelData, ui->sugar_level_frame);
    double pulseAverage = calculateAverage(pulseData);
    double bloodPressureAverage = calculateAverage(bloodPressureData);
    double sugarLevelAverage = calculateAverage(sugarLevelData);
    QString text1 = QString("Pulse Average: %1").arg(pulseAverage);
    QString text2 = QString("Blood Pressure Average: %1").arg(bloodPressureAverage);
    QString text3 = QString("Sugar Level Average: %1").arg(sugarLevelAverage);
    QString text4, text5, text6;
    if(pulseAverage >= 60 && pulseAverage <= 100){
        text4 = QString("✅ Average pulse rate normal");
    }
    if(pulseAverage < 60){
        text4 = QString("❌ Average pulse rate BELOW normal");
    }
    if(pulseAverage > 100){
        text4 = QString("❌ Average pulse rate ABOVE normal");
    }
    if(bloodPressureAverage >= 100 && bloodPressureAverage <= 139){
        text5 = QString("✅ Average blood pressure rate normal");
    }
    if(bloodPressureAverage < 100){
        text5 = QString("❌ Average blood pressure rate BELOW normal");
    }
    if(bloodPressureAverage > 139){
        text5 = QString("❌ Average blood pressure rate ABOVE normal");
    }
    if(sugarLevelAverage >= 70 && sugarLevelAverage <= 99){
        text6 = QString("✅ Average sugar level rate normal");
    }
    if(sugarLevelAverage < 70){
        text6 = QString("❌ Average sugar level rate BELOW normal");
    }
    if(sugarLevelAverage > 99){
        text6 = QString("❌ Average sugar level rate ABOVE normal");
    }

    QString message = text1 + "\n" + text2 + "\n" + text3 + "\n\n" + text4 + "\n" + text5 + "\n" + text6;

    QMessageBox::information(this, "Averages", message);
}

void MainWindow::saveDataToFile(const QString &filename, int value)
{
    QFile file(filename);
    if (file.open(QIODevice::Append | QIODevice::Text))
    {
        QTextStream out(&file);
        out << value << "\n";
    }
}

QVector<int> MainWindow::readDataFromFile(const QString &filename)
{
    QVector<int> data;
    QFile file(filename);
    if (file.open(QIODevice::ReadOnly | QIODevice::Text))
    {
        QTextStream in(&file);
        while (!in.atEnd())
        {
            QString line = in.readLine();
            data.append(line.toInt());
        }
    }
    return data;
}

void MainWindow::updatePlot(const QVector<int> &data, QFrame *frame)
{
    QLayout *existingLayout = frame->layout();
    if (existingLayout)
    {
        QLayoutItem *child;
        while ((child = existingLayout->takeAt(0)) != nullptr)
        {
            delete child->widget();
            delete child;
        }
        delete existingLayout;
    }

    QLineSeries *series = new QLineSeries();
    for (int i = 0; i < data.size(); ++i) {
        series->append(i, data[i]);
    }

    QChart *chart = new QChart();
    chart->addSeries(series);
    chart->createDefaultAxes();
    if (number == 0) chart->setTitle("Pulse");
    if (number == 1) chart->setTitle("Blood Pressure");
    if (number == 2) chart->setTitle("Sugar Level");
    chart->legend()->hide();

    QChartView *chartView = new QChartView(chart);
    chartView->setRenderHint(QPainter::Antialiasing);

    QVBoxLayout *layout = new QVBoxLayout(frame);
    layout->addWidget(chartView);
    frame->setLayout(layout);
}

void MainWindow::on_delete_data_button_clicked()
{
    clearDataFromFile("pulse.txt");
    clearDataFromFile("blood_pressure.txt");
    clearDataFromFile("sugar_level.txt");
}

void MainWindow::clearDataFromFile(const QString &filename)
{
    QFile file(filename);
    if (file.open(QIODevice::WriteOnly | QIODevice::Truncate | QIODevice::Text))
    {
        file.close();
    }
}

void MainWindow::on_save_profile_clicked()
{

    QFile file("userprofile.txt");
    if (!file.open(QIODevice::WriteOnly | QIODevice::Text))
        return;

    QTextStream out(&file);
    out << "Name: " << ui->name_lineedit->text() << "\n";
    out << "Age: " << ui->age_spinbox->value() << "\n";
    out << "Gender: " << ui->gender_combobox->currentText() << "\n";

    file.close();
    QMessageBox::information(this, "Success", "Profile saved successfully.");
}

void MainWindow::on_load_profile_clicked()
{
    QFile file("userprofile.txt");
    if (file.open(QIODevice::ReadOnly | QIODevice::Text)) {
        QTextStream in(&file);
        QString name = in.readLine();
        int age = in.readLine().toInt();
        QString gender = in.readLine();

        userProfile.setName(name);
        userProfile.setAge(age);
        userProfile.setGender(gender);

        ui->name_lineedit->setText(userProfile.getName());
        ui->age_spinbox->setValue(userProfile.getAge());
        ui->gender_combobox->setCurrentText(userProfile.getGender());

        file.close();
        QMessageBox::information(this, "Profile Loaded", "User profile has been loaded successfully.");
    } else {
        QMessageBox::warning(this, "Error", "Failed to load user profile.");
    }
}


double MainWindow::calculateAverage(const QVector<int> &data) {
    if (data.isEmpty()) return 0.0;
    int sum = std::accumulate(data.begin(), data.end(), 0);
    return static_cast<double>(sum) / data.size();
}


void MainWindow::generateHealthReport()
{
    QString name = ui->name_lineedit->text();
    int age = ui->age_spinbox->value();
    QString gender = ui->gender_combobox->currentText();

    QVector<int> pulseData = readDataFromFile("pulse.txt");
    QVector<int> bloodPressureData = readDataFromFile("blood_pressure.txt");
    QVector<int> sugarLevelData = readDataFromFile("sugar_level.txt");

    double averagePulse = calculateAverage(pulseData);
    double averageBloodPressure = calculateAverage(bloodPressureData);
    double averageSugarLevel = calculateAverage(sugarLevelData);

    QString report = "Raport zdrowotny\n";
    report += "-------------------------\n";
    report += "Dane użytkownika:\n";
    report += "Imię: " + name + "\n";
    report += "Wiek: " + QString::number(age) + "\n";
    report += "Płeć: " + gender + "\n";
    report += "-------------------------\n";
    report += "Aktualne wartości:\n";
    report += "Tętno: " + QString::number(pulseData.last()) + " bpm\n";
    report += "Ciśnienie krwi: " + QString::number(bloodPressureData.last()) + " mmHg\n";
    report += "Poziom cukru: " + QString::number(sugarLevelData.last()) + " mg/dl\n";
    report += "\nŚrednie wartości:\n";
    report += "Średnie tętno: " + QString::number(averagePulse) + " bpm\n";
    report += "Średnie ciśnienie krwi: " + QString::number(averageBloodPressure) + " mmHg\n";
    report += "Średni poziom cukru: " + QString::number(averageSugarLevel) + " mg/dl\n";
    report += "-------------------------\n";
    report += "Generowany: " + QDate::currentDate().toString("yyyy-MM-dd");

    QFile file("HealthReport.txt");
    if (file.open(QIODevice::WriteOnly | QIODevice::Text)) {
        QTextStream out(&file);
        out << report;
        file.close();
        QMessageBox::information(this, "Raport Zdrowotny", "Raport zdrowotny został wygenerowany pomyślnie.");
    } else {
        QMessageBox::critical(this, "Błąd", "Nie można zapisać raportu zdrowotnego.");
    }
}

void MainWindow::on_openCalendarButton_clicked() {
    CalendarDialog *dialog = new CalendarDialog(this);
    if (dialog->exec() == QDialog::Accepted) {
        QFile file("events.txt");
        if (!file.open(QIODevice::Append | QIODevice::Text)) {
            qDebug() << "Cannot open file for writing";
            return;
        }

        QTextStream out(&file);
        out << dialog->getSelectedDateTime().date().toString("yyyy-MM-dd") << " "
            << dialog->getSelectedDateTime().time().toString("HH:mm") << " "
            << dialog->getEventDescription() << "\n";
        file.close();
    }
    delete dialog;
}

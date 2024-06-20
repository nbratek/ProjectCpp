/****************************************************************************
** Meta object code from reading C++ file 'healthsystem.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.7.1)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../../healthsystem.h"
#include <QtCore/qmetatype.h>
#include <QtCore/QList>

#include <QtCore/qtmochelpers.h>

#include <memory>


#include <QtCore/qxptype_traits.h>
#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'healthsystem.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.7.1. It"
#error "cannot be used with the include files from this version of Qt."
#error "(The moc has changed too much.)"
#endif

#ifndef Q_CONSTINIT
#define Q_CONSTINIT
#endif

QT_WARNING_PUSH
QT_WARNING_DISABLE_DEPRECATED
QT_WARNING_DISABLE_GCC("-Wuseless-cast")
namespace {

#ifdef QT_MOC_HAS_STRINGDATA
struct qt_meta_stringdata_CLASSMainWindowENDCLASS_t {};
constexpr auto qt_meta_stringdata_CLASSMainWindowENDCLASS = QtMocHelpers::stringData(
    "MainWindow",
    "on_pulse_spinbox_valueChanged",
    "",
    "arg1",
    "on_blood_pressure_spinbox_valueChanged",
    "on_sugar_level_spinbox_valueChanged",
    "on_add_data_clicked",
    "on_read_data_clicked",
    "saveDataToFile",
    "filename",
    "value",
    "readDataFromFile",
    "QList<int>",
    "calculateAverage",
    "data",
    "updatePlot",
    "QFrame*",
    "frame",
    "on_delete_data_button_clicked",
    "clearDataFromFile",
    "on_save_profile_clicked",
    "on_load_profile_clicked",
    "generateHealthReport",
    "on_openCalendarButton_clicked"
);
#else  // !QT_MOC_HAS_STRINGDATA
#error "qtmochelpers.h not found or too old."
#endif // !QT_MOC_HAS_STRINGDATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMainWindowENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
      15,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    1,  104,    2, 0x08,    1 /* Private */,
       4,    1,  107,    2, 0x08,    3 /* Private */,
       5,    1,  110,    2, 0x08,    5 /* Private */,
       6,    0,  113,    2, 0x08,    7 /* Private */,
       7,    0,  114,    2, 0x08,    8 /* Private */,
       8,    2,  115,    2, 0x08,    9 /* Private */,
      11,    1,  120,    2, 0x08,   12 /* Private */,
      13,    1,  123,    2, 0x08,   14 /* Private */,
      15,    2,  126,    2, 0x08,   16 /* Private */,
      18,    0,  131,    2, 0x08,   19 /* Private */,
      19,    1,  132,    2, 0x08,   20 /* Private */,
      20,    0,  135,    2, 0x08,   22 /* Private */,
      21,    0,  136,    2, 0x08,   23 /* Private */,
      22,    0,  137,    2, 0x08,   24 /* Private */,
      23,    0,  138,    2, 0x08,   25 /* Private */,

 // slots: parameters
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void, QMetaType::Int,    3,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString, QMetaType::Int,    9,   10,
    0x80000000 | 12, QMetaType::QString,    9,
    QMetaType::Double, 0x80000000 | 12,   14,
    QMetaType::Void, 0x80000000 | 12, 0x80000000 | 16,   14,   17,
    QMetaType::Void,
    QMetaType::Void, QMetaType::QString,    9,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MainWindow::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMainWindowENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMainWindowENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMainWindowENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MainWindow, std::true_type>,
        // method 'on_pulse_spinbox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_blood_pressure_spinbox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_sugar_level_spinbox_valueChanged'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'on_add_data_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_read_data_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'saveDataToFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        QtPrivate::TypeAndForceComplete<int, std::false_type>,
        // method 'readDataFromFile'
        QtPrivate::TypeAndForceComplete<QVector<int>, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'calculateAverage'
        QtPrivate::TypeAndForceComplete<double, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<int> &, std::false_type>,
        // method 'updatePlot'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QVector<int> &, std::false_type>,
        QtPrivate::TypeAndForceComplete<QFrame *, std::false_type>,
        // method 'on_delete_data_button_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'clearDataFromFile'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        QtPrivate::TypeAndForceComplete<const QString &, std::false_type>,
        // method 'on_save_profile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_load_profile_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'generateHealthReport'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_openCalendarButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MainWindow::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MainWindow *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->on_pulse_spinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 1: _t->on_blood_pressure_spinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 2: _t->on_sugar_level_spinbox_valueChanged((*reinterpret_cast< std::add_pointer_t<int>>(_a[1]))); break;
        case 3: _t->on_add_data_clicked(); break;
        case 4: _t->on_read_data_clicked(); break;
        case 5: _t->saveDataToFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<int>>(_a[2]))); break;
        case 6: { QList<int> _r = _t->readDataFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1])));
            if (_a[0]) *reinterpret_cast< QList<int>*>(_a[0]) = std::move(_r); }  break;
        case 7: { double _r = _t->calculateAverage((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1])));
            if (_a[0]) *reinterpret_cast< double*>(_a[0]) = std::move(_r); }  break;
        case 8: _t->updatePlot((*reinterpret_cast< std::add_pointer_t<QList<int>>>(_a[1])),(*reinterpret_cast< std::add_pointer_t<QFrame*>>(_a[2]))); break;
        case 9: _t->on_delete_data_button_clicked(); break;
        case 10: _t->clearDataFromFile((*reinterpret_cast< std::add_pointer_t<QString>>(_a[1]))); break;
        case 11: _t->on_save_profile_clicked(); break;
        case 12: _t->on_load_profile_clicked(); break;
        case 13: _t->generateHealthReport(); break;
        case 14: _t->on_openCalendarButton_clicked(); break;
        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 7:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        case 8:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 1:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QFrame* >(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< QList<int> >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MainWindow::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MainWindow::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMainWindowENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MainWindow::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 15)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 15;
    }
    return _id;
}
QT_WARNING_POP

/****************************************************************************
** Meta object code from reading C++ file 'jeu.h'
**
** Created by: The Qt Meta Object Compiler version 68 (Qt 6.6.0)
**
** WARNING! All changes made in this file will be lost!
*****************************************************************************/

#include "../../projet/jeu.h"
#include <QtGui/qtextcursor.h>
#include <QtCore/qmetatype.h>

#if __has_include(<QtCore/qtmochelpers.h>)
#include <QtCore/qtmochelpers.h>
#else
QT_BEGIN_MOC_NAMESPACE
#endif


#include <memory>

#if !defined(Q_MOC_OUTPUT_REVISION)
#error "The header file 'jeu.h' doesn't include <QObject>."
#elif Q_MOC_OUTPUT_REVISION != 68
#error "This file was generated using the moc from 6.6.0. It"
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
struct qt_meta_stringdata_CLASSMaClasseENDCLASS_t {};
static constexpr auto qt_meta_stringdata_CLASSMaClasseENDCLASS = QtMocHelpers::stringData(
    "MaClasse",
    "donnerCarte",
    "",
    "jouer",
    "Carte*",
    "A",
    "on_PlayButton_clicked",
    "on_PlayButton_3_clicked",
    "on_PlayButton_5_clicked"
);
#else  // !QT_MOC_HAS_STRING_DATA
struct qt_meta_stringdata_CLASSMaClasseENDCLASS_t {
    uint offsetsAndSizes[18];
    char stringdata0[9];
    char stringdata1[12];
    char stringdata2[1];
    char stringdata3[6];
    char stringdata4[7];
    char stringdata5[2];
    char stringdata6[22];
    char stringdata7[24];
    char stringdata8[24];
};
#define QT_MOC_LITERAL(ofs, len) \
    uint(sizeof(qt_meta_stringdata_CLASSMaClasseENDCLASS_t::offsetsAndSizes) + ofs), len 
Q_CONSTINIT static const qt_meta_stringdata_CLASSMaClasseENDCLASS_t qt_meta_stringdata_CLASSMaClasseENDCLASS = {
    {
        QT_MOC_LITERAL(0, 8),  // "MaClasse"
        QT_MOC_LITERAL(9, 11),  // "donnerCarte"
        QT_MOC_LITERAL(21, 0),  // ""
        QT_MOC_LITERAL(22, 5),  // "jouer"
        QT_MOC_LITERAL(28, 6),  // "Carte*"
        QT_MOC_LITERAL(35, 1),  // "A"
        QT_MOC_LITERAL(37, 21),  // "on_PlayButton_clicked"
        QT_MOC_LITERAL(59, 23),  // "on_PlayButton_3_clicked"
        QT_MOC_LITERAL(83, 23)   // "on_PlayButton_5_clicked"
    },
    "MaClasse",
    "donnerCarte",
    "",
    "jouer",
    "Carte*",
    "A",
    "on_PlayButton_clicked",
    "on_PlayButton_3_clicked",
    "on_PlayButton_5_clicked"
};
#undef QT_MOC_LITERAL
#endif // !QT_MOC_HAS_STRING_DATA
} // unnamed namespace

Q_CONSTINIT static const uint qt_meta_data_CLASSMaClasseENDCLASS[] = {

 // content:
      12,       // revision
       0,       // classname
       0,    0, // classinfo
       5,   14, // methods
       0,    0, // properties
       0,    0, // enums/sets
       0,    0, // constructors
       0,       // flags
       0,       // signalCount

 // slots: name, argc, parameters, tag, flags, initial metatype offsets
       1,    0,   44,    2, 0x0a,    1 /* Public */,
       3,    1,   45,    2, 0x0a,    2 /* Public */,
       6,    0,   48,    2, 0x08,    4 /* Private */,
       7,    0,   49,    2, 0x08,    5 /* Private */,
       8,    0,   50,    2, 0x08,    6 /* Private */,

 // slots: parameters
    QMetaType::Void,
    QMetaType::Bool, 0x80000000 | 4,    5,
    QMetaType::Void,
    QMetaType::Void,
    QMetaType::Void,

       0        // eod
};

Q_CONSTINIT const QMetaObject MaClasse::staticMetaObject = { {
    QMetaObject::SuperData::link<QMainWindow::staticMetaObject>(),
    qt_meta_stringdata_CLASSMaClasseENDCLASS.offsetsAndSizes,
    qt_meta_data_CLASSMaClasseENDCLASS,
    qt_static_metacall,
    nullptr,
    qt_incomplete_metaTypeArray<qt_meta_stringdata_CLASSMaClasseENDCLASS_t,
        // Q_OBJECT / Q_GADGET
        QtPrivate::TypeAndForceComplete<MaClasse, std::true_type>,
        // method 'donnerCarte'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'jouer'
        QtPrivate::TypeAndForceComplete<bool, std::false_type>,
        QtPrivate::TypeAndForceComplete<Carte *, std::false_type>,
        // method 'on_PlayButton_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PlayButton_3_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>,
        // method 'on_PlayButton_5_clicked'
        QtPrivate::TypeAndForceComplete<void, std::false_type>
    >,
    nullptr
} };

void MaClasse::qt_static_metacall(QObject *_o, QMetaObject::Call _c, int _id, void **_a)
{
    if (_c == QMetaObject::InvokeMetaMethod) {
        auto *_t = static_cast<MaClasse *>(_o);
        (void)_t;
        switch (_id) {
        case 0: _t->donnerCarte(); break;
        case 1: { bool _r = _t->jouer((*reinterpret_cast< std::add_pointer_t<Carte*>>(_a[1])));
            if (_a[0]) *reinterpret_cast< bool*>(_a[0]) = std::move(_r); }  break;
        case 2: _t->on_PlayButton_clicked(); break;

        default: ;
        }
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        switch (_id) {
        default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
        case 1:
            switch (*reinterpret_cast<int*>(_a[1])) {
            default: *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType(); break;
            case 0:
                *reinterpret_cast<QMetaType *>(_a[0]) = QMetaType::fromType< Carte* >(); break;
            }
            break;
        }
    }
}

const QMetaObject *MaClasse::metaObject() const
{
    return QObject::d_ptr->metaObject ? QObject::d_ptr->dynamicMetaObject() : &staticMetaObject;
}

void *MaClasse::qt_metacast(const char *_clname)
{
    if (!_clname) return nullptr;
    if (!strcmp(_clname, qt_meta_stringdata_CLASSMaClasseENDCLASS.stringdata0))
        return static_cast<void*>(this);
    return QMainWindow::qt_metacast(_clname);
}

int MaClasse::qt_metacall(QMetaObject::Call _c, int _id, void **_a)
{
    _id = QMainWindow::qt_metacall(_c, _id, _a);
    if (_id < 0)
        return _id;
    if (_c == QMetaObject::InvokeMetaMethod) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    } else if (_c == QMetaObject::RegisterMethodArgumentMetaType) {
        if (_id < 5)
            qt_static_metacall(this, _c, _id, _a);
        _id -= 5;
    }
    return _id;
}
QT_WARNING_POP
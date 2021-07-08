#ifndef MAINCLASS_GLOBAL_H
#define MAINCLASS_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(MAINCLASS_LIBRARY)
#  define MAINCLASS_EXPORT Q_DECL_EXPORT
#else
#  define MAINCLASS_EXPORT Q_DECL_IMPORT
#endif

#endif // MAINCLASS_GLOBAL_H

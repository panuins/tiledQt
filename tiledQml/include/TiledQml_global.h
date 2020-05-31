#ifndef TILEDQML_GLOBAL_H
#define TILEDQML_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(TILEDQML_LIBRARY)
#  define TILEDQML_EXPORT Q_DECL_EXPORT
#else
#  define TILEDQML_EXPORT Q_DECL_IMPORT
#endif

#endif // TILEDQML_GLOBAL_H

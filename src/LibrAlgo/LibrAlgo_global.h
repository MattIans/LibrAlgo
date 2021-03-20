#ifndef LIBRALGO_GLOBAL_H
#define LIBRALGO_GLOBAL_H

#include <QtCore/qglobal.h>

#if defined(LIBRALGO_LIBRARY)
#  define LIBRALGO_EXPORT Q_DECL_EXPORT
#else
#  define LIBRALGO_EXPORT Q_DECL_IMPORT
#endif

#endif // LIBRALGO_GLOBAL_H

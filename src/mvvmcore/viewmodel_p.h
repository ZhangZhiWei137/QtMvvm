#ifndef QTMVVM_VIEWMODEL_P_H
#define QTMVVM_VIEWMODEL_P_H

#include "qtmvvmcore_global.h"
#include "viewmodel.h"

namespace QtMvvm {

class ViewModelPrivate
{
public:
	ViewModelPrivate();

	bool deleteOnClose;
};

}

#endif // QTMVVM_VIEWMODEL_P_H

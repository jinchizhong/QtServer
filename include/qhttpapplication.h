#ifndef QHTTPAPPLICATION_H
#define QHTTPAPPLICATION_H

#include "qtserverglobal.h"
#include <QCoreApplication>
#include "qhttpservice.h"

QT_BEGIN_NAMESPACE

class Q_SERVER_EXPORT QHttpApplication : public QHttpService
{
	Q_OBJECT
public:
	QHttpApplication(int & argc, char ** argv);

public:
	inline int exec()
	{
		return coreApp.exec();
	}

public:
	QCoreApplication coreApp;
};

QT_END_NAMESPACE

#endif

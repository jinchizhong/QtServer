#ifndef QHTTPSERVICE_H
#define QHTTPSERVICE_H

#include "qtserverglobal.h"
#include "qhttprouter.h"

QT_BEGIN_NAMESPACE

class Q_SERVER_EXPORT QHttpService : public QObject, public QHttpRouter
{
	Q_OBJECT
public:
	QHttpService(QObject * parent = 0);

	bool listen(int port, bool abort_if_failed = true);

protected slots:
	void onNewConnection();
};

QT_END_NAMESPACE

#endif

#ifndef INTERFACES_ICMDHANDLER_H
#define INTERFACES_ICMDHANDLER_H

#include <QString>
#include <QJsonObject>
#include <QVector>
#include <iwebsocketserver.h>
#include <cmd_input_def.h>
#include <model_request_data.h>

class ICmdHandler {
	public:
        virtual std::string cmd() = 0;
        virtual bool accessUnauthorized() = 0;
        virtual bool accessUser() = 0;
        virtual bool accessTester() = 0;
        virtual bool accessAdmin() = 0;
        virtual QString description() = 0;
        virtual const std::vector<CmdInputDef> &inputs() = 0;
        virtual QStringList errors() = 0;
        virtual void handle(QWebSocket *pClient, IWebSocketServer *pWebSocketServer, QString m, QJsonObject obj) = 0;
};

#endif // INTERFACES_ICMDHANDLER_H
#ifndef CMD_SERVERINFO_HANDLER_H
#define CMD_SERVERINFO_HANDLER_H

#include <iserver.h>

class CmdServerInfoHandler : public ICmdHandler {
	
	public:
		CmdServerInfoHandler();
        virtual std::string cmd();
        virtual std::string description();
        virtual const ModelCommandAccess &access();
        virtual const std::vector<CmdInputDef> &inputs();
        virtual void handle(ModelRequest *pRequest);
		
	private:
        QString TAG;
        ModelCommandAccess m_modelCommandAccess;
        std::vector<CmdInputDef> m_vInputs;
};

#endif // CMD_SERVERINFO_HANDLER_H

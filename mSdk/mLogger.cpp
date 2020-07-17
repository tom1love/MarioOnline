#include "mLogger.h"

INITIALIZE_EASYLOGGINGPP
gLogger* gLogger::inst = nullptr;
gLogger::gLogger(const char* name, const char* conf)
{
    el::Configurations fileConf(conf);
    m_logger = el::Loggers::getLogger(name);
    el::Loggers::reconfigureLogger(m_logger, fileConf);
}
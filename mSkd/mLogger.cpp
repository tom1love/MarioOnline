#include "zLogger.h"
/*
#include <time.h>
#include <stdarg.h>
#include <sys/stat.h>
*/

gLogger::gLogger( const char* name /*= "the log"*/ )
{
	m_logger = el::Loggers::getLogger(name);
}
/*
const std::string& gLogger::getName()
{
	return m_logger->id();
}

void gLogger::setConfigure(const std::string& confname)
{
	el::Configurations conf(confname);
	el::Loggers::reconfigureLogger(m_logger, conf);
}

void gLogger::debug(std::initializer_list<std::string> il)
{
	m_logger->debug(il);
}

void gLogger::error(std::initializer_list<std::string> il)
{
	m_logger->error(il);
}

void gLogger::info(std::initializer_list<std::string> il)
{
	m_logger->info(il);
}

void gLogger::fatal(std::initializer_list<std::string> il)
{
	m_logger->fatal(il);
}

void gLogger::warn(std::initializer_list<std::string> il)
{
	m_logger->warn(il);
}

void gLogger::trace(std::initializer_list<std::string> il)
{
	m_logger->trace(il);
}

void gLogger::verbose(int vlevel, std::initializer_list<std::string> il)
{
	m_logger->verbose(vlevel, il);
}
 */
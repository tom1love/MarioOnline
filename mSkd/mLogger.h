/**
 * \file 日志功能模块
 * \author pengfei.chen
 * \date 2020-07-03
 */

#ifndef _LOGGER_H_
#define _LOGGER_H_

//#include "zType.h"
#include "easylogging++.h"
#include <initializer_list>
#include <string>

class gLogger
{
public:
public:
	gLogger(const char* name);
/*
	const std::string& getName();
	void setConfigure(const std::string& confname);

	void debug(std::initializer_list<std::string> il);
	void error(std::initializer_list<std::string> il);
	void info(std::initializer_list<std::string> il);
	void fatal(std::initializer_list<std::string> il);
	void warn(std::initializer_list<std::string> il);
	void trace(std::initializer_list<std::string> il);
	void verbose(int vlevel, std::initializer_list<std::string> il);
 */

public:
	el::Logger* m_logger;
};

//////////////////////////////
//! for the test
/*
zLogger logger("server_log");
logger->addConsoleLog();
logger->setLevel(zLogger::TRACE_INT);
int i = 99;
logger->trace("this is a test: %d", i);
logger->debug("this is a test: %d", i);
logger->info("this is a test: %d", i);
logger->warn("this is a test: %d", i);
logger->error("this is a test: %d", i);
logger->fatal("this is a test: %d", i);
*/

#endif


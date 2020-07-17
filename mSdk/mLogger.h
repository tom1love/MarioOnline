/**
 * \file 日志功能模块
 * \author pengfei.chen
 * \date 2020-07-03
 */

#ifndef _LOGGER_H_
#define _LOGGER_H_

#include <initializer_list>
#include <string>
#include <strstream>
#include <iostream>
#include "easylogging++.h"


class gLogger
{
public:
public:
	gLogger(const char* name = "game", const char* conf = "mylog.conf");

public:
    static gLogger* getInst() {
        if (!inst) {
            inst = new gLogger();
        }
        return inst;
    }

    template <typename T, typename... Args>
    inline void info(const char* s, const T& value, const Args&... args) {
        std::ostrstream os;
        os << s << value << std::ends;
        m_logger->info(os.str(), args...);
    }

    inline void info(const char* s) {
        m_logger->info(s);
    }
    el::Logger* getHandle() const { return m_logger; }
private:
    static gLogger* inst;

public:
	el::Logger* m_logger;
};

#endif


#pragma once

#include <ctime>
#include <string>
#include <map>
#include <iomanip>
#include <iostream>
#include <ostream>

enum LogType { LOG, WARN, ERROR };

class Logger {
public:
    static void write(LogType type, std::string what);
    static void writeErr(std::string what, int exit);
    static void writeIf(LogType type, bool condition, std::string logtrue, std::string logfalse);
};

#include <CogniLogger/Logger.hpp>

void __print__(std::string prefix, std::string what) {
    std::time_t currentTime = std::time(nullptr);
    std::tm* localTime = std::localtime(&currentTime);

    std::ostringstream oss;
    oss << std::setfill('0') << std::setw(2) << localTime->tm_hour << ":" << std::setw(2) << localTime->tm_min << ":" << std::setw(2) << localTime->tm_sec;

    std::cout << prefix << oss.str() << " > " << what << std::endl;
}

void Logger::write(LogType type, std::string what) {
    static const std::map<LogType, std::string> logs = {
        { LOG,   "Log" },
        { WARN,  "Warn" },
        { ERROR, "Error" },
    };

    auto it = logs.find(type);

    __print__(it != logs.end() ? it->second : "Unknown", what);
}

void Logger::writeIf(LogType type, bool condition, std::string logtrue, std::string logfalse) {
    Logger::write(type, condition ? logtrue : logfalse);
}

void Logger::writeErr(std::string what, int exit) {
    Logger::write(LogType::ERROR, what);
    if (exit != -1) std::exit(exit);
}

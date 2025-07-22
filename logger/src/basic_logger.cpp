#include <log4cplus/logger.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/consoleappender.h>
#include <log4cplus/layout.h>
#include <log4cplus/loglevel.h>
#include <log4cplus/configurator.h>

using namespace log4cplus;
using namespace log4cplus::helpers;

int main() {
    // Initialize log4cplus
    BasicConfigurator config;
    config.configure();

    // Create a logger instance
    Logger logger = Logger::getInstance(LOG4CPLUS_TEXT("main"));

    // Log at different levels
    LOG4CPLUS_TRACE(logger, "This is TRACE level");
    LOG4CPLUS_DEBUG(logger, "This is DEBUG level");
    LOG4CPLUS_INFO(logger, "This is INFO level");
    LOG4CPLUS_WARN(logger, "This is WARN level");
    LOG4CPLUS_ERROR(logger, "This is ERROR level");
    LOG4CPLUS_FATAL(logger, "This is FATAL level");

    return 0;
}

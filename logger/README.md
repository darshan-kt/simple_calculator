## Build Steps
````
git clone https://github.com/darshan-kt/simple_calculator.git
cd simple_calculator/logger
mkdir build
cd build
cmake ..
make
./log4cplus_demo

````
---

````markdown
# 🔧 Log4cplus Integration in C++ Projects

`log4cplus` is a powerful logging library for C++ modeled after the popular `log4j` framework from Java. It brings structured, configurable, and scalable logging to modern C++ applications.

---

## 🚀 Why Use `log4cplus`?

Logging is essential for debugging, monitoring, and maintaining production-grade software. `log4cplus` provides:

- ✅ Fine-grained logging control (by module/class/function)
- ✅ Asynchronous and thread-safe logging
- ✅ Configurable via external files (no need to recompile)
- ✅ Multiple output options (console, file, rolling file, etc.)
- ✅ Pattern-based log formatting
- ✅ Support for log levels (TRACE, DEBUG, INFO, WARN, ERROR, FATAL)

---

## 📦 Key Features

- **Hierarchical loggers**: Log categories for modular control.
- **Appenders**: Output logs to files, console, or custom targets.
- **Layouts**: Define log message formatting.
- **Log levels**: Control verbosity in different environments.
- **Thread safety**: Built-in synchronization for multi-threaded apps.

---

## 🧪 Sample Usage

```cpp
#include <log4cplus/logger.h>
#include <log4cplus/loggingmacros.h>
#include <log4cplus/configurator.h>

using namespace log4cplus;

int main() {
    BasicConfigurator config;
    config.configure();

    Logger logger = Logger::getInstance(LOG4CPLUS_TEXT("main"));
    LOG4CPLUS_INFO(logger, "Application started");
}
````

---

## ⚙️ Key APIs

| API                                         | Purpose                         |
| ------------------------------------------- | ------------------------------- |
| `Logger::getInstance("name")`               | Creates or retrieves a logger   |
| `LOG4CPLUS_INFO(logger, msg)`               | Logs a message at INFO level    |
| `BasicConfigurator::configure()`            | Sets up default console logging |
| `PropertyConfigurator::doConfigure("file")` | Loads logging config from file  |

---

## 📘 Example: `log4cplus.properties`

```properties
log4cplus.rootLogger=DEBUG, file

log4cplus.appender.file=log4cplus::RollingFileAppender
log4cplus.appender.file.File=app.log
log4cplus.appender.file.MaxFileSize=1MB
log4cplus.appender.file.MaxBackupIndex=3
log4cplus.appender.file.layout=log4cplus::PatternLayout
log4cplus.appender.file.layout.ConversionPattern=%d{%Y-%m-%d %H:%M:%S} %-5p %c - %m%n
```

---

## 🧩 When Should You Use `log4cplus`?

Ideal for:

* Large C++ applications with multiple modules
* Services requiring persistent logging
* Debugging and diagnostics in production
* Scenarios needing different log levels or outputs

---

## ✅ Recommended For

* Backend systems / microservices
* Embedded and real-time C++ systems
* GUI/desktop applications
* Multi-threaded applications

---

## 📄 License

`log4cplus` is licensed under the Apache License 2.0. See [LICENSE](https://github.com/log4cplus/log4cplus/blob/master/LICENSE) for more details.

---

## 📎 References

* [log4cplus GitHub](https://github.com/log4cplus/log4cplus)
* [log4cplus Documentation](https://log4cplus.sourceforge.net/)

```

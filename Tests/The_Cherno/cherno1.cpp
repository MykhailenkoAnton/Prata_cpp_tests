#include <iostream>

class Log
{
public:
    enum Level
    {
        LevelError = 0, LevelWarning, LevelInfo
    };

private:
    Level m_LogLevel = LevelInfo;
public:
    void SetLeve(Level level)
    {
        m_LogLevel = level;
    }

    void Error(const char * massage)
    {
        if (m_LogLevel >= LevelError)
        {
            std::cout << "[ERROR]: " << massage << std::endl;
        }
    }
    
    void Warn(const char * massage)
    {
        if (m_LogLevel >= LevelWarning)
        {
            std::cout << "[WARNING]: " << massage << std::endl;
        }
    }

    void Info(const char * massage)
    {
        if (m_LogLevel >= LevelInfo)
        {
            std::cout << "[INFO]: " << massage << std::endl;
        }
    }
};

int main()
{
    Log log;
    log.SetLeve(Log::LevelError);
    log.Warn("MISTAKE");
    log.Error("MISTAKE");
    log.Info("MISTAKE");
    return 0;
}
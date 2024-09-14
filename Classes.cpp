#include <iostream>

void externalPrint();

class Log {
public:
    enum Level {
        LevelError = 0, LevelWarning, LevelInfo
    };

    const int LogLevelError = 0;
    const int LogLevelWarning = 1;
    const int LogLevelInfo = 2;
private:
    Level m_LogLevel = LevelInfo;
public:
    void SetLevel(Level level) {
        m_LogLevel = level;
    }

    void Error(const char* message) {
        if (m_LogLevel >= LevelError) {
            std::cout << "[ERROR]: " << message << std::endl;
        }
    }

    void Warn(const char* message) {
        if (m_LogLevel >= LevelWarning) {
            std::cout << "[WARNING]: " << message << std::endl;
        }
    }

    void Info(const char* message) {
        if (m_LogLevel >= LevelInfo) {
            std::cout << "[INFO]: " << message << std::endl;
        }
    }
};

class Player {
public:
    int x, y;
    int speed;

    void Move(int xa, int ya) {
        x += xa * speed;
        y += ya * speed;
    }
};

struct Entity {
    int x, y;

    void Print() {
        std::cout << x << ", " << y << std::endl;
    }
};

enum Example : unsigned char {
    A = 5, B, C
};

int a = 0;
int b = 1;
int c = 2;

int main() {
    Example value = B;

    if (value == 1) {

    }

    Entity e;
    e.x = 2;
    e.y = 3;

    Entity e1;
    e1.x = 5;
    e1.y = 8;

    e.Print();
    e1.Print();

    Log log;
    log.SetLevel(Log::LevelError);
    log.Warn("Hello!");

    log.Info("Hello");

    log.Error("Hello");

    Player player;
    player.x = 5;
    player.Move(1, -1);

    externalPrint();

    std::cin.get();
}

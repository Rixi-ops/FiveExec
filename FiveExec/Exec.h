#ifndef LUA_EXECUTOR_H
#define LUA_EXECUTOR_H

#include <string>

class LuaState {
public:
    LuaState();
    ~LuaState();

    void Initialize();
    void LoadScript(const std::string& script);
    void Execute();
};

class LuaExecutor {
public:
    LuaExecutor();
    ~LuaExecutor();

    void RunScript(const std::string& script);
    bool IsReady() const;
};

#endif
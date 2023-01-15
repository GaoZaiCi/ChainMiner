/**
 * @file  MinecraftScriptTelemetryLogger.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class MinecraftScriptTelemetryLogger.
 *
 */
class MinecraftScriptTelemetryLogger {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MINECRAFTSCRIPTTELEMETRYLOGGER
public:
    class MinecraftScriptTelemetryLogger& operator=(class MinecraftScriptTelemetryLogger const &) = delete;
    MinecraftScriptTelemetryLogger(class MinecraftScriptTelemetryLogger const &) = delete;
    MinecraftScriptTelemetryLogger() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1995117819
     */
    virtual ~MinecraftScriptTelemetryLogger();
    /**
     * @vftbl  1
     * @symbol ?onPluginDiscovery@MinecraftScriptTelemetryLogger@@UEAAXAEBVScriptPluginResult@@@Z
     * @hash   -527728846
     */
    virtual void onPluginDiscovery(class ScriptPluginResult const &);
    /**
     * @vftbl  2
     * @symbol ?onPluginRun@MinecraftScriptTelemetryLogger@@UEAAXAEBVScriptPluginResult@@V?$duration@_JU?$ratio@$00$0PECEA@@std@@@chrono@std@@@Z
     * @hash   -885765944
     */
    virtual void onPluginRun(class ScriptPluginResult const &, class std::chrono::duration<__int64, struct std::ratio<1, 1000000>>);
    /**
     * @vftbl  3
     * @symbol ?onDebuggerListen@MinecraftScriptTelemetryLogger@@UEAAXXZ
     * @hash   -1069045555
     */
    virtual void onDebuggerListen();
    /**
     * @vftbl  4
     * @symbol ?onDebuggerConnect@MinecraftScriptTelemetryLogger@@UEAAXXZ
     * @hash   -2023914384
     */
    virtual void onDebuggerConnect();
    /**
     * @symbol ??0MinecraftScriptTelemetryLogger@@QEAA@AEAVIMinecraftEventing@@_N@Z
     * @hash   73216229
     */
    MCAPI MinecraftScriptTelemetryLogger(class IMinecraftEventing &, bool);

};
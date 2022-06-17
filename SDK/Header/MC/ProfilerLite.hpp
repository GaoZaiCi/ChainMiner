// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ProfilerLite {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PROFILERLITE
public:
    class ProfilerLite& operator=(class ProfilerLite const &) = delete;
    ProfilerLite(class ProfilerLite const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PROFILERLITE
#endif
    MCAPI ProfilerLite();
    MCAPI void calculateAndSetServerTickTimes(class std::chrono::time_point<struct std::chrono::steady_clock, class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>>>);
    MCAPI class std::chrono::duration<__int64, struct std::ratio<1, 1000000000>> getServerTickTime() const;
    MCAPI ~ProfilerLite();
    MCAPI static class std::thread::id sEmptyThreadID;

//private:


private:
    MCAPI static class ProfilerLite gProfilerLiteInstance;


};
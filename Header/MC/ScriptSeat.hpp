// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptSeat {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTSEAT
public:
    class ScriptSeat& operator=(class ScriptSeat const &) = delete;
    ScriptSeat(class ScriptSeat const &) = delete;
    ScriptSeat() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTSEAT
#endif
    MCAPI static class Scripting::ClassBindingBuilder<struct SeatDescription> bind(struct Scripting::Version);



};
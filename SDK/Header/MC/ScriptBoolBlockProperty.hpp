// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptBoolBlockProperty {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTBOOLBLOCKPROPERTY
public:
    class ScriptBoolBlockProperty& operator=(class ScriptBoolBlockProperty const &) = delete;
    ScriptBoolBlockProperty(class ScriptBoolBlockProperty const &) = delete;
    ScriptBoolBlockProperty() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTBOOLBLOCKPROPERTY
#endif
    MCAPI ScriptBoolBlockProperty(class ScriptBoolBlockProperty &&);
    MCAPI ScriptBoolBlockProperty(std::string, class ItemState const &, std::vector<bool>, class Scripting::StrongTypedObjectHandle<class ScriptBlockPermutation>);
    MCAPI class Scripting::Result<bool> getState() const;
    MCAPI class ScriptBoolBlockProperty & operator=(class ScriptBoolBlockProperty &&);
    MCAPI class Scripting::Result<void> setState(bool);
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptBoolBlockProperty> bind(struct Scripting::Version);



};
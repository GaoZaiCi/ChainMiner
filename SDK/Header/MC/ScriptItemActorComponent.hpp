// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ScriptActorComponent.hpp"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ScriptItemActorComponent : public ScriptActorComponent {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTITEMACTORCOMPONENT
public:
    class ScriptItemActorComponent& operator=(class ScriptItemActorComponent const &) = delete;
    ScriptItemActorComponent(class ScriptItemActorComponent const &) = delete;
    ScriptItemActorComponent() = delete;
#endif


public:
    /*0*/ virtual ~ScriptItemActorComponent();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTITEMACTORCOMPONENT
#endif
    MCAPI class Scripting::Result<class Scripting::StrongTypedObjectHandle<class ScriptItemStack>> getItemStack() const;
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptItemActorComponent> bind(struct Scripting::Version);



};
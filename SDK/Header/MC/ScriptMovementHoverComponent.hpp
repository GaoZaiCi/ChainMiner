// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "MovementScriptActorComponent.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ScriptMovementHoverComponent : public MovementScriptActorComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SCRIPTMOVEMENTHOVERCOMPONENT
public:
    class ScriptMovementHoverComponent& operator=(class ScriptMovementHoverComponent const &) = delete;
    ScriptMovementHoverComponent(class ScriptMovementHoverComponent const &) = delete;
    ScriptMovementHoverComponent() = delete;
#endif


public:
    /*0*/ virtual ~ScriptMovementHoverComponent();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_SCRIPTMOVEMENTHOVERCOMPONENT
#endif
    MCAPI static class Scripting::ClassBindingBuilder<class ScriptMovementHoverComponent> bind(struct Scripting::Version);



};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class AgentCommandComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_AGENTCOMMANDCOMPONENT
public:
    class AgentCommandComponent& operator=(class AgentCommandComponent const &) = delete;
    AgentCommandComponent(class AgentCommandComponent const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_AGENTCOMMANDCOMPONENT
#endif
    MCAPI AgentCommandComponent();
    MCAPI bool addCommand(std::unique_ptr<class AgentCommands::Command>);
    MCAPI std::unique_ptr<class AgentCommands::Command> const & getCurrentCommand() const;
    MCAPI void initFromDefinition(class Actor &);
    MCAPI void setCurrentCommand(std::unique_ptr<class AgentCommands::Command>);



};
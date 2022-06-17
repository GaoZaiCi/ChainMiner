// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct ActorAliasDescription {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ACTORALIASDESCRIPTION
public:
    ActorAliasDescription(struct ActorAliasDescription const &) = delete;
    ActorAliasDescription() = delete;
#endif

public:
    MCAPI struct AliasInfoDescription const * getAliasInfo(std::string const &) const;
    MCAPI struct ActorAliasDescription & operator=(struct ActorAliasDescription const &);
    MCAPI void parse(class Json::Value &, bool);

protected:

private:

};
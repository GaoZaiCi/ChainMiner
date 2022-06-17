// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "JsonUtil.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PlaySoundResponse {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PLAYSOUNDRESPONSE
public:
    class PlaySoundResponse& operator=(class PlaySoundResponse const &) = delete;
    PlaySoundResponse(class PlaySoundResponse const &) = delete;
    PlaySoundResponse() = delete;
#endif


public:
    /*0*/ virtual ~PlaySoundResponse();
    /*1*/ virtual std::string const & getName() const;
    /*2*/ virtual void executeAction(class RenderParams &) const;
    /*3*/ virtual void buildSchema(class std::shared_ptr<class JsonUtil::JsonSchemaObjectNode<class JsonUtil::EmptyClass, struct EventResponseCollection>> &, class Factory<class EventResponse> const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PLAYSOUNDRESPONSE
#endif
    MCAPI static std::string const NameID;



};
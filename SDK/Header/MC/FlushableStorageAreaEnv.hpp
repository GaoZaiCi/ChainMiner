// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Core.hpp"
#include "TransactionalWorldBlockTarget.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class FlushableStorageAreaEnv : public TransactionalWorldBlockTarget {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FLUSHABLESTORAGEAREAENV
public:
    class FlushableStorageAreaEnv& operator=(class FlushableStorageAreaEnv const &) = delete;
    FlushableStorageAreaEnv(class FlushableStorageAreaEnv const &) = delete;
    FlushableStorageAreaEnv() = delete;
#endif


public:
    /*0*/ virtual ~FlushableStorageAreaEnv();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_FLUSHABLESTORAGEAREAENV
    MCVAPI void flushToPermanentStorage();
#endif
    MCAPI FlushableStorageAreaEnv(class leveldb::Env *, class std::shared_ptr<class Core::FileStorageArea>);



};
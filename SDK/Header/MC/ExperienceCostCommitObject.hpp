// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

class ExperienceCostCommitObject {

#define AFTER_EXTRA

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EXPERIENCECOSTCOMMITOBJECT
public:
    class ExperienceCostCommitObject& operator=(class ExperienceCostCommitObject const &) = delete;
    ExperienceCostCommitObject(class ExperienceCostCommitObject const &) = delete;
    ExperienceCostCommitObject() = delete;
#endif


public:
    /*0*/ virtual ~ExperienceCostCommitObject();
    /*1*/ virtual bool append(class ContainerValidationCommitObject *);
    /*2*/ virtual bool canCommit(class ContainerScreenContext const &) const;
    /*3*/ virtual void commit(class ContainerScreenContext const &);
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_EXPERIENCECOSTCOMMITOBJECT
#endif
    MCAPI ExperienceCostCommitObject(int);



};
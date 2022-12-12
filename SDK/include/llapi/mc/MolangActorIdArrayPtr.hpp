/**
 * @file  MolangActorIdArrayPtr.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure MolangActorIdArrayPtr.
 *
 */
struct MolangActorIdArrayPtr {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_MOLANGACTORIDARRAYPTR
public:
    struct MolangActorIdArrayPtr& operator=(struct MolangActorIdArrayPtr const &) = delete;
    MolangActorIdArrayPtr(struct MolangActorIdArrayPtr const &) = delete;
    MolangActorIdArrayPtr() = delete;
#endif

public:
    /**
     * @hash   278825424
     * @symbol ??0MolangActorIdArrayPtr@@QEAA@V?$vector@UActorUniqueID@@V?$allocator@UActorUniqueID@@@std@@@std@@@Z
     */
    MCAPI MolangActorIdArrayPtr(std::vector<struct ActorUniqueID>);
    /**
     * @hash   1897471729
     * @symbol ??1MolangActorIdArrayPtr@@QEAA@XZ
     */
    MCAPI ~MolangActorIdArrayPtr();

};
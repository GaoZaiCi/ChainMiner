/**
 * @file  GossipTypeManager.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class GossipTypeManager.
 *
 */
class GossipTypeManager {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_GOSSIPTYPEMANAGER
public:
    class GossipTypeManager& operator=(class GossipTypeManager const &) = delete;
    GossipTypeManager(class GossipTypeManager const &) = delete;
    GossipTypeManager() = delete;
#endif

public:
    /**
     * @symbol ??0GossipTypeManager@@QEAA@AEBVLevelData@@@Z
     * @hash   2104210121
     */
    MCAPI GossipTypeManager(class LevelData const &);
    /**
     * @symbol ?readGossipData@GossipTypeManager@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   535775296
     */
    MCAPI void readGossipData(std::string const &);
    /**
     * @symbol ?shouldUseGossip@GossipTypeManager@@QEBA_NXZ
     * @hash   1561458294
     */
    MCAPI bool shouldUseGossip() const;
    /**
     * @symbol ?GOSSIP_VERSION@GossipTypeManager@@2VBaseGameVersion@@B
     * @hash   -2054297149
     */
    MCAPI static class BaseGameVersion const GOSSIP_VERSION;

};
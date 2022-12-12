/**
 * @file  LayEggGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "BaseMoveToGoal.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class LayEggGoal.
 *
 */
class LayEggGoal : public BaseMoveToGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LAYEGGGOAL
public:
    class LayEggGoal& operator=(class LayEggGoal const &) = delete;
    LayEggGoal(class LayEggGoal const &) = delete;
    LayEggGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~LayEggGoal();
    /**
     * @hash   1338156604
     * @vftbl  1
     * @symbol ?canUse@LayEggGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   1811011098
     * @vftbl  2
     * @symbol ?canContinueToUse@LayEggGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   -925063723
     * @vftbl  4
     * @symbol ?start@LayEggGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -1130520368
     * @vftbl  6
     * @symbol ?tick@LayEggGoal@@UEAAXXZ
     */
    virtual void tick();
    /**
     * @hash   -449213548
     * @vftbl  7
     * @symbol ?appendDebugInfo@LayEggGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @vftbl  8
     * @symbol __unk_vfn_8
     */
    virtual void __unk_vfn_8();
    /**
     * @vftbl  9
     * @symbol __unk_vfn_9
     */
    virtual void __unk_vfn_9();
    /**
     * @hash   1954777710
     * @vftbl  11
     * @symbol ?isValidTarget@LayEggGoal@@UEAA_NAEAVBlockSource@@AEBVBlockPos@@@Z
     */
    virtual bool isValidTarget(class BlockSource &, class BlockPos const &);
    /**
     * @hash   -907758914
     * @vftbl  14
     * @symbol ?_moveToBlock@LayEggGoal@@MEAAXXZ
     */
    virtual void _moveToBlock();
    /**
     * @hash   -937132760
     * @vftbl  17
     * @symbol ?findTargetBlock@LayEggGoal@@UEAA_NXZ
     */
    virtual bool findTargetBlock();
    /**
     * @hash   -2026273713
     * @symbol ??0LayEggGoal@@QEAA@AEAVMob@@MHHMAEBV?$vector@VItemDescriptor@@V?$allocator@VItemDescriptor@@@std@@@std@@AEBV?$vector@W4MaterialType@@V?$allocator@W4MaterialType@@@std@@@3@_N3MAEBVItemDescriptor@@AEBVActorDefinitionTrigger@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@3@@Z
     */
    MCAPI LayEggGoal(class Mob &, float, int, int, float, std::vector<class ItemDescriptor> const &, std::vector<enum MaterialType> const &, bool, bool, float, class ItemDescriptor const &, class ActorDefinitionTrigger const &, std::string const &);

//protected:
    /**
     * @hash   -355907754
     * @symbol ?_isTargetBlock@LayEggGoal@@IEBA_NAEBVBlockLegacy@@@Z
     */
    MCAPI bool _isTargetBlock(class BlockLegacy const &) const;
    /**
     * @hash   1245626179
     * @symbol ?_layEgg@LayEggGoal@@IEAAXAEBVBlockPos@@@Z
     */
    MCAPI void _layEgg(class BlockPos const &);

protected:

};
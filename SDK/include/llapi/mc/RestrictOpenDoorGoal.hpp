/**
 * @file  RestrictOpenDoorGoal.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class RestrictOpenDoorGoal.
 *
 */
class RestrictOpenDoorGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RESTRICTOPENDOORGOAL
public:
    class RestrictOpenDoorGoal& operator=(class RestrictOpenDoorGoal const &) = delete;
    RestrictOpenDoorGoal(class RestrictOpenDoorGoal const &) = delete;
    RestrictOpenDoorGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~RestrictOpenDoorGoal();
    /**
     * @hash   212072153
     * @vftbl  1
     * @symbol ?canUse@RestrictOpenDoorGoal@@UEAA_NXZ
     */
    virtual bool canUse();
    /**
     * @hash   -688859465
     * @vftbl  2
     * @symbol ?canContinueToUse@RestrictOpenDoorGoal@@UEAA_NXZ
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   916137506
     * @vftbl  4
     * @symbol ?start@RestrictOpenDoorGoal@@UEAAXXZ
     */
    virtual void start();
    /**
     * @hash   -554950206
     * @vftbl  5
     * @symbol ?stop@RestrictOpenDoorGoal@@UEAAXXZ
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol __unk_vfn_6
     */
    virtual void __unk_vfn_6();
    /**
     * @hash   -1447161993
     * @vftbl  7
     * @symbol ?appendDebugInfo@RestrictOpenDoorGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @hash   100787110
     * @symbol ??0RestrictOpenDoorGoal@@QEAA@AEAVMob@@@Z
     */
    MCAPI RestrictOpenDoorGoal(class Mob &);

};
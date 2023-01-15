/**
 * @file  BreedGoal.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BreedGoal.
 *
 */
class BreedGoal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BREEDGOAL
public:
    class BreedGoal& operator=(class BreedGoal const &) = delete;
    BreedGoal(class BreedGoal const &) = delete;
    BreedGoal() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   621979893
     */
    virtual ~BreedGoal();
    /**
     * @vftbl  1
     * @symbol ?canUse@BreedGoal@@UEAA_NXZ
     * @hash   732199977
     */
    virtual bool canUse();
    /**
     * @vftbl  2
     * @symbol ?canContinueToUse@BreedGoal@@UEAA_NXZ
     * @hash   503611815
     */
    virtual bool canContinueToUse();
    /**
     * @vftbl  3
     * @hash   -1314744573
     */
    virtual void __unk_vfn_3();
    /**
     * @vftbl  4
     * @hash   -1263526156
     */
    virtual void __unk_vfn_4();
    /**
     * @vftbl  5
     * @symbol ?stop@BreedGoal@@UEAAXXZ
     * @hash   -1698402990
     */
    virtual void stop();
    /**
     * @vftbl  6
     * @symbol ?tick@BreedGoal@@UEAAXXZ
     * @hash   1270861533
     */
    virtual void tick();
    /**
     * @vftbl  7
     * @symbol ?appendDebugInfo@BreedGoal@@UEBAXAEAV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1121708519
     */
    virtual void appendDebugInfo(std::string &) const;
    /**
     * @symbol ??0BreedGoal@@QEAA@AEAVMob@@M@Z
     * @hash   1917906811
     */
    MCAPI BreedGoal(class Mob &, float);

//private:
    /**
     * @symbol ?_isCloseEnoughToBreed@BreedGoal@@AEBA_NVVec3@@VVec2@@01@Z
     * @hash   871979802
     */
    MCAPI bool _isCloseEnoughToBreed(class Vec3, class Vec2, class Vec3, class Vec2) const;
    /**
     * @symbol ?_moveToFreePartner@BreedGoal@@AEBAPEAVMob@@XZ
     * @hash   1702024579
     */
    MCAPI class Mob * _moveToFreePartner() const;

private:

};
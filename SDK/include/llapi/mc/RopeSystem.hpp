/**
 * @file  RopeSystem.hpp
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
 * @brief MC class RopeSystem.
 *
 */
class RopeSystem {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ROPESYSTEM
public:
    class RopeSystem& operator=(class RopeSystem const &) = delete;
    RopeSystem(class RopeSystem const &) = delete;
#endif

public:
    /**
     * @symbol ??0RopeSystem@@QEAA@XZ
     * @hash   -955003971
     */
    MCAPI RopeSystem();
    /**
     * @symbol ?_initializePins@RopeSystem@@QEAAXAEBVVec3@@0@Z
     * @hash   1617556004
     */
    MCAPI void _initializePins(class Vec3 const &, class Vec3 const &);
    /**
     * @symbol ?cutAtPercent@RopeSystem@@QEAAXM@Z
     * @hash   -1327981164
     */
    MCAPI void cutAtPercent(float);
    /**
     * @symbol ?initialize@RopeSystem@@QEAAXAEBURopeParams@@@Z
     * @hash   -466563142
     */
    MCAPI void initialize(struct RopeParams const &);
    /**
     * @symbol ?isCut@RopeSystem@@QEBA_NXZ
     * @hash   -291431378
     */
    MCAPI bool isCut() const;
    /**
     * @symbol ?isDestroyed@RopeSystem@@QEBA_NXZ
     * @hash   1761172364
     */
    MCAPI bool isDestroyed() const;
    /**
     * @symbol ?queueTick@RopeSystem@@QEAAXAEAVBlockSource@@AEAV?$shared_ptr@VRopeSystem@@@std@@@Z
     * @hash   821382220
     */
    MCAPI void queueTick(class BlockSource &, class std::shared_ptr<class RopeSystem> &);
    /**
     * @symbol ??1RopeSystem@@QEAA@XZ
     * @hash   317034571
     */
    MCAPI ~RopeSystem();
    /**
     * @symbol ?sBucketLength@RopeSystem@@2MB
     * @hash   -1883576081
     */
    MCAPI static float const sBucketLength;
    /**
     * @symbol ?sEnabled@RopeSystem@@2_NA
     * @hash   1771784549
     */
    MCAPI static bool sEnabled;
    /**
     * @symbol ?sEpsilon@RopeSystem@@2MB
     * @hash   -1880386803
     */
    MCAPI static float const sEpsilon;

//private:
    /**
     * @symbol ?_cacheColliders@RopeSystem@@AEAA_NAEAVBlockSource@@@Z
     * @hash   2081633203
     */
    MCAPI bool _cacheColliders(class BlockSource &);
    /**
     * @symbol ?_finalizeBucket@RopeSystem@@AEAAXAEAUAABBBucket@@@Z
     * @hash   1679296157
     */
    MCAPI void _finalizeBucket(struct AABBBucket &);
    /**
     * @symbol ?_initializePins@RopeSystem@@AEAAXXZ
     * @hash   -740104776
     */
    MCAPI void _initializePins();
    /**
     * @symbol ?_integrate@RopeSystem@@AEAAXXZ
     * @hash   1685850781
     */
    MCAPI void _integrate();
    /**
     * @symbol ?_prepareAABBBuckets@RopeSystem@@AEAAXXZ
     * @hash   1438488684
     */
    MCAPI void _prepareAABBBuckets();
    /**
     * @symbol ?_propagateDistanceConstraint@RopeSystem@@AEAAMAEBVVec3@@AEAV2@M@Z
     * @hash   1014847904
     */
    MCAPI float _propagateDistanceConstraint(class Vec3 const &, class Vec3 &, float);
    /**
     * @symbol ?_pruneDenyList@RopeSystem@@AEAAXXZ
     * @hash   -1608656560
     */
    MCAPI void _pruneDenyList();
    /**
     * @symbol ?_pushRange@RopeSystem@@AEAAX_K0@Z
     * @hash   1945972991
     */
    MCAPI void _pushRange(unsigned __int64, unsigned __int64);
    /**
     * @symbol ?_resizeRope@RopeSystem@@AEAAXXZ
     * @hash   1791485504
     */
    MCAPI void _resizeRope();
    /**
     * @symbol ?_solveCollisions@RopeSystem@@AEAAM_N@Z
     * @hash   -1609171920
     */
    MCAPI float _solveCollisions(bool);
    /**
     * @symbol ?_solveDistanceConstraint@RopeSystem@@AEAAMAEAVVec3@@0M@Z
     * @hash   -959159315
     */
    MCAPI float _solveDistanceConstraint(class Vec3 &, class Vec3 &, float);
    /**
     * @symbol ?_solveDistanceConstraintBlock@RopeSystem@@AEAAMAEAVVec3@@000M@Z
     * @hash   -1225637708
     */
    MCAPI float _solveDistanceConstraintBlock(class Vec3 &, class Vec3 &, class Vec3 &, class Vec3 &, float);
    /**
     * @symbol ?_solveDistanceConstraints3@RopeSystem@@AEAAMXZ
     * @hash   1804249141
     */
    MCAPI float _solveDistanceConstraints3();
    /**
     * @symbol ?_tick@RopeSystem@@AEAAXXZ
     * @hash   -348706809
     */
    MCAPI void _tick();
    /**
     * @symbol ?_tickWaves@RopeSystem@@AEAAXXZ
     * @hash   -105711079
     */
    MCAPI void _tickWaves();

private:

};
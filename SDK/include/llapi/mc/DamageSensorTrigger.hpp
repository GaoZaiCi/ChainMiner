/**
 * @file  DamageSensorTrigger.hpp
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
 * @brief MC structure DamageSensorTrigger.
 *
 */
struct DamageSensorTrigger {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_DAMAGESENSORTRIGGER
public:
    struct DamageSensorTrigger& operator=(struct DamageSensorTrigger const &) = delete;
    DamageSensorTrigger() = delete;
#endif

public:
    /**
     * @symbol ??0DamageSensorTrigger@@QEAA@AEBU0@@Z
     * @hash   1090112101
     */
    MCAPI DamageSensorTrigger(struct DamageSensorTrigger const &);
    /**
     * @symbol ?setCause@DamageSensorTrigger@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -1994278848
     */
    MCAPI void setCause(std::string const &);
    /**
     * @symbol ??1DamageSensorTrigger@@QEAA@XZ
     * @hash   -1458202453
     */
    MCAPI ~DamageSensorTrigger();

};
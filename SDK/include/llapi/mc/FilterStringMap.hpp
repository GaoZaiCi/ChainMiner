/**
 * @file  FilterStringMap.hpp
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
 * @brief MC structure FilterStringMap.
 *
 */
struct FilterStringMap {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERSTRINGMAP
public:
    struct FilterStringMap& operator=(struct FilterStringMap const &) = delete;
    FilterStringMap() = delete;
#endif

public:
    /**
     * @symbol ??0FilterStringMap@@QEAA@V?$initializer_list@U?$pair@$$CBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@UFilterInputDefinition@@@std@@@std@@@Z
     * @hash   836227208
     */
    MCAPI FilterStringMap(class std::initializer_list<struct std::pair<std::string const, struct FilterInputDefinition>>);
    /**
     * @symbol ??0FilterStringMap@@QEAA@AEBU0@@Z
     * @hash   -972428475
     */
    MCAPI FilterStringMap(struct FilterStringMap const &);
    /**
     * @symbol ??4FilterStringMap@@QEAAAEAU0@$$QEAU0@@Z
     * @hash   -1443036778
     */
    MCAPI struct FilterStringMap & operator=(struct FilterStringMap &&);
    /**
     * @symbol ??1FilterStringMap@@QEAA@XZ
     * @hash   1928061567
     */
    MCAPI ~FilterStringMap();

};
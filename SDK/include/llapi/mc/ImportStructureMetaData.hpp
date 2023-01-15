/**
 * @file  ImportStructureMetaData.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC structure ImportStructureMetaData.
 *
 */
struct ImportStructureMetaData {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_IMPORTSTRUCTUREMETADATA
public:
    struct ImportStructureMetaData& operator=(struct ImportStructureMetaData const &) = delete;
    ImportStructureMetaData(struct ImportStructureMetaData const &) = delete;
    ImportStructureMetaData() = delete;
#endif

public:
    /**
     * @symbol ?getStructure@ImportStructureMetaData@@QEAAPEBVStructureTemplate@@AEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   1807361570
     */
    MCAPI class StructureTemplate const * getStructure(std::string const &);
    /**
     * @symbol ?isSpecificStructureDirty@ImportStructureMetaData@@QEAA?B_NAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@@Z
     * @hash   -629923919
     */
    MCAPI bool const isSpecificStructureDirty(std::string const &);
    /**
     * @symbol ?setSpecificStructureDirty@ImportStructureMetaData@@QEAAXAEBV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@_N@Z
     * @hash   -1871280717
     */
    MCAPI void setSpecificStructureDirty(std::string const &, bool);

};
/**
 * @file  SetDataFromColorIndexFunction.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "LootItemFunction.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class SetDataFromColorIndexFunction.
 *
 */
class SetDataFromColorIndexFunction : public LootItemFunction {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_SETDATAFROMCOLORINDEXFUNCTION
public:
    class SetDataFromColorIndexFunction& operator=(class SetDataFromColorIndexFunction const &) = delete;
    SetDataFromColorIndexFunction(class SetDataFromColorIndexFunction const &) = delete;
    SetDataFromColorIndexFunction() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~SetDataFromColorIndexFunction();
    /**
     * @hash   1607817929
     * @vftbl  1
     * @symbol ?apply@SetDataFromColorIndexFunction@@UEAAXAEAVItemStack@@AEAVRandom@@AEAVLootTableContext@@@Z
     */
    virtual void apply(class ItemStack &, class Random &, class LootTableContext &);
    /**
     * @hash   -369946210
     * @vftbl  3
     * @symbol ?apply@SetDataFromColorIndexFunction@@UEAAXAEAVItemInstance@@AEAVRandom@@AEAVLootTableContext@@@Z
     */
    virtual void apply(class ItemInstance &, class Random &, class LootTableContext &);

};
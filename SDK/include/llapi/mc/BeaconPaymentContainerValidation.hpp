/**
 * @file  BeaconPaymentContainerValidation.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ContainerValidationBase.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class BeaconPaymentContainerValidation.
 *
 */
class BeaconPaymentContainerValidation : public ContainerValidationBase {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_BEACONPAYMENTCONTAINERVALIDATION
public:
    class BeaconPaymentContainerValidation& operator=(class BeaconPaymentContainerValidation const &) = delete;
    BeaconPaymentContainerValidation(class BeaconPaymentContainerValidation const &) = delete;
    BeaconPaymentContainerValidation() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @symbol __unk_destructor_0
     */
    virtual ~BeaconPaymentContainerValidation();
    /**
     * @hash   113814252
     * @vftbl  1
     * @symbol ?isValidSlotForContainer@ContainerValidationBase@@UEBA_NAEBVContainerScreenContext@@AEBVContainer@@H@Z
     */
    virtual bool isValidSlotForContainer(class ContainerScreenContext const &, class Container const &, int) const;
    /**
     * @hash   874070682
     * @vftbl  2
     * @symbol ?isItemAllowedInSlot@BeaconPaymentContainerValidation@@UEBA_NAEBVContainerScreenContext@@HAEBVItemStackBase@@H@Z
     */
    virtual bool isItemAllowedInSlot(class ContainerScreenContext const &, int, class ItemStackBase const &, int) const;
    /**
     * @vftbl  3
     * @symbol __unk_vfn_3
     */
    virtual void __unk_vfn_3();
    /**
     * @hash   1288757751
     * @vftbl  4
     * @symbol ?isItemAllowedToAdd@BeaconPaymentContainerValidation@@UEBA_NAEBVItemStack@@@Z
     */
    virtual bool isItemAllowedToAdd(class ItemStack const &) const;
    /**
     * @vftbl  5
     * @symbol __unk_vfn_5
     */
    virtual void __unk_vfn_5();
    /**
     * @hash   -2144499665
     * @vftbl  6
     * @symbol ?canItemMoveToContainer@ContainerValidationBase@@UEBA_NAEBVItemStackBase@@@Z
     */
    virtual bool canItemMoveToContainer(class ItemStackBase const &) const;
    /**
     * @vftbl  7
     * @symbol __unk_vfn_7
     */
    virtual void __unk_vfn_7();
    /**
     * @hash   -1054158036
     * @vftbl  8
     * @symbol ?getContainerOffset@BeaconPaymentContainerValidation@@UEBAHAEBVContainerScreenContext@@@Z
     */
    virtual int getContainerOffset(class ContainerScreenContext const &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_BEACONPAYMENTCONTAINERVALIDATION
    /**
     * @hash   -1314074957
     * @symbol ?canDestroy@BeaconPaymentContainerValidation@@UEBA_NAEBVContainerScreenContext@@@Z
     */
    MCVAPI bool canDestroy(class ContainerScreenContext const &) const;
    /**
     * @hash   1747552999
     * @symbol ?getAvailableSetCount@BeaconPaymentContainerValidation@@UEBAHHAEBVItemStackBase@@@Z
     */
    MCVAPI int getAvailableSetCount(int, class ItemStackBase const &) const;
#endif

};
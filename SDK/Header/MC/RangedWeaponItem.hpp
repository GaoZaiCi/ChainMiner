// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class RangedWeaponItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_RANGEDWEAPONITEM
public:
    class RangedWeaponItem& operator=(class RangedWeaponItem const &) = delete;
    RangedWeaponItem(class RangedWeaponItem const &) = delete;
    RangedWeaponItem() = delete;
#endif


public:
    /*0*/ virtual ~RangedWeaponItem();
    /*7*/ virtual void __unk_vfn_7();
    /*11*/ virtual void __unk_vfn_11();
    /*14*/ virtual void __unk_vfn_14();
    /*16*/ virtual void __unk_vfn_16();
    /*52*/ virtual void __unk_vfn_52();
    /*54*/ virtual void __unk_vfn_54();
    /*64*/ virtual int getEnchantValue() const;
    /*67*/ virtual void __unk_vfn_67();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*73*/ virtual void __unk_vfn_73();
    /*76*/ virtual void __unk_vfn_76();
    /*80*/ virtual void __unk_vfn_80();
    /*81*/ virtual void __unk_vfn_81();
    /*85*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*88*/ virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /*90*/ virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /*94*/ virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /*120*/ virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANGEDWEAPONITEM
#endif
    MCAPI RangedWeaponItem(std::string const &, int);
    MCAPI float getLaunchPower(int, int, int) const;



};
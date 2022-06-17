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
    /*10*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_15();
    /*51*/ virtual void __unk_vfn_51();
    /*53*/ virtual void __unk_vfn_53();
    /*63*/ virtual int getEnchantValue() const;
    /*66*/ virtual void __unk_vfn_66();
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*75*/ virtual void __unk_vfn_75();
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*84*/ virtual class ItemStack & use(class ItemStack &, class Player &) const;
    /*87*/ virtual void releaseUsing(class ItemStack &, class Player *, int) const;
    /*89*/ virtual void hurtActor(class ItemStack &, class Actor &, class Mob &) const;
    /*93*/ virtual bool mineBlock(class ItemStack &, class Block const &, int, int, int, class Actor *) const;
    /*116*/ virtual int getAnimationFrameFor(class Mob *, bool, class ItemStack const *, bool) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_RANGEDWEAPONITEM
#endif
    MCAPI RangedWeaponItem(std::string const &, int);
    MCAPI float getLaunchPower(int, int, int) const;



};
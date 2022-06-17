// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Json.hpp"
#include "Item.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ComplexItem : public Item {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPLEXITEM
public:
    class ComplexItem& operator=(class ComplexItem const &) = delete;
    ComplexItem(class ComplexItem const &) = delete;
    ComplexItem() = delete;
#endif


public:
    /*0*/ virtual ~ComplexItem();
    /*7*/ virtual void __unk_vfn_7();
    /*10*/ virtual void __unk_vfn_10();
    /*13*/ virtual void __unk_vfn_13();
    /*15*/ virtual void __unk_vfn_15();
    /*51*/ virtual void __unk_vfn_51();
    /*53*/ virtual void __unk_vfn_53();
    /*66*/ virtual void __unk_vfn_66();
    /*70*/ virtual void __unk_vfn_70();
    /*71*/ virtual void __unk_vfn_71();
    /*72*/ virtual void __unk_vfn_72();
    /*75*/ virtual void __unk_vfn_75();
    /*79*/ virtual void __unk_vfn_79();
    /*80*/ virtual void __unk_vfn_80();
    /*133*/ virtual std::unique_ptr<class Packet> getUpdatePacket(class ItemStack const &, class Level &, class Actor &) const;
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPLEXITEM
    MCVAPI bool isComplex() const;
#endif
    MCAPI ComplexItem(std::string const &, int);



};
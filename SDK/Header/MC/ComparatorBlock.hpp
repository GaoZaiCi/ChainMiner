// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "ActorBlock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ComparatorBlock : public ActorBlock {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_COMPARATORBLOCK
public:
    class ComparatorBlock& operator=(class ComparatorBlock const &) = delete;
    ComparatorBlock(class ComparatorBlock const &) = delete;
    ComparatorBlock() = delete;
#endif


public:
    /*0*/ virtual ~ComparatorBlock();
    /*19*/ virtual void __unk_vfn_19();
    /*29*/ virtual void __unk_vfn_29();
    /*30*/ virtual void __unk_vfn_30();
    /*32*/ virtual void __unk_vfn_32();
    /*33*/ virtual void __unk_vfn_33();
    /*34*/ virtual void __unk_vfn_34();
    /*36*/ virtual void __unk_vfn_36();
    /*37*/ virtual void __unk_vfn_37();
    /*38*/ virtual void __unk_vfn_38();
    /*39*/ virtual void __unk_vfn_39();
    /*40*/ virtual void __unk_vfn_40();
    /*41*/ virtual void __unk_vfn_41();
    /*42*/ virtual void __unk_vfn_42();
    /*44*/ virtual void __unk_vfn_44();
    /*45*/ virtual void __unk_vfn_45();
    /*46*/ virtual void __unk_vfn_46();
    /*47*/ virtual void __unk_vfn_47();
    /*48*/ virtual void __unk_vfn_48();
    /*49*/ virtual void __unk_vfn_49();
    /*51*/ virtual bool isSignalSource() const;
    /*58*/ virtual int getDirectSignal(class BlockSource &, class BlockPos const &, int) const;
    /*59*/ virtual void __unk_vfn_59();
    /*60*/ virtual void __unk_vfn_60();
    /*62*/ virtual bool shouldConnectToRedstone(class BlockSource &, class BlockPos const &, int) const;
    /*71*/ virtual void onRedstoneUpdate(class BlockSource &, class BlockPos const &, int, bool) const;
    /*73*/ virtual void __unk_vfn_73();
    /*77*/ virtual void setupRedstoneComponent(class BlockSource &, class BlockPos const &) const;
    /*80*/ virtual void __unk_vfn_80();
    /*90*/ virtual bool mayPlace(class BlockSource &, class BlockPos const &) const;
    /*98*/ virtual void neighborChanged(class BlockSource &, class BlockPos const &, class BlockPos const &) const;
    /*101*/ virtual class ItemInstance getResourceItem(class Randomize &, class Block const &, int) const;
    /*102*/ virtual class ItemInstance asItemInstance(class BlockSource &, class BlockPos const &, class Block const &) const;
    /*105*/ virtual void __unk_vfn_105();
    /*106*/ virtual class Block const & getPlacementBlock(class Actor &, class BlockPos const &, unsigned char, class Vec3 const &, int) const;
    /*117*/ virtual void triggerEvent(class BlockSource &, class BlockPos const &, int, int) const;
    /*124*/ virtual void __unk_vfn_124();
    /*126*/ virtual void __unk_vfn_126();
    /*127*/ virtual void __unk_vfn_127();
    /*132*/ virtual void __unk_vfn_132();
    /*147*/ virtual int getVariant(class Block const &) const;
    /*148*/ virtual void __unk_vfn_148();
    /*157*/ virtual void __unk_vfn_157();
    /*168*/ virtual void __unk_vfn_168();
    /*169*/ virtual void __unk_vfn_169();
    /*170*/ virtual void __unk_vfn_170();
    /*171*/ virtual void onPlace(class BlockSource &, class BlockPos const &) const;
    /*174*/ virtual void tick(class BlockSource &, class BlockPos const &, class Random &) const;
    /*177*/ virtual void __unk_vfn_177();
    /*179*/ virtual bool use(class Player &, class BlockPos const &, unsigned char) const;
    /*180*/ virtual bool canSurvive(class BlockSource &, class BlockPos const &) const;
    /*188*/ virtual void __unk_vfn_188();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_COMPARATORBLOCK
    MCVAPI bool canSpawnOn() const;
    MCVAPI bool isInteractiveBlock() const;
#endif
    MCAPI ComparatorBlock(std::string const &, int, bool);

//private:
    MCAPI void _installCircuit(class BlockSource &, class BlockPos const &, bool) const;
    MCAPI void _refreshOutputState(class BlockSource &, class BlockPos const &, int) const;


private:


};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class StructurePoolBlockPredicateAlwaysTrue {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_STRUCTUREPOOLBLOCKPREDICATEALWAYSTRUE
public:
    class StructurePoolBlockPredicateAlwaysTrue& operator=(class StructurePoolBlockPredicateAlwaysTrue const &) = delete;
    StructurePoolBlockPredicateAlwaysTrue(class StructurePoolBlockPredicateAlwaysTrue const &) = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_STRUCTUREPOOLBLOCKPREDICATEALWAYSTRUE
    MCVAPI bool test(class BlockPos const &, class BlockPos const &, class Randomize &) const;
    MCVAPI bool test(class Block const &, class Randomize &) const;
#endif
    MCAPI StructurePoolBlockPredicateAlwaysTrue();



};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class InsideBlockNotifierComponent {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_INSIDEBLOCKNOTIFIERCOMPONENT
public:
    class InsideBlockNotifierComponent& operator=(class InsideBlockNotifierComponent const &) = delete;
    InsideBlockNotifierComponent(class InsideBlockNotifierComponent const &) = delete;
    InsideBlockNotifierComponent() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_INSIDEBLOCKNOTIFIERCOMPONENT
#endif
    MCAPI std::vector<class InsideBlockEventMap> const & getBlockList() const;
    MCAPI bool isTrackedBlock(class Block const &) const;
    MCAPI void resetBlocksInsideState();
    MCAPI void setInsideBlock(class Block const &, bool);



};
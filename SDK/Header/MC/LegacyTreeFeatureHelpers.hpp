// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

namespace LegacyTreeFeatureHelpers {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    MCAPI void _placeTrees(class IBlockWorldGenAPI &, class BlockPos const &, class Random &, int, class RenderParams &, class WeakRefT<struct FeatureRefTraits>, class std::function<class WeakRefT<struct FeatureRefTraits> (class Random &)> const &);
    MCAPI void _setupForestCount(float, int &, class Random &);

};
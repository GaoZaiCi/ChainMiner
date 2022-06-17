// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Bedrock.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class PackSource {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_PACKSOURCE
public:
    class PackSource& operator=(class PackSource const &) = delete;
    PackSource(class PackSource const &) = delete;
    PackSource() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_PACKSOURCE
    MCVAPI enum PackOrigin getPackOrigin() const;
    MCVAPI enum PackType getPackType() const;
    MCVAPI ~PackSource();
#endif
    MCAPI class Pack * fetchPack(struct PackIdVersion const &);
    MCAPI void resolveUpgradeDependencies(class Pack &, class gsl::not_null<class Bedrock::NonOwnerPointer<class IContentKeyProvider const>> const &);



};
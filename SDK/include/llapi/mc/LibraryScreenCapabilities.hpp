/**
 * @file  LibraryScreenCapabilities.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC structure LibraryScreenCapabilities.
 *
 */
struct LibraryScreenCapabilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_LIBRARYSCREENCAPABILITIES
public:
    struct LibraryScreenCapabilities& operator=(struct LibraryScreenCapabilities const &) = delete;
    LibraryScreenCapabilities(struct LibraryScreenCapabilities const &) = delete;
    LibraryScreenCapabilities() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1168240213
     */
    virtual ~LibraryScreenCapabilities();
    /**
     * @vftbl  1
     * @symbol ?isOfType@?$TypedScreenCapabilities@ULibraryScreenCapabilities@@@@UEBA_NV?$typeid_t@VIScreenCapabilities@@@@@Z
     * @hash   1089007670
     */
    virtual bool isOfType(class typeid_t<class IScreenCapabilities>) const;

};
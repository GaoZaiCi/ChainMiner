/**
 * @file  TagUpdateToken.hpp
 *
 */
#pragma once
#define AUTO_GENERATED
#include "llapi/Global.h"

#define BEFORE_EXTRA

#undef BEFORE_EXTRA

/**
 * @brief MC class TagUpdateToken.
 *
 */
class TagUpdateToken {

#define AFTER_EXTRA

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_TAGUPDATETOKEN
public:
    class TagUpdateToken& operator=(class TagUpdateToken const &) = delete;
    TagUpdateToken(class TagUpdateToken const &) = delete;
    TagUpdateToken() = delete;
#endif

public:
    /**
     * @symbol ??0TagUpdateToken\@\@QEAA\@V?$weak_ptr\@U?$atomic\@H\@std\@\@\@std\@\@\@Z
     */
    MCAPI TagUpdateToken(class std::weak_ptr<struct std::atomic<int>>);
    /**
     * @symbol ??1TagUpdateToken\@\@QEAA\@XZ
     */
    MCAPI ~TagUpdateToken();

};

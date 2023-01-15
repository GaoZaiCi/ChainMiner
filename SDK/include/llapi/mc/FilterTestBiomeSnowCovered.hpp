/**
 * @file  FilterTestBiomeSnowCovered.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "FilterTest.hpp"
#include "Json.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class FilterTestBiomeSnowCovered.
 *
 */
class FilterTestBiomeSnowCovered : public FilterTest {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_FILTERTESTBIOMESNOWCOVERED
public:
    class FilterTestBiomeSnowCovered& operator=(class FilterTestBiomeSnowCovered const &) = delete;
    FilterTestBiomeSnowCovered(class FilterTestBiomeSnowCovered const &) = delete;
    FilterTestBiomeSnowCovered() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1836262809
     */
    virtual ~FilterTestBiomeSnowCovered();
    /**
     * @vftbl  2
     * @symbol ?evaluate@FilterTestBiomeSnowCovered@@UEBA_NAEBUFilterContext@@@Z
     * @hash   2038565055
     */
    virtual bool evaluate(struct FilterContext const &) const;
    /**
     * @vftbl  4
     * @symbol ?getName@FilterTestBiomeSnowCovered@@UEBA?AV?$basic_string_span@$$CBD$0?0@gsl@@XZ
     * @hash   -1524366013
     */
    virtual class gsl::basic_string_span<char const, -1> getName() const;

};
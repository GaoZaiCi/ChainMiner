/**
 * @file  AttributeInstanceDelegate.hpp
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
 * @brief MC class AttributeInstanceDelegate.
 *
 */
class AttributeInstanceDelegate {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ATTRIBUTEINSTANCEDELEGATE
public:
    class AttributeInstanceDelegate& operator=(class AttributeInstanceDelegate const &) = delete;
    AttributeInstanceDelegate(class AttributeInstanceDelegate const &) = delete;
    AttributeInstanceDelegate() = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -1535567164
     */
    virtual ~AttributeInstanceDelegate();
    /**
     * @vftbl  1
     * @symbol ?tick@AttributeInstanceDelegate@@UEAAXXZ
     * @hash   -1131155250
     */
    virtual void tick();
    /**
     * @vftbl  2
     * @symbol ?notify@AttributeInstanceDelegate@@UEAAX_J@Z
     * @hash   896077807
     */
    virtual void notify(__int64);
    /**
     * @vftbl  3
     * @symbol ?willChange@AttributeInstanceDelegate@@UEAA_NMMAEBVAttributeBuff@@@Z
     * @hash   -283760859
     */
    virtual bool willChange(float, float, class AttributeBuff const &);
    /**
     * @vftbl  4
     * @symbol ?change@AttributeInstanceDelegate@@UEAAMMMAEBVAttributeBuff@@@Z
     * @hash   1160469265
     */
    virtual float change(float, float, class AttributeBuff const &);
    /**
     * @vftbl  5
     * @symbol ?getBuffValueWithModifiers@AttributeInstanceDelegate@@UEBAMAEBVAttributeBuff@@@Z
     * @hash   -1771529534
     */
    virtual float getBuffValueWithModifiers(class AttributeBuff const &) const;
    /**
     * @symbol ??0AttributeInstanceDelegate@@QEAA@AEBVAttributeInstance@@@Z
     * @hash   1989452545
     */
    MCAPI AttributeInstanceDelegate(class AttributeInstance const &);

//protected:
    /**
     * @symbol ?_getInstance@AttributeInstanceDelegate@@IEBAAEBVAttributeInstance@@XZ
     * @hash   1518389638
     */
    MCAPI class AttributeInstance const & _getInstance() const;
    /**
     * @symbol ?_getMutableInstance@AttributeInstanceDelegate@@IEBAPEAVAttributeInstance@@XZ
     * @hash   979475117
     */
    MCAPI class AttributeInstance * _getMutableInstance() const;

protected:

};
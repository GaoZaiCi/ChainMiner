/**
 * @file  EducationSettingsPacket.hpp
 * @note  This Header is auto generated by LiteLoaderBDS Toolchain.
 *
 */
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Packet.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

/**
 * @brief MC class EducationSettingsPacket.
 *
 */
class EducationSettingsPacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_EDUCATIONSETTINGSPACKET
public:
    class EducationSettingsPacket& operator=(class EducationSettingsPacket const &) = delete;
    EducationSettingsPacket(class EducationSettingsPacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   1298356513
     */
    virtual ~EducationSettingsPacket();
    /**
     * @vftbl  1
     * @symbol ?getId@EducationSettingsPacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   1108359691
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@EducationSettingsPacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1371460792
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@EducationSettingsPacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   709865519
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@EducationSettingsPacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   5584175
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0EducationSettingsPacket@@QEAA@XZ
     * @hash   40593071
     */
    MCAPI EducationSettingsPacket();
    /**
     * @symbol ??0EducationSettingsPacket@@QEAA@UEducationLevelSettings@@@Z
     * @hash   -1064279950
     */
    MCAPI EducationSettingsPacket(struct EducationLevelSettings);

};
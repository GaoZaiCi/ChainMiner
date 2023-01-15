/**
 * @file  UpdatePlayerGameTypePacket.hpp
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
 * @brief MC class UpdatePlayerGameTypePacket.
 *
 */
class UpdatePlayerGameTypePacket : public Packet {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
#ifndef DISABLE_CONSTRUCTOR_PREVENTION_UPDATEPLAYERGAMETYPEPACKET
public:
    class UpdatePlayerGameTypePacket& operator=(class UpdatePlayerGameTypePacket const &) = delete;
    UpdatePlayerGameTypePacket(class UpdatePlayerGameTypePacket const &) = delete;
#endif

public:
    /**
     * @vftbl  0
     * @hash   -213491608
     */
    virtual ~UpdatePlayerGameTypePacket();
    /**
     * @vftbl  1
     * @symbol ?getId@UpdatePlayerGameTypePacket@@UEBA?AW4MinecraftPacketIds@@XZ
     * @hash   833152384
     */
    virtual enum class MinecraftPacketIds getId() const;
    /**
     * @vftbl  2
     * @symbol ?getName@UpdatePlayerGameTypePacket@@UEBA?AV?$basic_string@DU?$char_traits@D@std@@V?$allocator@D@2@@std@@XZ
     * @hash   1301636205
     */
    virtual std::string getName() const;
    /**
     * @vftbl  3
     * @symbol ?write@UpdatePlayerGameTypePacket@@UEBAXAEAVBinaryStream@@@Z
     * @hash   1494366618
     */
    virtual void write(class BinaryStream &) const;
    /**
     * @vftbl  6
     * @symbol ?_read@UpdatePlayerGameTypePacket@@EEAA?AW4StreamReadResult@@AEAVReadOnlyBinaryStream@@@Z
     * @hash   -1090016342
     */
    virtual enum class StreamReadResult _read(class ReadOnlyBinaryStream &);
    /**
     * @symbol ??0UpdatePlayerGameTypePacket@@QEAA@XZ
     * @hash   -45091878
     */
    MCAPI UpdatePlayerGameTypePacket();
    /**
     * @symbol ??0UpdatePlayerGameTypePacket@@QEAA@W4GameType@@AEBUActorUniqueID@@@Z
     * @hash   -1766780376
     */
    MCAPI UpdatePlayerGameTypePacket(enum class GameType, struct ActorUniqueID const &);

};
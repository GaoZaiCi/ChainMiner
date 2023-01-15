/**
 * @file  CelebrateHuntSystemInternal.hpp
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
 * @brief MC namespace CelebrateHuntSystemInternal.
 *
 */
namespace CelebrateHuntSystemInternal {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA
    /**
     * @symbol ?_stopCelebrating@CelebrateHuntSystemInternal@@YAXAEAVActor@@AEAVCelebrateHuntComponent@@@Z
     * @hash   -2120679484
     */
    MCAPI void _stopCelebrating(class Actor &, class CelebrateHuntComponent &);
    /**
     * @symbol ?_tickCelebrateHuntComponent@CelebrateHuntSystemInternal@@YAXAEAV?$ViewedEntityContextT@VEntityContext@@V?$FlagComponent@UActorTickedFlag@@@@V?$FlagComponent@UActorFlag@@@@VCelebrateHuntComponent@@@@@Z
     * @hash   -27238692
     */
    MCAPI void _tickCelebrateHuntComponent(class ViewedEntityContextT<class EntityContext, class FlagComponent<struct ActorTickedFlag>, class FlagComponent<struct ActorFlag>, class CelebrateHuntComponent> &);

};
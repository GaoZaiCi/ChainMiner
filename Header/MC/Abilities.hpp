// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Ability.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class Abilities {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ABILITIES
#endif
    MCAPI Abilities(class Abilities const &);
    MCAPI Abilities();
    MCAPI void addSaveData(class CompoundTag &) const;
    MCAPI void forEachAbility(class std::function<void (class Ability &, char const *)> const &, enum Ability::Options);
    MCAPI class Ability & getAbility(enum AbilitiesIndex);
    MCAPI class Ability const & getAbility(enum AbilitiesIndex) const;
    MCAPI bool getBool(enum AbilitiesIndex) const;
    MCAPI enum CommandPermissionLevel getCommandPermissions() const;
    MCAPI class Ability const & getCustomAbilityFromCache(enum AbilitiesIndex) const;
    MCAPI class Ability & getCustomAbilityFromCache(enum AbilitiesIndex);
    MCAPI float getFloat(enum AbilitiesIndex) const;
    MCAPI enum PlayerPermissionLevel getPlayerPermissions() const;
    MCAPI bool isFlying() const;
    MCAPI bool loadSaveData(class CompoundTag const &);
    MCAPI class Abilities & operator=(class Abilities const &);
    MCAPI bool operator==(class Abilities const &) const;
    MCAPI void setAbility(enum AbilitiesIndex, float);
    MCAPI void setAbility(enum AbilitiesIndex, bool);
    MCAPI void setAbilityDiff(enum AbilitiesIndex, bool, bool &);
    MCAPI void setCommandPermissions(enum CommandPermissionLevel);
    MCAPI void setPlayerPermissions(enum PlayerPermissionLevel);
    MCAPI ~Abilities();
    MCAPI static char const * getAbilityName(enum AbilitiesIndex);
    MCAPI static enum AbilitiesIndex nameToAbilityIndex(std::string const &);

//private:
    MCAPI void _registerAbilities();


private:
    MCAPI static class std::array<char const *, 18> ABILITY_NAMES;
    MCAPI static std::string const TAG;


};
// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"
#include "Actor.hpp"
#include "Mob.hpp"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class ArmorStand : public Mob {

#define AFTER_EXTRA
// Add Member There
public:
struct Pose {
    Pose() = delete;
    Pose(Pose const&) = delete;
    Pose(Pose const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_ARMORSTAND
public:
    class ArmorStand& operator=(class ArmorStand const &) = delete;
    ArmorStand(class ArmorStand const &) = delete;
    ArmorStand() = delete;
#endif


public:
    /*14*/ virtual ~ArmorStand();
    /*41*/ virtual void __unk_vfn_41();
    /*49*/ virtual void normalTick();
    /*61*/ virtual void __unk_vfn_61();
    /*68*/ virtual void __unk_vfn_68();
    /*80*/ virtual float getShadowRadius() const;
    /*82*/ virtual void __unk_vfn_82();
    /*85*/ virtual void __unk_vfn_85();
    /*88*/ virtual void __unk_vfn_88();
    /*95*/ virtual bool isPickable();
    /*96*/ virtual void __unk_vfn_96();
    /*99*/ virtual void __unk_vfn_99();
    /*106*/ virtual void __unk_vfn_106();
    /*108*/ virtual void __unk_vfn_108();
    /*109*/ virtual void __unk_vfn_109();
    /*111*/ virtual void __unk_vfn_111();
    /*135*/ virtual bool isInvulnerableTo(class ActorDamageSource const &) const;
    /*182*/ virtual void __unk_vfn_182();
    /*196*/ virtual void __unk_vfn_196();
    /*222*/ virtual void __unk_vfn_222();
    /*223*/ virtual void __unk_vfn_223();
    /*238*/ virtual bool getInteraction(class Player &, class ActorInteraction &, class Vec3 const &);
    /*248*/ virtual void __unk_vfn_248();
    /*251*/ virtual void __unk_vfn_251();
    /*253*/ virtual void die(class ActorDamageSource const &);
    /*267*/ virtual void updateEntitySpecificMolangVariables(class RenderParams &);
    /*269*/ virtual void __unk_vfn_269();
    /*270*/ virtual bool _hurt(class ActorDamageSource const &, float, bool, bool);
    /*273*/ virtual void readAdditionalSaveData(class CompoundTag const &, class DataLoadHelper &);
    /*274*/ virtual void addAdditionalSaveData(class CompoundTag &) const;
    /*277*/ virtual void __unk_vfn_277();
    /*285*/ virtual void __unk_vfn_285();
    /*302*/ virtual void pushActors();
    /*313*/ virtual void __unk_vfn_313();
    /*317*/ virtual void __unk_vfn_317();
    /*351*/ virtual void __unk_vfn_351();
    /*365*/ virtual void __unk_vfn_365();
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_ARMORSTAND
    MCVAPI bool interactPreventDefault();
#endif
    MCAPI ArmorStand(class ActorDefinitionGroup *, struct ActorDefinitionIdentifier const &, class EntityContext &);
    MCAPI void setPoseIndex(int);

//private:
    MCAPI void _causeDamage(float);
    MCAPI void _destroyWithEffects(class Vec3 const &);
    MCAPI void _dropHeldItems();
    MCAPI void _dropHeldItemsAndResource();
    MCAPI void _dropItem(class ItemStack const &);
    MCAPI bool _trySwapItem(class Player &, enum EquipmentSlot);


private:
    MCAPI static struct ArmorStand::Pose const POSE_ATHENA;
    MCAPI static struct ArmorStand::Pose const POSE_BRANDISH;
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_A;
    MCAPI static struct ArmorStand::Pose const POSE_CANCAN_B;
    MCAPI static struct ArmorStand::Pose const POSE_DEFAULT;
    MCAPI static struct ArmorStand::Pose const POSE_ENTERTAIN;
    MCAPI static struct ArmorStand::Pose const POSE_HERO;
    MCAPI static struct ArmorStand::Pose const POSE_HONOR;
    MCAPI static struct ArmorStand::Pose const POSE_RIPOSTE;
    MCAPI static struct ArmorStand::Pose const POSE_SALUTE;
    MCAPI static struct ArmorStand::Pose const POSE_SOLEMN;
    MCAPI static struct ArmorStand::Pose const POSE_ZERO_ROTATION;
    MCAPI static struct ArmorStand::Pose const POSE_ZOMBIE;
    MCAPI static struct ArmorStand::Pose const * STAND_POSES[];


};
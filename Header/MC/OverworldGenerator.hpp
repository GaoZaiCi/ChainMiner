// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

class OverworldGenerator {

#define AFTER_EXTRA
// Add Member There
public:
struct ThreadData {
    ThreadData() = delete;
    ThreadData(ThreadData const&) = delete;
    ThreadData(ThreadData const&&) = delete;
};

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_OVERWORLDGENERATOR
public:
    class OverworldGenerator& operator=(class OverworldGenerator const &) = delete;
    OverworldGenerator(class OverworldGenerator const &) = delete;
    OverworldGenerator() = delete;
#endif


public:
#ifdef ENABLE_VIRTUAL_FAKESYMBOL_OVERWORLDGENERATOR
    MCVAPI class ChunkLocalNoiseCache createNoiseCache(class ChunkPos) const;
    MCVAPI class WorldGenCache createWorldGenCache(class ChunkPos) const;
    MCVAPI void decorateWorldGenLoadChunk(class Biome &, class LevelChunk &, class BlockVolumeTarget &, class Random &, class ChunkPos const &) const;
    MCVAPI class BiomeArea getBiomeArea(class BoundingBox const &, unsigned int) const;
    MCVAPI struct WorldGenerator::BlockVolumeDimensions getBlockVolumeDimensions() const;
    MCVAPI void loadChunk(class LevelChunk &, bool);
    MCVAPI bool postProcess(class ChunkViewSource &);
    MCVAPI void prepareAndComputeHeights(class BlockVolume &, class ChunkPos const &, std::vector<short> &, bool, int);
    MCVAPI void prepareHeights(class BlockVolume &, class ChunkPos const &, bool);
    MCVAPI std::unique_ptr<class Aquifer> tryMakeAquifer(class ChunkPos const &, class SurfaceLevelCache const &, short, short, short) const;
    MCVAPI ~OverworldGenerator();
#endif
    MCAPI OverworldGenerator(class Dimension &, bool, std::unique_ptr<class StructureFeatureRegistry>);
    MCAPI void buildSurfaces(struct OverworldGenerator::ThreadData &, class BlockVolume &, class LevelChunk &, class ChunkPos const &, class SurfaceLevelCache const &);



};
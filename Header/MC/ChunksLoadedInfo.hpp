// This Header is auto generated by BDSLiteLoader Toolchain
#pragma once
#define AUTO_GENERATED
#include "../Global.h"

#define BEFORE_EXTRA
// Include Headers or Declare Types Here

#undef BEFORE_EXTRA

struct ChunksLoadedInfo {

#define AFTER_EXTRA
// Add Member There

#undef AFTER_EXTRA

#ifndef DISABLE_CONSTRUCTOR_PREVENTION_CHUNKSLOADEDINFO
public:
    struct ChunksLoadedInfo& operator=(struct ChunksLoadedInfo const &) = delete;
    ChunksLoadedInfo(struct ChunksLoadedInfo const &) = delete;
    ChunksLoadedInfo() = delete;
#endif

public:
    MCAPI std::unique_ptr<class ChunkViewSource> getChunkViewSource() const;
    MCAPI enum ChunksLoadedStatus getChunksLoadedStatus() const;

protected:

private:

};
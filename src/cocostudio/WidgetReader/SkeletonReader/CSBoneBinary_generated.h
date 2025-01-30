// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CSBONEBINARY_FLATBUFFERS_H_
#define FLATBUFFERS_GENERATED_CSBONEBINARY_FLATBUFFERS_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 12 &&
              FLATBUFFERS_VERSION_REVISION == 23,
             "Non-compatible flatbuffers version included");

#include "cocostudio/CSParseBinary_generated.h"

namespace flatbuffers {

struct BoneOptions;
struct BoneOptionsBuilder;

struct BoneOptions FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef BoneOptionsBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NODEOPTIONS = 4,
    VT_LENGTH = 6,
    VT_BLENDFUNC = 8
  };
  const flatbuffers::WidgetOptions *nodeOptions() const {
    return GetPointer<const flatbuffers::WidgetOptions *>(VT_NODEOPTIONS);
  }
  float length() const {
    return GetField<float>(VT_LENGTH, 0.0f);
  }
  const flatbuffers::BlendFunc *blendFunc() const {
    return GetStruct<const flatbuffers::BlendFunc *>(VT_BLENDFUNC);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NODEOPTIONS) &&
           verifier.VerifyTable(nodeOptions()) &&
           VerifyField<float>(verifier, VT_LENGTH, 4) &&
           VerifyField<flatbuffers::BlendFunc>(verifier, VT_BLENDFUNC, 4) &&
           verifier.EndTable();
  }
};

struct BoneOptionsBuilder {
  typedef BoneOptions Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_nodeOptions(::flatbuffers::Offset<flatbuffers::WidgetOptions> nodeOptions) {
    fbb_.AddOffset(BoneOptions::VT_NODEOPTIONS, nodeOptions);
  }
  void add_length(float length) {
    fbb_.AddElement<float>(BoneOptions::VT_LENGTH, length, 0.0f);
  }
  void add_blendFunc(const flatbuffers::BlendFunc *blendFunc) {
    fbb_.AddStruct(BoneOptions::VT_BLENDFUNC, blendFunc);
  }
  explicit BoneOptionsBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<BoneOptions> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<BoneOptions>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<BoneOptions> CreateBoneOptions(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<flatbuffers::WidgetOptions> nodeOptions = 0,
    float length = 0.0f,
    const flatbuffers::BlendFunc *blendFunc = nullptr) {
  BoneOptionsBuilder builder_(_fbb);
  builder_.add_blendFunc(blendFunc);
  builder_.add_length(length);
  builder_.add_nodeOptions(nodeOptions);
  return builder_.Finish();
}

inline const flatbuffers::BoneOptions *GetBoneOptions(const void *buf) {
  return ::flatbuffers::GetRoot<flatbuffers::BoneOptions>(buf);
}

inline const flatbuffers::BoneOptions *GetSizePrefixedBoneOptions(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<flatbuffers::BoneOptions>(buf);
}

inline bool VerifyBoneOptionsBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<flatbuffers::BoneOptions>(nullptr);
}

inline bool VerifySizePrefixedBoneOptionsBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<flatbuffers::BoneOptions>(nullptr);
}

inline void FinishBoneOptionsBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<flatbuffers::BoneOptions> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedBoneOptionsBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<flatbuffers::BoneOptions> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace flatbuffers

#endif  // FLATBUFFERS_GENERATED_CSBONEBINARY_FLATBUFFERS_H_

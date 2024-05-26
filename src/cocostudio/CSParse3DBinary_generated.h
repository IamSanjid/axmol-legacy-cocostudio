// automatically generated by the FlatBuffers compiler, do not modify


#ifndef FLATBUFFERS_GENERATED_CSPARSE3DBINARY_FLATBUFFERS_H_
#define FLATBUFFERS_GENERATED_CSPARSE3DBINARY_FLATBUFFERS_H_

#include "flatbuffers/flatbuffers.h"

// Ensure the included flatbuffers.h is the same version as when this file was
// generated, otherwise it may not be compatible.
static_assert(FLATBUFFERS_VERSION_MAJOR == 24 &&
              FLATBUFFERS_VERSION_MINOR == 3 &&
              FLATBUFFERS_VERSION_REVISION == 25,
             "Non-compatible flatbuffers version included");

#include "CSParseBinary_generated.h"

namespace flatbuffers {

struct Node3DOption;
struct Node3DOptionBuilder;

struct Sprite3DOptions;
struct Sprite3DOptionsBuilder;

struct Particle3DOptions;
struct Particle3DOptionsBuilder;

struct UserCameraOptions;
struct UserCameraOptionsBuilder;

struct GameNode3DOption;
struct GameNode3DOptionBuilder;

struct Light3DOption;
struct Light3DOptionBuilder;

struct Node3DOption FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Node3DOptionBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NODEOPTIONS = 4,
    VT_POSITION3D = 6,
    VT_ROTATION3D = 8,
    VT_SCALE3D = 10,
    VT_CAMERAMASK = 12
  };
  const flatbuffers::WidgetOptions *nodeOptions() const {
    return GetPointer<const flatbuffers::WidgetOptions *>(VT_NODEOPTIONS);
  }
  const flatbuffers::FVec3 *position3D() const {
    return GetStruct<const flatbuffers::FVec3 *>(VT_POSITION3D);
  }
  const flatbuffers::FVec3 *rotation3D() const {
    return GetStruct<const flatbuffers::FVec3 *>(VT_ROTATION3D);
  }
  const flatbuffers::FVec3 *scale3D() const {
    return GetStruct<const flatbuffers::FVec3 *>(VT_SCALE3D);
  }
  int32_t cameramask() const {
    return GetField<int32_t>(VT_CAMERAMASK, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NODEOPTIONS) &&
           verifier.VerifyTable(nodeOptions()) &&
           VerifyField<flatbuffers::FVec3>(verifier, VT_POSITION3D, 4) &&
           VerifyField<flatbuffers::FVec3>(verifier, VT_ROTATION3D, 4) &&
           VerifyField<flatbuffers::FVec3>(verifier, VT_SCALE3D, 4) &&
           VerifyField<int32_t>(verifier, VT_CAMERAMASK, 4) &&
           verifier.EndTable();
  }
};

struct Node3DOptionBuilder {
  typedef Node3DOption Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_nodeOptions(::flatbuffers::Offset<flatbuffers::WidgetOptions> nodeOptions) {
    fbb_.AddOffset(Node3DOption::VT_NODEOPTIONS, nodeOptions);
  }
  void add_position3D(const flatbuffers::FVec3 *position3D) {
    fbb_.AddStruct(Node3DOption::VT_POSITION3D, position3D);
  }
  void add_rotation3D(const flatbuffers::FVec3 *rotation3D) {
    fbb_.AddStruct(Node3DOption::VT_ROTATION3D, rotation3D);
  }
  void add_scale3D(const flatbuffers::FVec3 *scale3D) {
    fbb_.AddStruct(Node3DOption::VT_SCALE3D, scale3D);
  }
  void add_cameramask(int32_t cameramask) {
    fbb_.AddElement<int32_t>(Node3DOption::VT_CAMERAMASK, cameramask, 0);
  }
  explicit Node3DOptionBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Node3DOption> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Node3DOption>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Node3DOption> CreateNode3DOption(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<flatbuffers::WidgetOptions> nodeOptions = 0,
    const flatbuffers::FVec3 *position3D = nullptr,
    const flatbuffers::FVec3 *rotation3D = nullptr,
    const flatbuffers::FVec3 *scale3D = nullptr,
    int32_t cameramask = 0) {
  Node3DOptionBuilder builder_(_fbb);
  builder_.add_cameramask(cameramask);
  builder_.add_scale3D(scale3D);
  builder_.add_rotation3D(rotation3D);
  builder_.add_position3D(position3D);
  builder_.add_nodeOptions(nodeOptions);
  return builder_.Finish();
}

struct Sprite3DOptions FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Sprite3DOptionsBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NODE3DOPTION = 4,
    VT_FILEDATA = 6,
    VT_RUNACTION = 8,
    VT_ISFLIPPED = 10,
    VT_LIGHTFLAG = 12
  };
  const flatbuffers::Node3DOption *node3DOption() const {
    return GetPointer<const flatbuffers::Node3DOption *>(VT_NODE3DOPTION);
  }
  const flatbuffers::ResourceData *fileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_FILEDATA);
  }
  bool runAction() const {
    return GetField<uint8_t>(VT_RUNACTION, 0) != 0;
  }
  bool isFlipped() const {
    return GetField<uint8_t>(VT_ISFLIPPED, 0) != 0;
  }
  int32_t lightFlag() const {
    return GetField<int32_t>(VT_LIGHTFLAG, 0);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NODE3DOPTION) &&
           verifier.VerifyTable(node3DOption()) &&
           VerifyOffset(verifier, VT_FILEDATA) &&
           verifier.VerifyTable(fileData()) &&
           VerifyField<uint8_t>(verifier, VT_RUNACTION, 1) &&
           VerifyField<uint8_t>(verifier, VT_ISFLIPPED, 1) &&
           VerifyField<int32_t>(verifier, VT_LIGHTFLAG, 4) &&
           verifier.EndTable();
  }
};

struct Sprite3DOptionsBuilder {
  typedef Sprite3DOptions Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_node3DOption(::flatbuffers::Offset<flatbuffers::Node3DOption> node3DOption) {
    fbb_.AddOffset(Sprite3DOptions::VT_NODE3DOPTION, node3DOption);
  }
  void add_fileData(::flatbuffers::Offset<flatbuffers::ResourceData> fileData) {
    fbb_.AddOffset(Sprite3DOptions::VT_FILEDATA, fileData);
  }
  void add_runAction(bool runAction) {
    fbb_.AddElement<uint8_t>(Sprite3DOptions::VT_RUNACTION, static_cast<uint8_t>(runAction), 0);
  }
  void add_isFlipped(bool isFlipped) {
    fbb_.AddElement<uint8_t>(Sprite3DOptions::VT_ISFLIPPED, static_cast<uint8_t>(isFlipped), 0);
  }
  void add_lightFlag(int32_t lightFlag) {
    fbb_.AddElement<int32_t>(Sprite3DOptions::VT_LIGHTFLAG, lightFlag, 0);
  }
  explicit Sprite3DOptionsBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Sprite3DOptions> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Sprite3DOptions>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Sprite3DOptions> CreateSprite3DOptions(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<flatbuffers::Node3DOption> node3DOption = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> fileData = 0,
    bool runAction = false,
    bool isFlipped = false,
    int32_t lightFlag = 0) {
  Sprite3DOptionsBuilder builder_(_fbb);
  builder_.add_lightFlag(lightFlag);
  builder_.add_fileData(fileData);
  builder_.add_node3DOption(node3DOption);
  builder_.add_isFlipped(isFlipped);
  builder_.add_runAction(runAction);
  return builder_.Finish();
}

struct Particle3DOptions FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Particle3DOptionsBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NODE3DOPTION = 4,
    VT_FILEDATA = 6
  };
  const flatbuffers::Node3DOption *node3DOption() const {
    return GetPointer<const flatbuffers::Node3DOption *>(VT_NODE3DOPTION);
  }
  const flatbuffers::ResourceData *fileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_FILEDATA);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NODE3DOPTION) &&
           verifier.VerifyTable(node3DOption()) &&
           VerifyOffset(verifier, VT_FILEDATA) &&
           verifier.VerifyTable(fileData()) &&
           verifier.EndTable();
  }
};

struct Particle3DOptionsBuilder {
  typedef Particle3DOptions Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_node3DOption(::flatbuffers::Offset<flatbuffers::Node3DOption> node3DOption) {
    fbb_.AddOffset(Particle3DOptions::VT_NODE3DOPTION, node3DOption);
  }
  void add_fileData(::flatbuffers::Offset<flatbuffers::ResourceData> fileData) {
    fbb_.AddOffset(Particle3DOptions::VT_FILEDATA, fileData);
  }
  explicit Particle3DOptionsBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Particle3DOptions> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Particle3DOptions>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Particle3DOptions> CreateParticle3DOptions(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<flatbuffers::Node3DOption> node3DOption = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> fileData = 0) {
  Particle3DOptionsBuilder builder_(_fbb);
  builder_.add_fileData(fileData);
  builder_.add_node3DOption(node3DOption);
  return builder_.Finish();
}

struct UserCameraOptions FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef UserCameraOptionsBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NODE3DOPTION = 4,
    VT_FOV = 6,
    VT_NEARCLIP = 8,
    VT_FARCLIP = 10,
    VT_CAMERAFLAG = 12,
    VT_SKYBOXENABLED = 14,
    VT_LEFTFILEDATA = 16,
    VT_RIGHTFILEDATA = 18,
    VT_UPFILEDATA = 20,
    VT_DOWNFILEDATA = 22,
    VT_FORWARDFILEDATA = 24,
    VT_BACKFILEDATA = 26
  };
  const flatbuffers::Node3DOption *node3DOption() const {
    return GetPointer<const flatbuffers::Node3DOption *>(VT_NODE3DOPTION);
  }
  float fov() const {
    return GetField<float>(VT_FOV, 60.0f);
  }
  float nearClip() const {
    return GetField<float>(VT_NEARCLIP, 1.0f);
  }
  float farClip() const {
    return GetField<float>(VT_FARCLIP, 1000.0f);
  }
  int32_t cameraFlag() const {
    return GetField<int32_t>(VT_CAMERAFLAG, 0);
  }
  bool skyBoxEnabled() const {
    return GetField<uint8_t>(VT_SKYBOXENABLED, 0) != 0;
  }
  const flatbuffers::ResourceData *leftFileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_LEFTFILEDATA);
  }
  const flatbuffers::ResourceData *rightFileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_RIGHTFILEDATA);
  }
  const flatbuffers::ResourceData *upFileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_UPFILEDATA);
  }
  const flatbuffers::ResourceData *downFileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_DOWNFILEDATA);
  }
  const flatbuffers::ResourceData *forwardFileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_FORWARDFILEDATA);
  }
  const flatbuffers::ResourceData *backFileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_BACKFILEDATA);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NODE3DOPTION) &&
           verifier.VerifyTable(node3DOption()) &&
           VerifyField<float>(verifier, VT_FOV, 4) &&
           VerifyField<float>(verifier, VT_NEARCLIP, 4) &&
           VerifyField<float>(verifier, VT_FARCLIP, 4) &&
           VerifyField<int32_t>(verifier, VT_CAMERAFLAG, 4) &&
           VerifyField<uint8_t>(verifier, VT_SKYBOXENABLED, 1) &&
           VerifyOffset(verifier, VT_LEFTFILEDATA) &&
           verifier.VerifyTable(leftFileData()) &&
           VerifyOffset(verifier, VT_RIGHTFILEDATA) &&
           verifier.VerifyTable(rightFileData()) &&
           VerifyOffset(verifier, VT_UPFILEDATA) &&
           verifier.VerifyTable(upFileData()) &&
           VerifyOffset(verifier, VT_DOWNFILEDATA) &&
           verifier.VerifyTable(downFileData()) &&
           VerifyOffset(verifier, VT_FORWARDFILEDATA) &&
           verifier.VerifyTable(forwardFileData()) &&
           VerifyOffset(verifier, VT_BACKFILEDATA) &&
           verifier.VerifyTable(backFileData()) &&
           verifier.EndTable();
  }
};

struct UserCameraOptionsBuilder {
  typedef UserCameraOptions Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_node3DOption(::flatbuffers::Offset<flatbuffers::Node3DOption> node3DOption) {
    fbb_.AddOffset(UserCameraOptions::VT_NODE3DOPTION, node3DOption);
  }
  void add_fov(float fov) {
    fbb_.AddElement<float>(UserCameraOptions::VT_FOV, fov, 60.0f);
  }
  void add_nearClip(float nearClip) {
    fbb_.AddElement<float>(UserCameraOptions::VT_NEARCLIP, nearClip, 1.0f);
  }
  void add_farClip(float farClip) {
    fbb_.AddElement<float>(UserCameraOptions::VT_FARCLIP, farClip, 1000.0f);
  }
  void add_cameraFlag(int32_t cameraFlag) {
    fbb_.AddElement<int32_t>(UserCameraOptions::VT_CAMERAFLAG, cameraFlag, 0);
  }
  void add_skyBoxEnabled(bool skyBoxEnabled) {
    fbb_.AddElement<uint8_t>(UserCameraOptions::VT_SKYBOXENABLED, static_cast<uint8_t>(skyBoxEnabled), 0);
  }
  void add_leftFileData(::flatbuffers::Offset<flatbuffers::ResourceData> leftFileData) {
    fbb_.AddOffset(UserCameraOptions::VT_LEFTFILEDATA, leftFileData);
  }
  void add_rightFileData(::flatbuffers::Offset<flatbuffers::ResourceData> rightFileData) {
    fbb_.AddOffset(UserCameraOptions::VT_RIGHTFILEDATA, rightFileData);
  }
  void add_upFileData(::flatbuffers::Offset<flatbuffers::ResourceData> upFileData) {
    fbb_.AddOffset(UserCameraOptions::VT_UPFILEDATA, upFileData);
  }
  void add_downFileData(::flatbuffers::Offset<flatbuffers::ResourceData> downFileData) {
    fbb_.AddOffset(UserCameraOptions::VT_DOWNFILEDATA, downFileData);
  }
  void add_forwardFileData(::flatbuffers::Offset<flatbuffers::ResourceData> forwardFileData) {
    fbb_.AddOffset(UserCameraOptions::VT_FORWARDFILEDATA, forwardFileData);
  }
  void add_backFileData(::flatbuffers::Offset<flatbuffers::ResourceData> backFileData) {
    fbb_.AddOffset(UserCameraOptions::VT_BACKFILEDATA, backFileData);
  }
  explicit UserCameraOptionsBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<UserCameraOptions> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<UserCameraOptions>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<UserCameraOptions> CreateUserCameraOptions(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<flatbuffers::Node3DOption> node3DOption = 0,
    float fov = 60.0f,
    float nearClip = 1.0f,
    float farClip = 1000.0f,
    int32_t cameraFlag = 0,
    bool skyBoxEnabled = false,
    ::flatbuffers::Offset<flatbuffers::ResourceData> leftFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> rightFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> upFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> downFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> forwardFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> backFileData = 0) {
  UserCameraOptionsBuilder builder_(_fbb);
  builder_.add_backFileData(backFileData);
  builder_.add_forwardFileData(forwardFileData);
  builder_.add_downFileData(downFileData);
  builder_.add_upFileData(upFileData);
  builder_.add_rightFileData(rightFileData);
  builder_.add_leftFileData(leftFileData);
  builder_.add_cameraFlag(cameraFlag);
  builder_.add_farClip(farClip);
  builder_.add_nearClip(nearClip);
  builder_.add_fov(fov);
  builder_.add_node3DOption(node3DOption);
  builder_.add_skyBoxEnabled(skyBoxEnabled);
  return builder_.Finish();
}

struct GameNode3DOption FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef GameNode3DOptionBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NAME = 4,
    VT_SKYBOXMASK = 6,
    VT_SKYBOXENABLED = 8,
    VT_LEFTFILEDATA = 10,
    VT_RIGHTFILEDATA = 12,
    VT_UPFILEDATA = 14,
    VT_DOWNFILEDATA = 16,
    VT_FORWARDFILEDATA = 18,
    VT_BACKFILEDATA = 20,
    VT_FRAMEEVENT = 22,
    VT_CUSTOMPROPERTY = 24,
    VT_USEDEFAULTLIGHT = 26
  };
  const ::flatbuffers::String *name() const {
    return GetPointer<const ::flatbuffers::String *>(VT_NAME);
  }
  int32_t skyBoxMask() const {
    return GetField<int32_t>(VT_SKYBOXMASK, 0);
  }
  bool skyBoxEnabled() const {
    return GetField<uint8_t>(VT_SKYBOXENABLED, 0) != 0;
  }
  const flatbuffers::ResourceData *leftFileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_LEFTFILEDATA);
  }
  const flatbuffers::ResourceData *rightFileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_RIGHTFILEDATA);
  }
  const flatbuffers::ResourceData *upFileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_UPFILEDATA);
  }
  const flatbuffers::ResourceData *downFileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_DOWNFILEDATA);
  }
  const flatbuffers::ResourceData *forwardFileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_FORWARDFILEDATA);
  }
  const flatbuffers::ResourceData *backFileData() const {
    return GetPointer<const flatbuffers::ResourceData *>(VT_BACKFILEDATA);
  }
  const ::flatbuffers::String *frameEvent() const {
    return GetPointer<const ::flatbuffers::String *>(VT_FRAMEEVENT);
  }
  const ::flatbuffers::String *customProperty() const {
    return GetPointer<const ::flatbuffers::String *>(VT_CUSTOMPROPERTY);
  }
  bool useDefaultLight() const {
    return GetField<uint8_t>(VT_USEDEFAULTLIGHT, 0) != 0;
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NAME) &&
           verifier.VerifyString(name()) &&
           VerifyField<int32_t>(verifier, VT_SKYBOXMASK, 4) &&
           VerifyField<uint8_t>(verifier, VT_SKYBOXENABLED, 1) &&
           VerifyOffset(verifier, VT_LEFTFILEDATA) &&
           verifier.VerifyTable(leftFileData()) &&
           VerifyOffset(verifier, VT_RIGHTFILEDATA) &&
           verifier.VerifyTable(rightFileData()) &&
           VerifyOffset(verifier, VT_UPFILEDATA) &&
           verifier.VerifyTable(upFileData()) &&
           VerifyOffset(verifier, VT_DOWNFILEDATA) &&
           verifier.VerifyTable(downFileData()) &&
           VerifyOffset(verifier, VT_FORWARDFILEDATA) &&
           verifier.VerifyTable(forwardFileData()) &&
           VerifyOffset(verifier, VT_BACKFILEDATA) &&
           verifier.VerifyTable(backFileData()) &&
           VerifyOffset(verifier, VT_FRAMEEVENT) &&
           verifier.VerifyString(frameEvent()) &&
           VerifyOffset(verifier, VT_CUSTOMPROPERTY) &&
           verifier.VerifyString(customProperty()) &&
           VerifyField<uint8_t>(verifier, VT_USEDEFAULTLIGHT, 1) &&
           verifier.EndTable();
  }
};

struct GameNode3DOptionBuilder {
  typedef GameNode3DOption Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_name(::flatbuffers::Offset<::flatbuffers::String> name) {
    fbb_.AddOffset(GameNode3DOption::VT_NAME, name);
  }
  void add_skyBoxMask(int32_t skyBoxMask) {
    fbb_.AddElement<int32_t>(GameNode3DOption::VT_SKYBOXMASK, skyBoxMask, 0);
  }
  void add_skyBoxEnabled(bool skyBoxEnabled) {
    fbb_.AddElement<uint8_t>(GameNode3DOption::VT_SKYBOXENABLED, static_cast<uint8_t>(skyBoxEnabled), 0);
  }
  void add_leftFileData(::flatbuffers::Offset<flatbuffers::ResourceData> leftFileData) {
    fbb_.AddOffset(GameNode3DOption::VT_LEFTFILEDATA, leftFileData);
  }
  void add_rightFileData(::flatbuffers::Offset<flatbuffers::ResourceData> rightFileData) {
    fbb_.AddOffset(GameNode3DOption::VT_RIGHTFILEDATA, rightFileData);
  }
  void add_upFileData(::flatbuffers::Offset<flatbuffers::ResourceData> upFileData) {
    fbb_.AddOffset(GameNode3DOption::VT_UPFILEDATA, upFileData);
  }
  void add_downFileData(::flatbuffers::Offset<flatbuffers::ResourceData> downFileData) {
    fbb_.AddOffset(GameNode3DOption::VT_DOWNFILEDATA, downFileData);
  }
  void add_forwardFileData(::flatbuffers::Offset<flatbuffers::ResourceData> forwardFileData) {
    fbb_.AddOffset(GameNode3DOption::VT_FORWARDFILEDATA, forwardFileData);
  }
  void add_backFileData(::flatbuffers::Offset<flatbuffers::ResourceData> backFileData) {
    fbb_.AddOffset(GameNode3DOption::VT_BACKFILEDATA, backFileData);
  }
  void add_frameEvent(::flatbuffers::Offset<::flatbuffers::String> frameEvent) {
    fbb_.AddOffset(GameNode3DOption::VT_FRAMEEVENT, frameEvent);
  }
  void add_customProperty(::flatbuffers::Offset<::flatbuffers::String> customProperty) {
    fbb_.AddOffset(GameNode3DOption::VT_CUSTOMPROPERTY, customProperty);
  }
  void add_useDefaultLight(bool useDefaultLight) {
    fbb_.AddElement<uint8_t>(GameNode3DOption::VT_USEDEFAULTLIGHT, static_cast<uint8_t>(useDefaultLight), 0);
  }
  explicit GameNode3DOptionBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<GameNode3DOption> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<GameNode3DOption>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<GameNode3DOption> CreateGameNode3DOption(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<::flatbuffers::String> name = 0,
    int32_t skyBoxMask = 0,
    bool skyBoxEnabled = false,
    ::flatbuffers::Offset<flatbuffers::ResourceData> leftFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> rightFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> upFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> downFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> forwardFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> backFileData = 0,
    ::flatbuffers::Offset<::flatbuffers::String> frameEvent = 0,
    ::flatbuffers::Offset<::flatbuffers::String> customProperty = 0,
    bool useDefaultLight = false) {
  GameNode3DOptionBuilder builder_(_fbb);
  builder_.add_customProperty(customProperty);
  builder_.add_frameEvent(frameEvent);
  builder_.add_backFileData(backFileData);
  builder_.add_forwardFileData(forwardFileData);
  builder_.add_downFileData(downFileData);
  builder_.add_upFileData(upFileData);
  builder_.add_rightFileData(rightFileData);
  builder_.add_leftFileData(leftFileData);
  builder_.add_skyBoxMask(skyBoxMask);
  builder_.add_name(name);
  builder_.add_useDefaultLight(useDefaultLight);
  builder_.add_skyBoxEnabled(skyBoxEnabled);
  return builder_.Finish();
}

inline ::flatbuffers::Offset<GameNode3DOption> CreateGameNode3DOptionDirect(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    const char *name = nullptr,
    int32_t skyBoxMask = 0,
    bool skyBoxEnabled = false,
    ::flatbuffers::Offset<flatbuffers::ResourceData> leftFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> rightFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> upFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> downFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> forwardFileData = 0,
    ::flatbuffers::Offset<flatbuffers::ResourceData> backFileData = 0,
    const char *frameEvent = nullptr,
    const char *customProperty = nullptr,
    bool useDefaultLight = false) {
  auto name__ = name ? _fbb.CreateString(name) : 0;
  auto frameEvent__ = frameEvent ? _fbb.CreateString(frameEvent) : 0;
  auto customProperty__ = customProperty ? _fbb.CreateString(customProperty) : 0;
  return flatbuffers::CreateGameNode3DOption(
      _fbb,
      name__,
      skyBoxMask,
      skyBoxEnabled,
      leftFileData,
      rightFileData,
      upFileData,
      downFileData,
      forwardFileData,
      backFileData,
      frameEvent__,
      customProperty__,
      useDefaultLight);
}

struct Light3DOption FLATBUFFERS_FINAL_CLASS : private ::flatbuffers::Table {
  typedef Light3DOptionBuilder Builder;
  enum FlatBuffersVTableOffset FLATBUFFERS_VTABLE_UNDERLYING_TYPE {
    VT_NODE3DOPTION = 4,
    VT_ENABLED = 6,
    VT_TYPE = 8,
    VT_FLAG = 10,
    VT_INTENSITY = 12,
    VT_RANGE = 14,
    VT_OUTERANGLE = 16
  };
  const flatbuffers::Node3DOption *node3DOption() const {
    return GetPointer<const flatbuffers::Node3DOption *>(VT_NODE3DOPTION);
  }
  bool enabled() const {
    return GetField<uint8_t>(VT_ENABLED, 0) != 0;
  }
  int32_t type() const {
    return GetField<int32_t>(VT_TYPE, 0);
  }
  int32_t flag() const {
    return GetField<int32_t>(VT_FLAG, 0);
  }
  float intensity() const {
    return GetField<float>(VT_INTENSITY, 0.0f);
  }
  float range() const {
    return GetField<float>(VT_RANGE, 0.0f);
  }
  float outerAngle() const {
    return GetField<float>(VT_OUTERANGLE, 0.0f);
  }
  bool Verify(::flatbuffers::Verifier &verifier) const {
    return VerifyTableStart(verifier) &&
           VerifyOffset(verifier, VT_NODE3DOPTION) &&
           verifier.VerifyTable(node3DOption()) &&
           VerifyField<uint8_t>(verifier, VT_ENABLED, 1) &&
           VerifyField<int32_t>(verifier, VT_TYPE, 4) &&
           VerifyField<int32_t>(verifier, VT_FLAG, 4) &&
           VerifyField<float>(verifier, VT_INTENSITY, 4) &&
           VerifyField<float>(verifier, VT_RANGE, 4) &&
           VerifyField<float>(verifier, VT_OUTERANGLE, 4) &&
           verifier.EndTable();
  }
};

struct Light3DOptionBuilder {
  typedef Light3DOption Table;
  ::flatbuffers::FlatBufferBuilder &fbb_;
  ::flatbuffers::uoffset_t start_;
  void add_node3DOption(::flatbuffers::Offset<flatbuffers::Node3DOption> node3DOption) {
    fbb_.AddOffset(Light3DOption::VT_NODE3DOPTION, node3DOption);
  }
  void add_enabled(bool enabled) {
    fbb_.AddElement<uint8_t>(Light3DOption::VT_ENABLED, static_cast<uint8_t>(enabled), 0);
  }
  void add_type(int32_t type) {
    fbb_.AddElement<int32_t>(Light3DOption::VT_TYPE, type, 0);
  }
  void add_flag(int32_t flag) {
    fbb_.AddElement<int32_t>(Light3DOption::VT_FLAG, flag, 0);
  }
  void add_intensity(float intensity) {
    fbb_.AddElement<float>(Light3DOption::VT_INTENSITY, intensity, 0.0f);
  }
  void add_range(float range) {
    fbb_.AddElement<float>(Light3DOption::VT_RANGE, range, 0.0f);
  }
  void add_outerAngle(float outerAngle) {
    fbb_.AddElement<float>(Light3DOption::VT_OUTERANGLE, outerAngle, 0.0f);
  }
  explicit Light3DOptionBuilder(::flatbuffers::FlatBufferBuilder &_fbb)
        : fbb_(_fbb) {
    start_ = fbb_.StartTable();
  }
  ::flatbuffers::Offset<Light3DOption> Finish() {
    const auto end = fbb_.EndTable(start_);
    auto o = ::flatbuffers::Offset<Light3DOption>(end);
    return o;
  }
};

inline ::flatbuffers::Offset<Light3DOption> CreateLight3DOption(
    ::flatbuffers::FlatBufferBuilder &_fbb,
    ::flatbuffers::Offset<flatbuffers::Node3DOption> node3DOption = 0,
    bool enabled = false,
    int32_t type = 0,
    int32_t flag = 0,
    float intensity = 0.0f,
    float range = 0.0f,
    float outerAngle = 0.0f) {
  Light3DOptionBuilder builder_(_fbb);
  builder_.add_outerAngle(outerAngle);
  builder_.add_range(range);
  builder_.add_intensity(intensity);
  builder_.add_flag(flag);
  builder_.add_type(type);
  builder_.add_node3DOption(node3DOption);
  builder_.add_enabled(enabled);
  return builder_.Finish();
}

inline const flatbuffers::Node3DOption *GetNode3DOption(const void *buf) {
  return ::flatbuffers::GetRoot<flatbuffers::Node3DOption>(buf);
}

inline const flatbuffers::Node3DOption *GetSizePrefixedNode3DOption(const void *buf) {
  return ::flatbuffers::GetSizePrefixedRoot<flatbuffers::Node3DOption>(buf);
}

inline bool VerifyNode3DOptionBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifyBuffer<flatbuffers::Node3DOption>(nullptr);
}

inline bool VerifySizePrefixedNode3DOptionBuffer(
    ::flatbuffers::Verifier &verifier) {
  return verifier.VerifySizePrefixedBuffer<flatbuffers::Node3DOption>(nullptr);
}

inline void FinishNode3DOptionBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<flatbuffers::Node3DOption> root) {
  fbb.Finish(root);
}

inline void FinishSizePrefixedNode3DOptionBuffer(
    ::flatbuffers::FlatBufferBuilder &fbb,
    ::flatbuffers::Offset<flatbuffers::Node3DOption> root) {
  fbb.FinishSizePrefixed(root);
}

}  // namespace flatbuffers

#endif  // FLATBUFFERS_GENERATED_CSPARSE3DBINARY_FLATBUFFERS_H_

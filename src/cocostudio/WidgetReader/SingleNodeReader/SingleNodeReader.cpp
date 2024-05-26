/****************************************************************************
 Copyright (c) 2014 cocos2d-x.org

 https://axmolengine.github.io/

 Permission is hereby granted, free of charge, to any person obtaining a copy
 of this software and associated documentation files (the "Software"), to deal
 in the Software without restriction, including without limitation the rights
 to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
 copies of the Software, and to permit persons to whom the Software is
 furnished to do so, subject to the following conditions:

 The above copyright notice and this permission notice shall be included in
 all copies or substantial portions of the Software.

 THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
 IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
 FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
 AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
 LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
 OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
 THE SOFTWARE.
 ****************************************************************************/

#include "SingleNodeReader.h"

#include "cocostudio/CSParseBinary_generated.h"
#include "cocostudio/ActionTimeline/ActionTimeline.h"
#include "cocostudio/WidgetReader/NodeReader/NodeReader.h"

#include "flatbuffers/flatbuffers.h"

USING_NS_AX;
using namespace flatbuffers;

namespace cocostudio
{
IMPLEMENT_CLASS_NODE_READER_INFO(SingleNodeReader)

SingleNodeReader::SingleNodeReader() {}

SingleNodeReader::~SingleNodeReader() {}

static SingleNodeReader* _instanceSingleNodeReader = nullptr;

SingleNodeReader* SingleNodeReader::getInstance()
{
    if (!_instanceSingleNodeReader)
    {
        _instanceSingleNodeReader = new SingleNodeReader();
    }

    return _instanceSingleNodeReader;
}

void SingleNodeReader::purge()
{
    AX_SAFE_DELETE(_instanceSingleNodeReader);
}

void SingleNodeReader::destroyInstance()
{
    AX_SAFE_DELETE(_instanceSingleNodeReader);
}

Offset<Table> SingleNodeReader::createOptionsWithFlatBuffers(pugi::xml_node objectData,
                                                             flatbuffers::FlatBufferBuilder* builder)
{
    auto temp        = NodeReader::getInstance()->createOptionsWithFlatBuffers(objectData, builder);
    auto nodeOptions = *(Offset<WidgetOptions>*)(&temp);

    auto options = CreateSingleNodeOptions(*builder, nodeOptions);

    return *(Offset<Table>*)(&options);
}

void SingleNodeReader::setPropsWithFlatBuffers(ax::Node* node, const flatbuffers::Table* singleNodeOptions)
{
    auto options = (SingleNodeOptions*)(singleNodeOptions);

    auto nodeReader = NodeReader::getInstance();
    nodeReader->setPropsWithFlatBuffers(node, (Table*)(options->nodeOptions()));
}

Node* SingleNodeReader::createNodeWithFlatBuffers(const flatbuffers::Table* singleNodeOptions)
{
    Node* node = Node::create();

    setPropsWithFlatBuffers(node, singleNodeOptions);

    return node;
}
}  // namespace cocostudio

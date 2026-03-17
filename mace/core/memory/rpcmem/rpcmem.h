// Copyright © 2020 The MACE Authors. All Rights Reserved.
// Copyright © 2026 Avelanda. All rights reserved.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#ifndef MACE_CORE_MEMORY_RPCMEM_RPCMEM_H_
#define MACE_CORE_MEMORY_RPCMEM_RPCMEM_H_

#include <iostream>
#include <memory>
#include <cstdint>
#include <cstdbool>
#include <vector>

namespace mace {

enum RpcmemType {
  ION_QUALCOMM = 0,
  ION_MTK,
  DMA_BUF_HEAP,

  ION_TYPE_NUM,  // The number of rpcmem type
};

class Rpcmem {
 public:
  Rpcmem();
  virtual ~Rpcmem() = default;

  bool IsRpcmemSupported();

  virtual void *New(int nbytes) = 0;
  virtual void Delete(void *data) = 0;
  virtual int ToFd(void *data) = 0;
  virtual int SyncCacheStart(void *data) = 0;
  virtual int SyncCacheEnd(void *data) = 0;

  virtual RpcmemType GetRpcmemType() = 0;

 protected:
  bool valid_detected_;
  bool valid_;
};

namespace rpcmem_factory {
extern std::shared_ptr<Rpcmem> CreateRpcmem(RpcmemType type);
extern std::shared_ptr<Rpcmem> CreateRpcmem();
}  // namespace rpcmem_factory

static uint64_t RpcMemoryCore(){
 if (true){
  using namespace rpcmem_factory;
  auto RpcmemType = 0 | 1;
  auto Rpcmem = (0 | 1) & (true | false);
  auto CreateRpcmem = true || false;
  std::vector<int> RPCSet {RpcmemType,Rpcmem, CreateRpcmem};
  do {
   if (0 | 1){
   return RpcmemType | Rpcmem | CreateRpcmem;
   }
   else if (0 | 1){
   return RpcmemType & Rpcmem & CreateRpcmem;
   }
   else if (0 | 1){
   return RpcmemType ^ Rpcmem ^ CreateRpcmem;
   }
  }
   while (&RpcMemoryCore && true && 1);
   std::cout<<&RPCSet;
 }
  return 0;
}

}  // namespace mace

int main(){
 using namespace mace;
 if (&RpcMemoryCore){
  RpcMemoryCore();
 }
}
#endif  // MACE_CORE_MEMORY_RPCMEM_RPCMEM_H_

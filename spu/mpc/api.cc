// Copyright 2021 Ant Group Co., Ltd.
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//   http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

#include "spu/mpc/api.h"

namespace spu::mpc {

ArrayRef make_p(Object* ctx, const ArrayRef& plaintext) {
  return ctx->call("make_p", plaintext);
}

ArrayRef rand_p(Object* ctx, FieldType field, size_t sz) {
  return ctx->call("rand_p", field, sz);
}

ArrayRef rand_s(Object* ctx, FieldType field, size_t sz) {
  return ctx->call("rand_s", field, sz);
}

Type common_type_s(Object* ctx, const Type& a, const Type& b) {
  return ctx->call<Type>("common_type_s", a, b);
}

ArrayRef cast_type_s(Object* ctx, const ArrayRef& a, const Type& to_type) {
  return ctx->call("cast_type_s", a, to_type);
}

SPU_MPC_DEF_UNARY_OP(p2s)
SPU_MPC_DEF_UNARY_OP(s2p)
SPU_MPC_DEF_UNARY_OP(not_s)
SPU_MPC_DEF_UNARY_OP(not_p)
SPU_MPC_DEF_UNARY_OP(msb_s)
SPU_MPC_DEF_UNARY_OP(msb_p)
SPU_MPC_DEF_UNARY_OP(eqz_s)
SPU_MPC_DEF_UNARY_OP(eqz_p)
SPU_MPC_DEF_UNARY_OP_WITH_SIZE(lshift_p)
SPU_MPC_DEF_UNARY_OP_WITH_SIZE(lshift_s)
SPU_MPC_DEF_UNARY_OP_WITH_SIZE(rshift_p)
SPU_MPC_DEF_UNARY_OP_WITH_SIZE(rshift_s)
SPU_MPC_DEF_UNARY_OP_WITH_SIZE(arshift_p)
SPU_MPC_DEF_UNARY_OP_WITH_SIZE(arshift_s)
SPU_MPC_DEF_UNARY_OP_WITH_SIZE(truncpr_s)
SPU_MPC_DEF_UNARY_OP_WITH_2SIZE(bitrev_s)
SPU_MPC_DEF_UNARY_OP_WITH_2SIZE(bitrev_p)
SPU_MPC_DEF_BINARY_OP(add_pp)
SPU_MPC_DEF_BINARY_OP(add_sp)
SPU_MPC_DEF_BINARY_OP(add_ss)
SPU_MPC_DEF_BINARY_OP(mul_pp)
SPU_MPC_DEF_BINARY_OP(mul_sp)
SPU_MPC_DEF_BINARY_OP(mul_ss)
SPU_MPC_DEF_BINARY_OP(and_pp)
SPU_MPC_DEF_BINARY_OP(and_sp)
SPU_MPC_DEF_BINARY_OP(and_ss)
SPU_MPC_DEF_BINARY_OP(xor_pp)
SPU_MPC_DEF_BINARY_OP(xor_sp)
SPU_MPC_DEF_BINARY_OP(xor_ss)
SPU_MPC_DEF_MMUL(mmul_pp)
SPU_MPC_DEF_MMUL(mmul_sp)
SPU_MPC_DEF_MMUL(mmul_ss)

}  // namespace spu::mpc

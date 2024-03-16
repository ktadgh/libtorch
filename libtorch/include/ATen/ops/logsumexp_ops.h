#pragma once

// @generated by torchgen/gen.py from Operator.h

#include <tuple>
#include <vector>

// Forward declarations of any types needed in the operator signatures.
// We can't directly include these classes because it will cause circular include dependencies.
// This file is included by TensorBody.h, which defines the Tensor class.
#include <ATen/core/ATen_fwd.h>

namespace at {
namespace _ops {


struct TORCH_API logsumexp {
  using schema = at::Tensor (const at::Tensor &, at::IntArrayRef, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::logsumexp")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "logsumexp(Tensor self, int[1] dim, bool keepdim=False) -> Tensor")
  static at::Tensor call(const at::Tensor & self, at::IntArrayRef dim, bool keepdim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim);
};

struct TORCH_API logsumexp_out {
  using schema = at::Tensor & (const at::Tensor &, at::IntArrayRef, bool, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::logsumexp")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "logsumexp.out(Tensor self, int[1] dim, bool keepdim=False, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, at::IntArrayRef dim, bool keepdim, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::IntArrayRef dim, bool keepdim, at::Tensor & out);
};

struct TORCH_API logsumexp_names {
  using schema = at::Tensor (const at::Tensor &, at::DimnameList, bool);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::logsumexp")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "names")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "logsumexp.names(Tensor self, Dimname[1] dim, bool keepdim=False) -> Tensor")
  static at::Tensor call(const at::Tensor & self, at::DimnameList dim, bool keepdim);
  static at::Tensor redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool keepdim);
};

struct TORCH_API logsumexp_names_out {
  using schema = at::Tensor & (const at::Tensor &, at::DimnameList, bool, at::Tensor &);
  using ptr_schema = schema*;
  // See Note [static constexpr char* members for windows NVCC]
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(name, "aten::logsumexp")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(overload_name, "names_out")
  STATIC_CONSTEXPR_STR_INL_EXCEPT_WIN_CUDA(schema_str, "logsumexp.names_out(Tensor self, Dimname[1] dim, bool keepdim=False, *, Tensor(a!) out) -> Tensor(a!)")
  static at::Tensor & call(const at::Tensor & self, at::DimnameList dim, bool keepdim, at::Tensor & out);
  static at::Tensor & redispatch(c10::DispatchKeySet dispatchKeySet, const at::Tensor & self, at::DimnameList dim, bool keepdim, at::Tensor & out);
};

}} // namespace at::_ops
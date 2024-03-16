#pragma once

// @generated by torchgen/gen.py from Function.h

#include <ATen/Context.h>
#include <ATen/DeviceGuard.h>
#include <ATen/TensorUtils.h>
#include <ATen/TracerMode.h>
#include <ATen/core/Generator.h>
#include <ATen/core/Reduction.h>
#include <ATen/core/Tensor.h>
#include <c10/core/Scalar.h>
#include <c10/core/Storage.h>
#include <c10/core/TensorOptions.h>
#include <c10/util/Deprecated.h>
#include <c10/util/Optional.h>



#include <ATen/ops/atleast_2d_ops.h>

namespace at {


// aten::atleast_2d(Tensor self) -> Tensor
inline at::Tensor atleast_2d(const at::Tensor & self) {
    return at::_ops::atleast_2d::call(self);
}

// aten::atleast_2d.Sequence(Tensor[] tensors) -> Tensor[]
inline ::std::vector<at::Tensor> atleast_2d(at::TensorList tensors) {
    return at::_ops::atleast_2d_Sequence::call(tensors);
}

}

/*
 * Copyright 2015, 2016, 2017 Alexey Chernov <4ernov@gmail.com>
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 * http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */

#ifndef FLOAXIE_HUGE_VAL_H
#define FLOAXIE_HUGE_VAL_H

#include <cmath>
#include <limits>

namespace floaxie {
/** \brief Variable template to unify getting `HUGE_VAL` for
 * different floating point types in parameterized manner.
 *
 * \tparam FloatType floating point type to get `HUGE_VAL` for.
 *
 * \see [HUGE_VALF, HUGE_VAL, HUGE_VALL]
 * (http://en.cppreference.com/w/cpp/numeric/math/HUGE_VAL)
 */
template <typename FloatType>
constexpr FloatType huge_value = std::numeric_limits<FloatType>::infinity();

/** \brief `float`. */
template <> constexpr float huge_value<float> = HUGE_VALF;

/** \brief `double`. */
template <> constexpr double huge_value<double> = HUGE_VAL;

/** \brief `long double`. */
template <> constexpr long double huge_value<long double> = HUGE_VALL;
} // namespace floaxie

#endif // FLOAXIE_HUGE_VAL_H

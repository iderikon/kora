/*
Copyright (c) 2013 Andrey Goryachev <andrey.goryachev@gmail.com>
Copyright (c) 2011-2013 Other contributors as noted in the AUTHORS file.

This file is part of Kora.

Kora is free software; you can redistribute it and/or modify
it under the terms of the GNU Lesser General Public License as published by
the Free Software Foundation; either version 3 of the License, or
(at your option) any later version.

Kora is distributed in the hope that it will be useful,
but WITHOUT ANY WARRANTY; without even the implied warranty of
MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the
GNU Lesser General Public License for more details.

You should have received a copy of the GNU Lesser General Public License
along with this program. If not, see <http://www.gnu.org/licenses/>.
*/

#ifndef KORA_UTILITY_SFINAE_HPP
#define KORA_UTILITY_SFINAE_HPP

namespace kora {

/*!
 * \brief SFINAE helper to match on types having required nested type.
 *
 * Use it instead of \p std::enable_if to enable a specialization if the dependent type has some nested type.
 *
 * Usage: <tt>template<class T> struct some_struct<T, typename requires_type<T::nested_type>::type> { } </tt>
 */
template<class T, class Result = void>
struct requires_type {
    typedef Result type;
};

/*!
 * \brief SFINAE helper to match on types having required method.
 *
 * Use it instead of \p std::enable_if to enable a specialization
 * if the dependent type has method with given name and signature.
 *
 * Usage: <tt>template<class T> struct some_struct<T, typename requires_method<void(T::*)(int, double), T::method_name>::type> { };</tt>
 */
template<class Method, Method, class Result = void>
struct requires_method {
    typedef Result type;
};

} // namespace kora

#endif

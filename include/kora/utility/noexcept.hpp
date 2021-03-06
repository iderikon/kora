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

#ifndef KORA_UTILITY_NOEXCEPT_HPP
#define KORA_UTILITY_NOEXCEPT_HPP

#include "kora/utility/platform.hpp"

/*!
 * \def KORA_NOEXCEPT
 *
 * Declares that a function doesn't throw exceptions.
 * Use it instead of \p throw() or \p noexcept.
 * This macro has been introduced because some ancient compilers don't support \p noexcept specifier,
 * and \p throw() is depricated.
 */

#ifdef KORA_NOT_BAD
    #define KORA_NOEXCEPT noexcept
#else
    #define KORA_NOEXCEPT throw()
#endif

#endif

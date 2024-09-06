#ifndef OSMIUM_UTIL_ENDIAN_HPP
#define OSMIUM_UTIL_ENDIAN_HPP

/*

This file is part of Osmium (https://osmcode.org/libosmium).

Copyright 2013-2022 Jochen Topf <jochen@topf.org> and others (see README).

Boost Software License - Version 1.0 - August 17th, 2003

Permission is hereby granted, free of charge, to any person or organization
obtaining a copy of the software and accompanying documentation covered by
this license (the "Software") to use, reproduce, display, distribute,
execute, and transmit the Software, and to prepare derivative works of the
Software, and to permit third-parties to whom the Software is furnished to
do so, all subject to the following:

The copyright notices in the Software and this entire statement, including
the above license grant, this restriction and the following disclaimer,
must be included in all copies of the Software, in whole or in part, and
all derivative works of the Software, unless such copies or derivative
works are solely in the form of machine-executable object code generated by
a source language processor.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE, TITLE AND NON-INFRINGEMENT. IN NO EVENT
SHALL THE COPYRIGHT HOLDERS OR ANYONE DISTRIBUTING THE SOFTWARE BE LIABLE
FOR ANY DAMAGES OR OTHER LIABILITY, WHETHER IN CONTRACT, TORT OR OTHERWISE,
ARISING FROM, OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER
DEALINGS IN THE SOFTWARE.

*/

// Windows is only available for little endian architectures
// https://stackoverflow.com/questions/6449468/can-i-safely-assume-that-windows-installations-will-always-be-little-endian
#if defined(__FreeBSD__) || defined(__DragonFly__)
# include <sys/endian.h>
#elif !defined(_WIN32) && !defined(__APPLE__)
# include <endian.h>
#else
# define __LITTLE_ENDIAN 1234
# define __BYTE_ORDER __LITTLE_ENDIAN
#endif

#endif // OSMIUM_UTIL_ENDIAN_HPP

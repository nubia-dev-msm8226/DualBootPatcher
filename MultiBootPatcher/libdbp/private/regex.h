/*
 * Copyright (C) 2014  Xiao-Long Chen <chenxiaolong@cxl.epac.to>
 *
 * This file is part of MultiBootPatcher
 *
 * MultiBootPatcher is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 3 of the License, or
 * (at your option) any later version.
 *
 * MultiBootPatcher is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with MultiBootPatcher.  If not, see <http://www.gnu.org/licenses/>.
 */

#ifndef MBP_REGEX_H
#define MBP_REGEX_H

#ifdef USE_BOOST_REGEX

#include <boost/regex.hpp>

#define MBP_regex boost::regex
#define MBP_regex_replace boost::regex_replace
#define MBP_regex_search boost::regex_search
#define MBP_smatch boost::smatch

#else

#include <regex>

#define MBP_regex std::regex
#define MBP_regex_replace std::regex_replace
#define MBP_regex_search std::regex_search
#define MBP_smatch std::smatch

#endif

#endif // MBP_REGEX_H
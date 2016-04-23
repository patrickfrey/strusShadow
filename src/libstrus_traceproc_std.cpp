/*
 * Copyright (c) 2014 Patrick P. Frey
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
/// \brief Exported functions of the strus standard trace processor library
/// \file libstrus_traceproc_std.cpp
#include "strus/lib/traceproc_std.hpp"
#include "traceProcessor.hpp"
#include "traceIdMap.hpp"
#include "strus/errorBufferInterface.hpp"
#include "strus/base/dll_tags.hpp"
#include "internationalization.hpp"
#include "errorUtils.hpp"

using namespace strus;
static bool g_intl_initialized = false;

DLL_PUBLIC TraceProcessorInterface* strus::createTraceProcessor_memory( ErrorBufferInterface* errorhnd)
{
	try
	{
		if (!g_intl_initialized)
		{
			strus::initMessageTextDomain();
			g_intl_initialized = true;
		}
		return new TraceProcessor_memory( errorhnd);
	}
	CATCH_ERROR_MAP_RETURN( _TXT("error creating trace processor (memory): %s"), *errorhnd, 0);
}


DLL_PUBLIC TraceProcessorInterface* strus::createTraceProcessor_textfile( ErrorBufferInterface* errorhnd)
{
	try
	{
		if (!g_intl_initialized)
		{
			strus::initMessageTextDomain();
			g_intl_initialized = true;
		}
		return new TraceProcessor_textfile( errorhnd);
	}
	CATCH_ERROR_MAP_RETURN( _TXT("error creating trace processor (textfile): %s"), *errorhnd, 0);
}


DLL_PUBLIC TraceProcessorInterface* strus::createTraceProcessor_breakpoint( ErrorBufferInterface* errorhnd)
{
	try
	{
		if (!g_intl_initialized)
		{
			strus::initMessageTextDomain();
			g_intl_initialized = true;
		}
		return new TraceProcessor_breakpoint( errorhnd);
	}
	CATCH_ERROR_MAP_RETURN( _TXT("error creating trace processor (breakpoint): %s"), *errorhnd, 0);
}


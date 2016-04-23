/*
 * Copyright (c) 2016 Patrick P. Frey
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
/// \brief Implementation of inspecting elements of logged traces
/// \file traceViewer_memory.cpp
#include "traceViewer_memory.hpp"
#include "traceLogger_memory.hpp"
#include "internationalization.hpp"
#include "errorUtils.hpp"
#include "strus/errorBufferInterface.hpp"

using namespace strus;

std::vector<TraceRecord> TraceViewer_memory::listMethodCalls(
		const TraceQuery& query,
		std::size_t startIndex,
		std::size_t maxNofResults) const
{
	return m_logger->listMethodCalls( query, startIndex, maxNofResults);
}

TraceTimeCounter TraceViewer_memory::getObjectCreationTime(
		const TraceObjectId& objId) const
{
	return m_logger->getObjectCreationTime( objId);
}


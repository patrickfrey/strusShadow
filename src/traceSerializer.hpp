/*
 * Copyright (c) 2016 Patrick P. Frey
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
/// \brief Implementation of serialization methods of more complec objects
/// \file traceSerializer.hpp
#ifndef _STRUS_TRACE_SERIALIZER_HPP_INCLUDED
#define _STRUS_TRACE_SERIALIZER_HPP_INCLUDED
#include "serialize.hpp"
#include "strus/traceLoggerInterface.hpp"
#include "strus/numericVariant.hpp"
#include "strus/documentClass.hpp"
#include "strus/termStatistics.hpp"
#include "strus/globalStatistics.hpp"
#include "strus/metaDataRestrictionInterface.hpp"
#include "strus/databaseOptions.hpp"
#include "strus/databaseInterface.hpp"
#include "strus/databaseCursorInterface.hpp"
#include "strus/storageInterface.hpp"
#include "strus/storageClientInterface.hpp"
#include "strus/summaryElement.hpp"
#include "strus/summarizationVariable.hpp"
#include "strus/documentTermIteratorInterface.hpp"
#include "strus/weightedDocument.hpp"
#include "strus/resultDocument.hpp"
#include "strus/queryResult.hpp"
#include "strus/queryEvalInterface.hpp"
#include "strus/queryProcessorInterface.hpp"
#include "strus/textProcessorInterface.hpp"
#include "strus/documentAnalyzerInterface.hpp"
#include "strus/queryAnalyzerInterface.hpp"
#include "strus/analyzer/token.hpp"
#include "strus/statisticsProcessorInterface.hpp"
#include "strus/statisticsViewerInterface.hpp"


namespace strus
{

/// \brief Forward declaration
class ErrorBufferInterface;

/// \brief Class for inspecting logged traces
class TraceSerializer
	:protected Serializer
{
public:
	/// \brief Constructor
	TraceSerializer()
		:m_error(false){}
	/// \brief Destructor
	~TraceSerializer(){}

	void packVoid();
	void packInt( const int& value);
	void packInt8( const int8_t& value);
	void packInt16( const int16_t& value);
	void packInt32( const int32_t& value);
	void packInt64( const int64_t& value);
	void packUInt( const unsigned int& value);
	void packUInt8( const uint8_t& value);
	void packUInt16( const uint16_t& value);
	void packUInt32( const uint32_t& value);
	void packUInt64( const uint64_t& value);
	void packSize( const std::size_t& value);
	void packIndex( const Index& value);
	void packGlobalCounter( const GlobalCounter& value);
	void packFloat( const float& value);
	void packDouble( const double& value);
	void packBool( const bool& value);
	void packString( const std::string& value);
	void packStringVector( const std::vector<std::string>& ar);
	void packIndexVector( const std::vector<Index>& ar);
	void packCharp( const char* buf);
	void packCharpp( const char** buf);
	void openIndex( const std::size_t& value);
	void openTag( const std::string& name);
	void close();

	void packObject( const TraceClassId& classId, const TraceObjectId& objId);
	void packBuffer( const char* buf, std::size_t size);
	void packBufferFloat( const double* buf, std::size_t size);
	void packNumericVariant( const NumericVariant& val);

	void packDocumentClass( const DocumentClass& prop);
	void packTermStatistics( const TermStatistics& stats);
	void packGlobalStatistics( const GlobalStatistics& stats);
	void packMetaDataRestrictionCompareOperator( MetaDataRestrictionInterface::CompareOperator val);

	void packDatabaseOptions( const DatabaseOptions& val);
	void packDatabaseConfigType( const DatabaseInterface::ConfigType& val);
	void packStorageConfigType( const StorageInterface::ConfigType& val);
	void packFeatureOptions( const DocumentAnalyzerInterface::FeatureOptions& val);
	void packSummaryElement( const SummaryElement& val);
	void packSummaryElementVector( const std::vector<SummaryElement>& val);
	void packSummarizationVariable( const SummarizationVariable& val);
	void packSummarizationVariableVector( const std::vector<SummarizationVariable>& val);
	void packDocumentTermIteratorTerm( const DocumentTermIteratorInterface::Term& term);
	void packSlice( DatabaseCursorInterface::Slice& val);
	void packAnalyzerDocument( const analyzer::Document& val);
	void packAnalyzerAttribute( const analyzer::Attribute& val);
	void packAnalyzerMetaData( const analyzer::MetaData& val);
	void packAnalyzerTerm( const analyzer::Term& val);
	void packAnalyzerTermVector( const analyzer::TermVector& val);
	void packAnalyzerTermVectorVector( const std::vector<analyzer::TermVector>& val);
	void packAnalyzerToken( const analyzer::Token& val);
	void packAnalyzerTokenVector( const std::vector<analyzer::Token>& val);
	void packWeightedDocument( const WeightedDocument& val);
	void packResultDocument( const ResultDocument& val);
	void packQueryResult( const QueryResult& val);
	void packFeatureParameter( const QueryEvalInterface::FeatureParameter& val);
	void packFeatureParameterVector( const std::vector<QueryEvalInterface::FeatureParameter>& ar);
	void packPhrase( const QueryAnalyzerInterface::Phrase& val);
	void packPhraseVector( const std::vector<QueryAnalyzerInterface::Phrase>& val);
	void packDocumentStatisticsType( const StorageClientInterface::DocumentStatisticsType& val);
	void packStatisticsProcessorBuilderOptions( const StatisticsProcessorInterface::BuilderOptions& val);
	void packStatisticsViewerDocumentFrequencyChange( const StatisticsViewerInterface::DocumentFrequencyChange& val);
	void packQueryProcessorFunctionType( const QueryProcessorInterface::FunctionType& val);
	void packTextProcessorFunctionType( const TextProcessorInterface::FunctionType& val);
	void packPostingJoinOperatorDescription( const PostingJoinOperatorInterface::Description& val);
	void packFunctionDescription( const FunctionDescription& val);

	bool hasError() const
	{
		return m_error;
	}

	const std::string& content() const
	{
		return Serializer::content();
	}

private:
	bool m_error;
};

}//namespace
#endif



/*
* Copyright (c) 2016 Patrick P. Frey
*
* This Source Code Form is subject to the terms of the Mozilla Public
* License, v. 2.0. If a copy of the MPL was not distributed with this
* file, You can obtain one at http://mozilla.org/MPL/2.0/.
*/
/// \brief Identifiers for objects and methods for serialization
/// \note PROGRAM (strusTraceCodeGen) GENERATED FILE! DO NOT MODIFY!!!
/// \file objectIds_gen.hpp
#ifndef _STRUS_TRACE_PARSER_objectIds_gen_HPP_INCLUDED
#define _STRUS_TRACE_PARSER_objectIds_gen_HPP_INCLUDED
namespace strus {

enum ClassId
{
	ClassId_AclReader=1,
	ClassId_AggregatorFunctionInstance=2,
	ClassId_AggregatorFunction=3,
	ClassId_AnalyzerObjectBuilder=4,
	ClassId_AttributeReader=5,
	ClassId_ContentIterator=6,
	ClassId_ContentStatisticsContext=7,
	ClassId_ContentStatistics=8,
	ClassId_DatabaseBackupCursor=9,
	ClassId_DatabaseClient=10,
	ClassId_DatabaseCursor=11,
	ClassId_Database=12,
	ClassId_DatabaseTransaction=13,
	ClassId_DocumentAnalyzerContext=14,
	ClassId_DocumentAnalyzerInstance=15,
	ClassId_DocumentAnalyzerMap=16,
	ClassId_DocumentClassDetector=17,
	ClassId_DocumentTermIterator=18,
	ClassId_FileLocator=19,
	ClassId_ForwardIterator=20,
	ClassId_InvAclIterator=21,
	ClassId_MetaDataReader=22,
	ClassId_MetaDataRestrictionInstance=23,
	ClassId_MetaDataRestriction=24,
	ClassId_NormalizerFunctionInstance=25,
	ClassId_NormalizerFunction=26,
	ClassId_PatternLexerContext=27,
	ClassId_PatternLexerInstance=28,
	ClassId_PatternLexer=29,
	ClassId_PatternMatcherContext=30,
	ClassId_PatternMatcherInstance=31,
	ClassId_PatternMatcher=32,
	ClassId_PatternTermFeederInstance=33,
	ClassId_PatternTermFeeder=34,
	ClassId_PostingIterator=35,
	ClassId_PostingJoinOperator=36,
	ClassId_QueryAnalyzerContext=37,
	ClassId_QueryAnalyzerInstance=38,
	ClassId_QueryEval=39,
	ClassId_Query=40,
	ClassId_QueryProcessor=41,
	ClassId_ScalarFunctionInstance=42,
	ClassId_ScalarFunction=43,
	ClassId_ScalarFunctionParser=44,
	ClassId_SegmenterContext=45,
	ClassId_SegmenterInstance=46,
	ClassId_Segmenter=47,
	ClassId_SegmenterMarkupContext=48,
	ClassId_StatisticsBuilder=49,
	ClassId_StatisticsIterator=50,
	ClassId_StatisticsProcessor=51,
	ClassId_StatisticsViewer=52,
	ClassId_StorageAlterMetaDataTable=53,
	ClassId_StorageClient=54,
	ClassId_StorageDocument=55,
	ClassId_StorageDocumentUpdate=56,
	ClassId_StorageDump=57,
	ClassId_Storage=58,
	ClassId_StorageObjectBuilder=59,
	ClassId_StorageTransaction=60,
	ClassId_SummarizerFunctionContext=61,
	ClassId_SummarizerFunctionInstance=62,
	ClassId_SummarizerFunction=63,
	ClassId_TextProcessor=64,
	ClassId_TokenizerFunctionInstance=65,
	ClassId_TokenizerFunction=66,
	ClassId_TokenMarkupContext=67,
	ClassId_TokenMarkupInstance=68,
	ClassId_ValueIterator=69,
	ClassId_VectorStorageClient=70,
	ClassId_VectorStorageDump=71,
	ClassId_VectorStorage=72,
	ClassId_VectorStorageSearch=73,
	ClassId_VectorStorageTransaction=74,
	ClassId_WeightingFunctionContext=75,
	ClassId_WeightingFunctionInstance=76,
	ClassId_WeightingFunction=77
};

struct TraceClassNameMap
{
	static const char* className( unsigned int classId);
};

class AclReaderConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_skipDoc=1,
		Method_getReadAccessList=2
	};
	static const char* methodName( MethodId mid);
};

class AggregatorFunctionInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_evaluate=1,
		Method_view=2
	};
	static const char* methodName( MethodId mid);
};

class AggregatorFunctionConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createInstance=1,
		Method_getDescription=2
	};
	static const char* methodName( MethodId mid);
};

class AnalyzerObjectBuilderConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_getTextProcessor=1,
		Method_createDocumentAnalyzer=2,
		Method_createQueryAnalyzer=3,
		Method_createDocumentAnalyzerMap=4,
		Method_createDocumentClassDetector=5,
		Method_createContentStatistics=6
	};
	static const char* methodName( MethodId mid);
};

class AttributeReaderConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_elementHandle=1,
		Method_skipDoc=2,
		Method_getValue=3,
		Method_getNames=4
	};
	static const char* methodName( MethodId mid);
};

class ContentIteratorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_getNext=1
	};
	static const char* methodName( MethodId mid);
};

class ContentStatisticsContextConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_putContent=1,
		Method_statistics=2,
		Method_nofDocuments=3
	};
	static const char* methodName( MethodId mid);
};

class ContentStatisticsConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addLibraryElement=1,
		Method_createContext=2,
		Method_view=3
	};
	static const char* methodName( MethodId mid);
};

class DatabaseBackupCursorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_fetch=1
	};
	static const char* methodName( MethodId mid);
};

class DatabaseClientConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createTransaction=1,
		Method_createCursor=2,
		Method_createBackupCursor=3,
		Method_writeImm=4,
		Method_removeImm=5,
		Method_readValue=6,
		Method_close=7,
		Method_config=8
	};
	static const char* methodName( MethodId mid);
};

class DatabaseCursorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_seekUpperBound=1,
		Method_seekUpperBoundRestricted=2,
		Method_seekFirst=3,
		Method_seekLast=4,
		Method_seekNext=5,
		Method_seekPrev=6,
		Method_key=7,
		Method_value=8
	};
	static const char* methodName( MethodId mid);
};

class DatabaseConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_exists=1,
		Method_createClient=2,
		Method_createDatabase=3,
		Method_restoreDatabase=4,
		Method_destroyDatabase=5,
		Method_getConfigDescription=6,
		Method_getConfigParameters=7
	};
	static const char* methodName( MethodId mid);
};

class DatabaseTransactionConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createCursor=1,
		Method_write=2,
		Method_remove=3,
		Method_removeSubTree=4,
		Method_commit=5,
		Method_rollback=6
	};
	static const char* methodName( MethodId mid);
};

class DocumentAnalyzerContextConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_putInput=1,
		Method_analyzeNext=2
	};
	static const char* methodName( MethodId mid);
};

class DocumentAnalyzerInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addSearchIndexFeature=1,
		Method_addForwardIndexFeature=2,
		Method_defineMetaData=3,
		Method_defineAggregatedMetaData=4,
		Method_defineAttribute=5,
		Method_defineSubDocument=6,
		Method_defineSubContent=7,
		Method_addPatternLexem=8,
		Method_definePatternMatcherPostProc=9,
		Method_definePatternMatcherPreProc=10,
		Method_addSearchIndexFeatureFromPatternMatch=11,
		Method_addForwardIndexFeatureFromPatternMatch=12,
		Method_defineMetaDataFromPatternMatch=13,
		Method_defineAttributeFromPatternMatch=14,
		Method_analyze=15,
		Method_createContext=16,
		Method_view=17
	};
	static const char* methodName( MethodId mid);
};

class DocumentAnalyzerMapConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createAnalyzer=1,
		Method_addAnalyzer=2,
		Method_getAnalyzer=3,
		Method_analyze=4,
		Method_createContext=5,
		Method_view=6
	};
	static const char* methodName( MethodId mid);
};

class DocumentClassDetectorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_defineDocumentSchemeDetector=1,
		Method_detect=2
	};
	static const char* methodName( MethodId mid);
};

class DocumentTermIteratorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_skipDoc=1,
		Method_nextTerm=2,
		Method_termDocumentFrequency=3,
		Method_termValue=4
	};
	static const char* methodName( MethodId mid);
};

class FileLocatorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addResourcePath=1,
		Method_getResourceFilePath=2,
		Method_defineWorkDir=3,
		Method_getWorkDir=4,
		Method_getResourcePaths=5
	};
	static const char* methodName( MethodId mid);
};

class ForwardIteratorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_skipDoc=1,
		Method_skipPos=2,
		Method_fetch=3
	};
	static const char* methodName( MethodId mid);
};

class InvAclIteratorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_skipDoc=1
	};
	static const char* methodName( MethodId mid);
};

class MetaDataReaderConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_elementHandle=1,
		Method_nofElements=2,
		Method_skipDoc=3,
		Method_getValue=4,
		Method_getType=5,
		Method_getName=6,
		Method_getNames=7
	};
	static const char* methodName( MethodId mid);
};

class MetaDataRestrictionInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_match=1
	};
	static const char* methodName( MethodId mid);
};

class MetaDataRestrictionConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addCondition=1,
		Method_createInstance=2,
		Method_tostring=3
	};
	static const char* methodName( MethodId mid);
};

class NormalizerFunctionInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_normalize=1,
		Method_view=2
	};
	static const char* methodName( MethodId mid);
};

class NormalizerFunctionConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createInstance=1,
		Method_getDescription=2
	};
	static const char* methodName( MethodId mid);
};

class PatternLexerContextConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_match=1,
		Method_reset=2
	};
	static const char* methodName( MethodId mid);
};

class PatternLexerInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_defineOption=1,
		Method_defineLexemName=2,
		Method_defineLexem=3,
		Method_defineSymbol=4,
		Method_getSymbol=5,
		Method_getLexemName=6,
		Method_compile=7,
		Method_createContext=8,
		Method_view=9
	};
	static const char* methodName( MethodId mid);
};

class PatternLexerConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_getCompileOptionNames=1,
		Method_createInstance=2,
		Method_getDescription=3
	};
	static const char* methodName( MethodId mid);
};

class PatternMatcherContextConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_putInput=1,
		Method_fetchResults=2,
		Method_getStatistics=3,
		Method_reset=4
	};
	static const char* methodName( MethodId mid);
};

class PatternMatcherInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_defineOption=1,
		Method_defineTermFrequency=2,
		Method_pushTerm=3,
		Method_pushExpression=4,
		Method_pushPattern=5,
		Method_attachVariable=6,
		Method_definePattern=7,
		Method_compile=8,
		Method_createContext=9,
		Method_view=10
	};
	static const char* methodName( MethodId mid);
};

class PatternMatcherConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_getCompileOptionNames=1,
		Method_createInstance=2,
		Method_getDescription=3
	};
	static const char* methodName( MethodId mid);
};

class PatternTermFeederInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_defineLexem=1,
		Method_defineSymbol=2,
		Method_getLexem=3,
		Method_lexemTypes=4,
		Method_getSymbol=5,
		Method_view=6
	};
	static const char* methodName( MethodId mid);
};

class PatternTermFeederConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createInstance=1
	};
	static const char* methodName( MethodId mid);
};

class PostingIteratorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_skipDoc=1,
		Method_skipDocCandidate=2,
		Method_skipPos=3,
		Method_featureid=4,
		Method_documentFrequency=5,
		Method_frequency=6,
		Method_docno=7,
		Method_posno=8,
		Method_length=9
	};
	static const char* methodName( MethodId mid);
};

class PostingJoinOperatorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createResultIterator=1,
		Method_getDescription=2
	};
	static const char* methodName( MethodId mid);
};

class QueryAnalyzerContextConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_putField=1,
		Method_groupElements=2,
		Method_analyze=3
	};
	static const char* methodName( MethodId mid);
};

class QueryAnalyzerInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addElement=1,
		Method_addPatternLexem=2,
		Method_definePatternMatcherPostProc=3,
		Method_definePatternMatcherPreProc=4,
		Method_addElementFromPatternMatch=5,
		Method_declareTermPriority=6,
		Method_queryTermTypes=7,
		Method_queryFieldTypes=8,
		Method_createContext=9,
		Method_view=10
	};
	static const char* methodName( MethodId mid);
};

class QueryEvalConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addTerm=1,
		Method_addSelectionFeature=2,
		Method_addRestrictionFeature=3,
		Method_addExclusionFeature=4,
		Method_addSummarizerFunction=5,
		Method_addWeightingFunction=6,
		Method_defineWeightingFormula=7,
		Method_createQuery=8
	};
	static const char* methodName( MethodId mid);
};

class QueryConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_pushTerm=1,
		Method_pushDocField=2,
		Method_pushExpression=3,
		Method_attachVariable=4,
		Method_defineFeature=5,
		Method_defineTermStatistics=6,
		Method_defineGlobalStatistics=7,
		Method_addMetaDataRestrictionCondition=8,
		Method_addDocumentEvaluationSet=9,
		Method_addAccess=10,
		Method_setMaxNofRanks=11,
		Method_setMinRank=12,
		Method_setWeightingVariableValue=13,
		Method_setDebugMode=14,
		Method_evaluate=15,
		Method_tostring=16
	};
	static const char* methodName( MethodId mid);
};

class QueryProcessorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_getResourceFilePath=1,
		Method_definePostingJoinOperator=2,
		Method_getPostingJoinOperator=3,
		Method_defineWeightingFunction=4,
		Method_getWeightingFunction=5,
		Method_defineSummarizerFunction=6,
		Method_getSummarizerFunction=7,
		Method_getFunctionList=8,
		Method_defineScalarFunctionParser=9,
		Method_getScalarFunctionParser=10
	};
	static const char* methodName( MethodId mid);
};

class ScalarFunctionInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_setVariableValue=1,
		Method_call=2,
		Method_tostring=3
	};
	static const char* methodName( MethodId mid);
};

class ScalarFunctionConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_getVariables=1,
		Method_getNofArguments=2,
		Method_setDefaultVariableValue=3,
		Method_createInstance=4,
		Method_tostring=5
	};
	static const char* methodName( MethodId mid);
};

class ScalarFunctionParserConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createFunction=1,
		Method_getDescription=2
	};
	static const char* methodName( MethodId mid);
};

class SegmenterContextConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_putInput=1,
		Method_getNext=2
	};
	static const char* methodName( MethodId mid);
};

class SegmenterInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_defineSelectorExpression=1,
		Method_defineSubSection=2,
		Method_createContext=3,
		Method_createMarkupContext=4,
		Method_view=5
	};
	static const char* methodName( MethodId mid);
};

class SegmenterConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_mimeType=1,
		Method_createInstance=2,
		Method_createContentIterator=3,
		Method_getDescription=4
	};
	static const char* methodName( MethodId mid);
};

class SegmenterMarkupContextConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_getNext=1,
		Method_segmentSize=2,
		Method_tagName=3,
		Method_tagLevel=4,
		Method_putOpenTag=5,
		Method_putAttribute=6,
		Method_putCloseTag=7,
		Method_getContent=8
	};
	static const char* methodName( MethodId mid);
};

class StatisticsBuilderConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_setNofDocumentsInsertedChange=1,
		Method_addDfChange=2,
		Method_start=3,
		Method_rollback=4,
		Method_fetchMessage=5
	};
	static const char* methodName( MethodId mid);
};

class StatisticsIteratorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_getNext=1
	};
	static const char* methodName( MethodId mid);
};

class StatisticsProcessorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createViewer=1,
		Method_createBuilder=2
	};
	static const char* methodName( MethodId mid);
};

class StatisticsViewerConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_nofDocumentsInsertedChange=1,
		Method_nextDfChange=2
	};
	static const char* methodName( MethodId mid);
};

class StorageAlterMetaDataTableConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addElement=1,
		Method_alterElement=2,
		Method_renameElement=3,
		Method_deleteElement=4,
		Method_clearElement=5,
		Method_commit=6,
		Method_rollback=7
	};
	static const char* methodName( MethodId mid);
};

class StorageClientConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_config=1,
		Method_createTermPostingIterator=2,
		Method_createBrowsePostingIterator=3,
		Method_createFieldPostingIterator=4,
		Method_createForwardIterator=5,
		Method_createDocumentTermIterator=6,
		Method_createInvAclIterator=7,
		Method_createAclReader=8,
		Method_nofDocumentsInserted=9,
		Method_documentFrequency=10,
		Method_maxDocumentNumber=11,
		Method_documentNumber=12,
		Method_termTypeNumber=13,
		Method_isForwardIndexTerm=14,
		Method_createTermTypeIterator=15,
		Method_createTermValueIterator=16,
		Method_createDocIdIterator=17,
		Method_createUserNameIterator=18,
		Method_documentStatistics=19,
		Method_createMetaDataReader=20,
		Method_createMetaDataRestriction=21,
		Method_createAttributeReader=22,
		Method_createTransaction=23,
		Method_createAllStatisticsIterator=24,
		Method_createChangeStatisticsIterator=25,
		Method_getStatisticsProcessor=26,
		Method_createDocumentChecker=27,
		Method_checkStorage=28,
		Method_close=29
	};
	static const char* methodName( MethodId mid);
};

class StorageDocumentConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addSearchIndexTerm=1,
		Method_addForwardIndexTerm=2,
		Method_setMetaData=3,
		Method_setAttribute=4,
		Method_setUserAccessRight=5,
		Method_done=6
	};
	static const char* methodName( MethodId mid);
};

class StorageDocumentUpdateConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addSearchIndexTerm=1,
		Method_addForwardIndexTerm=2,
		Method_clearSearchIndexTerm=3,
		Method_clearForwardIndexTerm=4,
		Method_setMetaData=5,
		Method_setAttribute=6,
		Method_clearAttribute=7,
		Method_setUserAccessRight=8,
		Method_clearUserAccessRight=9,
		Method_clearUserAccessRights=10,
		Method_done=11
	};
	static const char* methodName( MethodId mid);
};

class StorageDumpConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_nextChunk=1
	};
	static const char* methodName( MethodId mid);
};

class StorageConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createClient=1,
		Method_createStorage=2,
		Method_createAlterMetaDataTable=3,
		Method_getConfigDescription=4,
		Method_getConfigParameters=5,
		Method_createDump=6
	};
	static const char* methodName( MethodId mid);
};

class StorageObjectBuilderConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_getStorage=1,
		Method_getDatabase=2,
		Method_getQueryProcessor=3,
		Method_getStatisticsProcessor=4,
		Method_getVectorStorage=5,
		Method_createQueryEval=6
	};
	static const char* methodName( MethodId mid);
};

class StorageTransactionConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createDocument=1,
		Method_createDocumentUpdate=2,
		Method_deleteDocument=3,
		Method_deleteUserAccessRights=4,
		Method_updateMetaData=5,
		Method_updateDocumentFrequency=6,
		Method_commit=7,
		Method_rollback=8,
		Method_nofDocumentsAffected=9
	};
	static const char* methodName( MethodId mid);
};

class SummarizerFunctionContextConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addSummarizationFeature=1,
		Method_setVariableValue=2,
		Method_getSummary=3,
		Method_debugCall=4
	};
	static const char* methodName( MethodId mid);
};

class SummarizerFunctionInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addStringParameter=1,
		Method_addNumericParameter=2,
		Method_defineResultName=3,
		Method_getVariables=4,
		Method_createFunctionContext=5,
		Method_tostring=6
	};
	static const char* methodName( MethodId mid);
};

class SummarizerFunctionConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createInstance=1,
		Method_getDescription=2
	};
	static const char* methodName( MethodId mid);
};

class TextProcessorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_getResourceFilePath=1,
		Method_getSegmenterByName=2,
		Method_getSegmenterByMimeType=3,
		Method_getSegmenterOptions=4,
		Method_getTokenizer=5,
		Method_getNormalizer=6,
		Method_getAggregator=7,
		Method_getPatternLexer=8,
		Method_getPatternMatcher=9,
		Method_getPatternTermFeeder=10,
		Method_detectDocumentClass=11,
		Method_defineDocumentClassDetector=12,
		Method_defineSegmenter=13,
		Method_defineSegmenterOptions=14,
		Method_defineTokenizer=15,
		Method_defineNormalizer=16,
		Method_defineAggregator=17,
		Method_definePatternLexer=18,
		Method_definePatternMatcher=19,
		Method_getFunctionList=20
	};
	static const char* methodName( MethodId mid);
};

class TokenizerFunctionInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_concatBeforeTokenize=1,
		Method_tokenize=2,
		Method_view=3
	};
	static const char* methodName( MethodId mid);
};

class TokenizerFunctionConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createInstance=1,
		Method_getDescription=2
	};
	static const char* methodName( MethodId mid);
};

class TokenMarkupContextConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_putMarkup=1,
		Method_markupDocument=2
	};
	static const char* methodName( MethodId mid);
};

class TokenMarkupInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createContext=1,
		Method_view=2
	};
	static const char* methodName( MethodId mid);
};

class ValueIteratorConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_skip=1,
		Method_skipPrefix=2,
		Method_fetchValues=3
	};
	static const char* methodName( MethodId mid);
};

class VectorStorageClientConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createSearcher=1,
		Method_createTransaction=2,
		Method_conceptClassNames=3,
		Method_conceptFeatures=4,
		Method_nofConcepts=5,
		Method_featureConcepts=6,
		Method_featureVector=7,
		Method_featureName=8,
		Method_featureIndex=9,
		Method_vectorSimilarity=10,
		Method_nofFeatures=11,
		Method_config=12,
		Method_close=13
	};
	static const char* methodName( MethodId mid);
};

class VectorStorageDumpConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_nextChunk=1
	};
	static const char* methodName( MethodId mid);
};

class VectorStorageConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createStorage=1,
		Method_createClient=2,
		Method_createDump=3,
		Method_runBuild=4
	};
	static const char* methodName( MethodId mid);
};

class VectorStorageSearchConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_findSimilar=1,
		Method_findSimilarFromSelection=2,
		Method_close=3
	};
	static const char* methodName( MethodId mid);
};

class VectorStorageTransactionConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addFeature=1,
		Method_defineFeatureConceptRelation=2,
		Method_commit=3,
		Method_rollback=4
	};
	static const char* methodName( MethodId mid);
};

class WeightingFunctionContextConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addWeightingFeature=1,
		Method_setVariableValue=2,
		Method_call=3,
		Method_debugCall=4
	};
	static const char* methodName( MethodId mid);
};

class WeightingFunctionInstanceConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_addStringParameter=1,
		Method_addNumericParameter=2,
		Method_createFunctionContext=3,
		Method_getVariables=4,
		Method_tostring=5
	};
	static const char* methodName( MethodId mid);
};

class WeightingFunctionConst
{
public:
	enum MethodId
	{
		Method_Destructor=0,
		Method_createInstance=1,
		Method_getDescription=2
	};
	static const char* methodName( MethodId mid);
};


}//namespace
#endif


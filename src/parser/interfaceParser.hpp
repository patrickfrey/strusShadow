/*
 * Copyright (c) 2016 Patrick P. Frey
 *
 * This Source Code Form is subject to the terms of the Mozilla Public
 * License, v. 2.0. If a copy of the MPL was not distributed with this
 * file, You can obtain one at http://mozilla.org/MPL/2.0/.
 */
/// \brief Parser for Strus interfaces
/// \file interfaceParser.hpp
#ifndef _STRUS_TRACE_INTERFACE_PARSER_HPP_INCLUDED
#define _STRUS_TRACE_INTERFACE_PARSER_HPP_INCLUDED
#include <string>
#include <vector>
#include <map>
#include <set>

namespace strus
{

class VariableType
{
public:
	explicit VariableType( const char* pattern);
	VariableType( const VariableType& o);
	~VariableType();

	VariableType& operator()( const char* eventname, const char* output);

	bool parse( std::map<std::string,std::string>& defmap, char const*& si, const char* se) const;

	void print( std::string& out,
			const char* eventname,
			const std::map<std::string,std::string>& defmap,
			const std::string& name,
			const std::string& value) const;

	const std::string& source() const;

private:
	class Impl;
	Impl* m_impl;
};

class VariableValue
{
public:
	VariableValue()
		:m_type(0),m_defmap(){}
	VariableValue( const VariableType* type_, const std::map<std::string,std::string>& defmap_)
		:m_type(type_),m_defmap(defmap_){}
	VariableValue( const VariableValue& o)
		:m_type(o.m_type),m_defmap(o.m_defmap){}
	~VariableValue(){}

	const VariableType* type()				{return m_type;}
	const std::map<std::string,std::string>& defmap()	{return m_defmap;}

private:
	const VariableType* m_type;
	std::map<std::string,std::string> m_defmap;
};

class TypeSystem
{
public:
	TypeSystem()
	{
		fillRuleTables();
		fillTypeTables();
	}
	~TypeSystem(){}

	VariableType& defineType( const char* pattern);
	VariableValue parse( char const*& si, const char* se) const;

	bool isImplementedMethod( const std::string& name) const
	{
		return m_notImplMethods.find(name) == m_notImplMethods.end();
	}
	bool isImplementedInterface( const std::string& name) const
	{
		return m_notImplInterfaces.find(name) == m_notImplInterfaces.end();
	}
	bool isPassOwnershipMethod( const std::string& name) const
	{
		return m_passOwnershipMethod.find(name) != m_passOwnershipMethod.end();
	}

private:
	void fillRuleTables();
	void fillTypeTables();

private:
	std::vector<VariableType> m_variableTypes;

	std::set<std::string> m_notImplMethods;
	std::set<std::string> m_notImplInterfaces;
	std::set<std::string> m_passOwnershipMethod;
};

class MethodDef
{
public:
	MethodDef( const std::string& name_, const VariableValue& returnvalue_, const std::vector<VariableValue>& param_)
		:m_name(name_),m_returnvalue(returnvalue_),m_param(param_){}
	MethodDef( const MethodDef& o)
		:m_name(o.m_name),m_returnvalue(o.m_returnvalue),m_param(o.m_param){}

private:
	std::string m_name;
	VariableValue m_returnvalue;
	std::vector<VariableValue> m_param;
};

class ClassDef
{
public:
	ClassDef( const ClassDef& o)
		:m_name(o.m_name),m_methodar(o.m_methodar){}
	explicit ClassDef( const std::string& name_)
		:m_name(name_){}

	void addMethod( const MethodDef& method)
	{
		m_methodar.push_back( method);
	}

private:
	std::string m_name;
	std::vector<MethodDef> m_methodar;
};

class InterfacesDef
{
public:
	InterfacesDef( const InterfacesDef& o)
		:m_classdefar(o.m_classdefar){}
	explicit InterfacesDef( const TypeSystem* typeSystem_)
		:m_typeSystem(typeSystem_){}

	void addSource( const std::string& source);

private:
	void parseClass( const std::string& className, char const*& si, const char* se);
	std::vector<VariableValue> parseParameters( char const*& si, const char* se);

private:
	const TypeSystem* m_typeSystem;
	std::vector<ClassDef> m_classdefar;
};
} //namespace
#endif


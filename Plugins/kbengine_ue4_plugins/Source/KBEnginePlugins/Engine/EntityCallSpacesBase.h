/*
	Generated by KBEngine!
	Please do not modify this file!
	
	tools = kbcmd
*/

#pragma once

#include "KBECommon.h"
#include "EntityCall.h"
#include "KBETypes.h"
#include "CustomDataTypes.h"

// defined in */scripts/entity_defs/Spaces.def

namespace KBEngine
{

class KBENGINEPLUGINS_API EntityBaseEntityCall_SpacesBase : public EntityCall
{
public:
	EntityBaseEntityCall_SpacesBase() : EntityCall()
	{
		type = ENTITYCALL_TYPE_BASE;
	}

};

class KBENGINEPLUGINS_API EntityCellEntityCall_SpacesBase : public EntityCall
{
public:
	EntityCellEntityCall_SpacesBase() : EntityCall()
	{
		type = ENTITYCALL_TYPE_CELL;
	}

};

}
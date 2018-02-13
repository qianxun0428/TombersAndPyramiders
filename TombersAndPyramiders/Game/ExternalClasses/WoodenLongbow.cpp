/*===================================================================================*//**
	BaseLongbow

	Abstract class for a base longbow.

    @author Erick Fernandez de Arteaga
	
*//*====================================================================================*/

/*========================================================================================
	Dependencies
========================================================================================*/
#include "WoodenLongbow.h"

/*----------------------------------------------------------------------------------------
	Static Fields
----------------------------------------------------------------------------------------*/
const std::string WoodenLongbow::WOODEN_LONGBOW_PROJECTILE_IMAGE_NAME = "IceTile.png";

/*----------------------------------------------------------------------------------------
	Resource Management
----------------------------------------------------------------------------------------*/
WoodenLongbow::WoodenLongbow() :
	BaseLongbow{ WOODEN_LONGBOW_PROJECTILE_IMAGE_NAME }
{
	m_itemIcon = "WoodenLongbow.png";
}

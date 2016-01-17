/* **************************************************************************
              qgscliptominmaxenhancement.h -  description
                       -------------------
begin                : Fri Nov 16 2007
copyright            : (C) 2007 by Peter J. Ersts
email                : ersts@amnh.org

****************************************************************************/

/* **************************************************************************
 *                                                                         *
 *   This program is free software; you can redistribute it and/or modify  *
 *   it under the terms of the GNU General Public License as published by  *
 *   the Free Software Foundation; either version 2 of the License, or     *
 *   (at your option) any later version.                                   *
 *                                                                         *
 ***************************************************************************/

#ifndef QGSCLIPTOMINMAXENHANCEMENT_H
#define QGSCLIPTOMINMAXENHANCEMENT_H

#include "qgscontrastenhancementfunction.h"

/** \ingroup core
 * A raster contrast enhancement that will clip a value to the specified min/max range.
 * For example if a min max range of [10,240] is specified in the constructor, and
 * a value of 250 is called using enhance(), the value will be truncated ('clipped')
 * to 240.
 */
class CORE_EXPORT QgsClipToMinMaxEnhancement : public QgsContrastEnhancementFunction
{

  public:
    QgsClipToMinMaxEnhancement( QgsContrastEnhancement::QgsRasterDataType, double, double );

    int enhance( double );

    bool isValueInDisplayableRange( double );
};

//2%

class CORE_EXPORT Clip2PercentToMinMaxEnhancement : public QgsContrastEnhancementFunction
{

public:
	Clip2PercentToMinMaxEnhancement( QgsContrastEnhancement::QgsRasterDataType, double, double );

	int enhance( double );

};

#endif
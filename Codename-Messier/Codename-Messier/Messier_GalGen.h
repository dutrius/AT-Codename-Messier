#pragma once
#include "stdafx.h"

using namespace std;

// =================================
//         Galaxy Generation
// =================================

class Messier_GalGen
{
public:
	Messier_GalGen();
	Messier_GalGen(const Messier_GalGen &obj);
	~Messier_GalGen();

	// ======== Constants ========
	
	// ======== Get Methods ========

	// ======== Set Methods ========

private:
	// ======== Local Variables ========

	// -------- Standard Galaxy Parameters --------

	// Minimum default galaxy radius in lightyears.
	const int _GalGen_RadiusMin = 100000;
	// Maximum default galaxy width in lightyears.
	const int _GalGen_RadiusMax = 110000;
	// Number of star systems (does not count additional stars in binary systems). Actual number of stars is approx 10^12, which would be plain silly to simulate here.
	const int _GalGen_StarCount = 1000;
	// Maximum deviation from ecliptic plane in lightyears.
	const int _GalGen_EclipticDeviation = 300;


	// -------- Current Galaxy Parameters --------
	int _radiusMin;
	int _radiusMax;
	int _starCount;
	int _eclipticDeviation;


	// -------- Standard Star Distributions --------
	/* Taken from Table 2, found at http://articles.adsabs.harvard.edu/cgi-bin/nph-iarticle_query?2001JRASC..95...32L&amp;data_type=PDF_HIGH&amp;whole_paper=YES&amp;type=PRINTER&amp;filetype=.pdf
	   "Number density in the solar neighbouthood brighter than absolute magnitude +16 by spectral type and class, per 10,000 pc^3"

					| Spectral type
	   Class		|    O    |    B    |    A    |    F    |    G    |    K    |    M    | Totals
	   -------------+---------+---------+---------+---------+---------+---------+---------+--------
	   Giants		|		  |			|		  |    0.5  |    1.6  |    4    |    0.25 |   6.35
	   Main sequence| 0.00025 |    1    |    5    |   25    |   63    |  100    |  630    | 800
	   White dwarves|		  |   63    |  100    |   50    |   50    |   25    |         | 250

	   These are just defaults, and can be overriden at run time.

	   NOTES: 
	    - The Giants row lumps together giants, bright giants and supergiants.
		- No values for neutron stars or black holes.

	   TODO: Find values for neutron stars, black holes, etc.
	*/

	const double _Giant_TypeO = 0;
	const double _Giant_TypeB = 0;
	const double _Giant_TypeA = 0;
	const double _Giant_TypeF = 0.5;
	const double _Giant_TypeG = 1.6;
	const double _Giant_TypeK = 4;
	const double _Giant_TypeM = 0.25;

	const double _MSequence_TypeO = 0.00025;
	const double _MSequence_TypeB = 1;
	const double _MSequence_TypeA = 5;
	const double _MSequence_TypeF = 25;
	const double _MSequence_TypeG = 63;
	const double _MSequence_TypeK = 100;
	const double _MSequence_TypeM = 630;

	const double _WDwarf_TypeO = 0;
	const double _WDwarf_TypeB = 63;
	const double _WDwarf_TypeA = 100;
	const double _WDwarf_TypeF = 50;
	const double _WDwarf_TypeG = 50;
	const double _WDwarf_TypeK = 25;
	const double _WDwarf_TypeM = 0;


	// -------- Current Star Distributions --------

	double _giant_typeO;
	double _giant_typeB;
	double _giant_typeA;
	double _giant_typeF;
	double _giant_typeG;
	double _giant_typeK;
	double _giant_typeM;

	double _mSequence_typeO;
	double _mSequence_typeB;
	double _mSequence_typeA;
	double _mSequence_typeF;
	double _mSequence_typeG;
	double _mSequence_typeK;
	double _mSequence_typeM;

	double _wDwarf_typeO;
	double _wDwarf_typeB;
	double _wDwarf_typeA;
	double _wDwarf_typeF;
	double _wDwarf_typeG;
	double _wDwarf_typeK;
	double _wDwarf_typeM;


	// ======== Methods ========
};


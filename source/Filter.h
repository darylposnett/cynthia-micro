#pragma once

#include <math.h>

class Filter
{
public:
	Filter()
	{
		SetResonance(0.);
	}

	// accomodate for sample rate and convert from frequency to 0.0 - 1.0
	void SetSampleRate(double sr) { cutoffMultiplier = 2 / sr; }
	void SetResonance(double r)
	{
		q = 1 - r;
		scale = sqrt(q);
	}

	double Process(double input, double cutoff);

private:
	double cutoffMultiplier = 0.0;

	double f;
	double q;
	double scale;

	double low = 0.0;
	double band = 0.0;
};


#ifndef __COCOADELAY__
#define __COCOADELAY__

#include <cmath>
#include "Filter.h"
#include "Knob.h"
#include "PresetMenu.h"
#include "StatefulDrive.h"
#include "Util.h"
#include <vector>
#include "IPlug_include_in_plug_hdr.h"

const int numPrograms = 128;
const int tapeLength = 10;

enum Parameters
{
	delayTime,
	lfoAmount,
	lfoFrequency,
	driftAmount,
	tempoSyncTime,
	feedback,
	stereoOffset,
	panMode,
	pan,
	duckAmount,
	duckAttackSpeed,
	duckReleaseSpeed,
	lpMode,
	lpCut,
	hpCut,
	driveGain,
	driveMix,
	driveCutoff,
	dryVolume,
	wetVolume,
	numParameters
};

enum TempoSyncTimes
{
	tempoSyncOff,
	whole,
	dottedHalf,
	half,
	tripletHalf,
	dottedQuarter,
	quarter,
	tripletQuarter,
	dottedEighth,
	eighth,
	tripletEighth,
	dottedSixteenth,
	sixteenth,
	tripletSixteenth,
	dottedThirtysecond,
	thirtysecond,
	tripletThirtysecond,
	dottedSixtyforth,
	sixtyforth,
	tripletSixtyforth,
	numTempoSyncTimes
};

enum PanModes
{
	stationary,
	pingPong,
	circular,
	numPanModes
};

class CocoaDelay : public IPlug
{
public:
	CocoaDelay(IPlugInstanceInfo instanceInfo);
	~CocoaDelay();

	void Reset();
	void OnParamChange(int paramIdx);
	void ProcessDoubleReplacing(double** inputs, double** outputs, int nFrames);

private:
	void InitParameters();
	void InitGraphics();
	void InitPresets();
	double GetDelayTime();
	void GetReadPositions(double & l, double & r);
	void InitBuffer();
	void UpdateReadPositions();
	void UpdateWritePosition();
	void UpdateParameters();
	void UpdateDucking(double input);
	void UpdateLfo();
	void UpdateDrift();
	double GetSample(std::vector<double> &buffer, double position);
	void HighPass(double &l, double &r);
	void WriteToBuffer(double** inputs, int s, double outL, double outR);

	IGraphics* pGraphics;
	double dt = 0.0;

	// delay
	std::vector<double> bufferL;
	std::vector<double> bufferR;
	int writePosition;
	double readPositionL;
	double readPositionR;

	// fading parameters
	PanModes currentPanMode = PanModes::stationary;
	double parameterChangeVolume = 1.0;
	double stationaryPanAmount = 0.0;
	double circularPanAmount = 0.0;

	// filters
	MultiFilter lp;
	DualFilter<OnePoleFilter> hp;

	// drive
	StatefulDrive statefulDrive;
	DualFilter<TwoPoleFilter> driveFilter;

	// modulation
	double duckFollower = 0.0;
	double lfoPhase = 0.0;
	double driftVelocity = 0.0;
	double driftPhase = 0.0;
};

#endif

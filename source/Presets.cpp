#include "CocoaDelay.h"

void CocoaDelay::InitPresets()
{
	MakeDefaultPreset("Init", numPrograms);

	/*MakePresetFromNamedParams("Blue Skies", 20,
		(int)Parameters::delayTime, 0.200000,
		(int)Parameters::lfoAmount, 0.000000,
		(int)Parameters::lfoFrequency, 1.175000,
		(int)Parameters::driftAmount, 0.001000,
		(int)Parameters::tempoSyncTime, 0,
		(int)Parameters::feedback, -0.713542,
		(int)Parameters::stereoOffset, 0.054688,
		(int)Parameters::panMode, 2,
		(int)Parameters::pan, 0.965385,
		(int)Parameters::duckAmount, 0.000000,
		(int)Parameters::duckAttackSpeed, 9.999999,
		(int)Parameters::duckReleaseSpeed, 9.999999,
		(int)Parameters::filterMode, 1,
		(int)Parameters::lowCut, 0.528281,
		(int)Parameters::highCut, 0.019840,
		(int)Parameters::driveGain, 1.310289,
		(int)Parameters::driveMix, 1.000000,
		(int)Parameters::driveCutoff, 0.786016,
		(int)Parameters::dryVolume, 1.000000,
		(int)Parameters::wetVolume, 0.453125);

	MakePresetFromNamedParams("Hard Sell", 20,
		(int)Parameters::delayTime, 0.200000,
		(int)Parameters::lfoAmount, 0.002852,
		(int)Parameters::lfoFrequency, 0.100000,
		(int)Parameters::driftAmount, 0.004201,
		(int)Parameters::tempoSyncTime, 13,
		(int)Parameters::feedback, 0.567708,
		(int)Parameters::stereoOffset, 0.000000,
		(int)Parameters::panMode, 1,
		(int)Parameters::pan, -0.466330,
		(int)Parameters::duckAmount, 0.000000,
		(int)Parameters::duckAttackSpeed, 9.999999,
		(int)Parameters::duckReleaseSpeed, 9.999999,
		(int)Parameters::filterMode, 2,
		(int)Parameters::lowCut, 0.742266,
		(int)Parameters::highCut, 0.001000,
		(int)Parameters::driveGain, 2.685615,
		(int)Parameters::driveMix, 1.000000,
		(int)Parameters::driveCutoff, 0.827266,
		(int)Parameters::dryVolume, 1.000000,
		(int)Parameters::wetVolume, 0.322917);

	MakePresetFromNamedParams("Claustrophobic", 20,
		(int)Parameters::delayTime, 0.063977,
		(int)Parameters::lfoAmount, 0.000000,
		(int)Parameters::lfoFrequency, 2.000000,
		(int)Parameters::driftAmount, 0.005758,
		(int)Parameters::tempoSyncTime, 0,
		(int)Parameters::feedback, 0.833333,
		(int)Parameters::stereoOffset, 0.000000,
		(int)Parameters::panMode, 2,
		(int)Parameters::pan, 0.957204,
		(int)Parameters::duckAmount, 1.640625,
		(int)Parameters::duckAttackSpeed, 100.000000,
		(int)Parameters::duckReleaseSpeed, 2.003070,
		(int)Parameters::filterMode, 3,
		(int)Parameters::lowCut, 0.479297,
		(int)Parameters::highCut, 0.001000,
		(int)Parameters::driveGain, 3.681708,
		(int)Parameters::driveMix, 0.500000,
		(int)Parameters::driveCutoff, 0.796328,
		(int)Parameters::dryVolume, 1.000000,
		(int)Parameters::wetVolume, 0.687500);

	MakePresetFromNamedParams("Syncopated Drummer", 20,
		(int)Parameters::delayTime, 0.200000,
		(int)Parameters::lfoAmount, 0.000000,
		(int)Parameters::lfoFrequency, 2.000000,
		(int)Parameters::driftAmount, 0.000000,
		(int)Parameters::tempoSyncTime, 5,
		(int)Parameters::feedback, -0.687500,
		(int)Parameters::stereoOffset, 0.000000,
		(int)Parameters::panMode, 2,
		(int)Parameters::pan, 1.570796,
		(int)Parameters::duckAmount, 0.000000,
		(int)Parameters::duckAttackSpeed, 9.999999,
		(int)Parameters::duckReleaseSpeed, 9.999999,
		(int)Parameters::filterMode, 0,
		(int)Parameters::lowCut, 1.000000,
		(int)Parameters::highCut, 0.001000,
		(int)Parameters::driveGain, 0.000000,
		(int)Parameters::driveMix, 1.000000,
		(int)Parameters::driveCutoff, 1.000000,
		(int)Parameters::dryVolume, 1.000000,
		(int)Parameters::wetVolume, 0.500000);

	MakePresetFromNamedParams("Gentle Comb", 20,
		(int)Parameters::delayTime, 0.001000,
		(int)Parameters::lfoAmount, 0.012207,
		(int)Parameters::lfoFrequency, 0.100000,
		(int)Parameters::driftAmount, 0.001773,
		(int)Parameters::tempoSyncTime, 0,
		(int)Parameters::feedback, 0.723958,
		(int)Parameters::stereoOffset, 0.000000,
		(int)Parameters::panMode, 0,
		(int)Parameters::pan, 0.000000,
		(int)Parameters::duckAmount, 0.000000,
		(int)Parameters::duckAttackSpeed, 9.999999,
		(int)Parameters::duckReleaseSpeed, 9.999999,
		(int)Parameters::filterMode, 2,
		(int)Parameters::lowCut, 0.494766,
		(int)Parameters::highCut, 0.001000,
		(int)Parameters::driveGain, 0.100000,
		(int)Parameters::driveMix, 1.000000,
		(int)Parameters::driveCutoff, 1.000000,
		(int)Parameters::dryVolume, 1.000000,
		(int)Parameters::wetVolume, 0.380208);

	MakePresetFromNamedParams("What", 20,
		(int)Parameters::delayTime, 0.002640,
		(int)Parameters::lfoAmount, 0.020104,
		(int)Parameters::lfoFrequency, 9.355469,
		(int)Parameters::driftAmount, 0.005324,
		(int)Parameters::tempoSyncTime, 0,
		(int)Parameters::feedback, 0.901042,
		(int)Parameters::stereoOffset, 0.078125,
		(int)Parameters::panMode, 2,
		(int)Parameters::pan, 1.153554,
		(int)Parameters::duckAmount, 0.000000,
		(int)Parameters::duckAttackSpeed, 9.999999,
		(int)Parameters::duckReleaseSpeed, 9.999999,
		(int)Parameters::filterMode, 0,
		(int)Parameters::lowCut, 0.907266,
		(int)Parameters::highCut, 0.001000,
		(int)Parameters::driveGain, 0.000000,
		(int)Parameters::driveMix, 1.000000,
		(int)Parameters::driveCutoff, 1.000000,
		(int)Parameters::dryVolume, 1.000000,
		(int)Parameters::wetVolume, 0.500000);

	MakeDefaultPreset("-", numPrograms);*/
}
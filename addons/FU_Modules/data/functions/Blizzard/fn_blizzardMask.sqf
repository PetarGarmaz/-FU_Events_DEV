private _allowedMasks = missionNamespace getVariable "FU_BlizzardMasks";

while {true} do {
	waitUntil {(goggles player) in _allowedMasks};
	
	cutText ["", "BLACK OUT", 1];
	
	playSound "OMIntelGrabBody_01";
	playSound "OMIntelGrabBody_01";
	
	sleep 1;
	
	playSound "Orange_Start_Sim";
	playSound "Orange_Start_Sim";
	
	sleep 2;
	cutText ["", "BLACK IN", 2];
	"FU_BlizzardMask" cutRsc ["FU_BlizzardMask", "PLAIN", 2, true];
	player playActionNow "gestureWipeFace";
	
	waitUntil {!((goggles player) in _allowedMasks)};
	
	cutText ["", "BLACK OUT", 1];
	
	playSound "Orange_Start_Sim";
	playSound "Orange_Start_Sim";
	
	sleep 2;
	
	playSound "OMIntelGrabBody_01";
	playSound "OMIntelGrabBody_01";
	
	"FU_BlizzardMask" cutRsc ["Default", "PLAIN", 2];
	player playActionNow "gestureWipeFace";
	sleep 1;
	cutText ["", "BLACK IN", 2];
	
	sleep 2;
};
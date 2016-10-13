/*
    File: init.sqf
    Author: 
    
    Description:
    
*/
StartProgress = false;

[] execVM "briefing.sqf"; //Load Briefing
[] execVM "KRON_Strings.sqf";

[
	4*60, // seconds to delete dead bodies (0 means don't delete) 
	2*60, // seconds to delete dead vehicles (0 means don't delete)
	5*60, // seconds to delete immobile vehicles (0 means don't delete)
	2*60, // seconds to delete dropped weapons (0 means don't delete)
	4*60, // seconds to deleted planted explosives (0 means don't delete)
	2*60 // seconds to delete dropped smokes/chemlights (0 means don't delete)
] execVM "repetitive_cleanup.sqf";

StartProgress = true;
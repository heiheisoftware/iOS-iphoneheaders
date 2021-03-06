/*
* This header is generated by classdump-dyld 0.7
* on Thursday, June 25, 2015 at 1:13:13 AM Japan Standard Time
* Operating System: Version 8.3 (Build 12F69)
* Image Source: /System/Library/PrivateFrameworks/CoreRC.framework/CoreRC
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/


@class CoreCECDevice;

typedef struct _NSZone* NSZoneRef;

typedef struct CECLanguage {
	unsigned char characters[3];
} CECLanguage;

typedef struct {
	unsigned char length;
	unsigned char characters[14];
} SCD_Struct_Co2;

typedef union CECOSDName {
	unsigned char bytes[15];
	SCD_Struct_Co2 string;
} CECOSDName;

typedef struct __IOHIDEvent* IOHIDEventRef;

typedef struct CECFrame {
	unsigned char blocks[16];
	unsigned length : 5;
	unsigned reserved : 3;
} CECFrame;

typedef struct CECChannelIdentifier {
	unsigned channelNumberFormat : 6;
	unsigned majorChannelNumber : 10;
	unsigned minorChannelNumber : 16;
} CECChannelIdentifier;

typedef struct CECUserControl {
	unsigned char command;
	CECUICommandOperand operand;
	CECChannelIdentifier channelIdentifier;
	unsigned char playMode;
	unsigned char broadcastType;
	unsigned char mediaNumber;
	unsigned char avInput;
	unsigned char audioInput;
	C) soundPresentationControl;
} CECUserControl;

typedef struct {
	unsigned char destination;
	CECUserControl control;
	char isValid;
} SCD_Struct_Co8;

typedef struct {
	CoreCECDevice* sender;
	CECUserControl control;
	char isValid;
} SCD_Struct_Co9;


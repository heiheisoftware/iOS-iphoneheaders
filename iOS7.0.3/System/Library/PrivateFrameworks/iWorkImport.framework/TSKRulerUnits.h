/*
* This header is generated by classdump-dyld 0.1
* on Thursday, November 28, 2013 at 4:09:56 AM Eastern European Standard Time
* Operating System: Version 7.0.3 (Build 11B511)
* Image Source: /System/Library/PrivateFrameworks/iWorkImport.framework/iWorkImport
* classdump-dyld is free of use, Copyright © 2013 by Elias Limneos.
*/


@class NSFormatter;

@interface TSKRulerUnits : NSObject {

	int _rulerUnits;
	BOOL _showRulerAsPercentage;
	BOOL _centerRulerOrigin;
	int _preferredPixelUnit;
	NSFormatter* _formatter;
	NSFormatter* _lenientFormatter;
	NSFormatter* _highPrecisionFormatter;
	NSFormatter* _lenientHighPrecisionFormatter;

}

@property (assign,nonatomic) int rulerUnits;                          //@synthesize rulerUnits=_rulerUnits - In the implementation block
@property (assign,nonatomic) BOOL showRulerAsPercentage;              //@synthesize showRulerAsPercentage=_showRulerAsPercentage - In the implementation block
@property (assign,nonatomic) BOOL centerRulerOrigin;                  //@synthesize centerRulerOrigin=_centerRulerOrigin - In the implementation block
@property (assign,nonatomic) int preferredPixelUnit;                  //@synthesize preferredPixelUnit=_preferredPixelUnit - In the implementation block
+(id)formatterForRulerUnits:(int)arg1 decimalPlaces:(int)arg2 trailingZeros:(BOOL)arg3 lenient:(BOOL)arg4 ;
+(id)instance;
-(id)formatter:(BOOL)arg1 lenient:(BOOL)arg2 ;
-(float)convertPointsToRulerUnits:(float)arg1 ;
-(void)setRulerUnits:(int)arg1 ;
-(void)setShowRulerAsPercentage:(BOOL)arg1 ;
-(void)setCenterRulerOrigin:(BOOL)arg1 ;
-(float)convertRulerUnitsToPoints:(float)arg1 ;
-(id)compatibleRulerUnits;
-(id)localizedCompatibleRulerUnits;
-(int)rulerUnits;
-(BOOL)showRulerAsPercentage;
-(BOOL)centerRulerOrigin;
-(int)preferredPixelUnit;
-(void)setPreferredPixelUnit:(int)arg1 ;
-(void)dealloc;
-(id)init;
@end


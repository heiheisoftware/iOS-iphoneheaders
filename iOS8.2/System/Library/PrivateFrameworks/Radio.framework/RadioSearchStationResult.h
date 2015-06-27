/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, June 23, 2015 at 11:20:54 PM Japan Standard Time
* Operating System: Version 8.2 (Build 12D508)
* Image Source: /System/Library/PrivateFrameworks/Radio.framework/Radio
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <Radio/Radio-Structs.h>
#import <Radio/NSCopying.h>

@class NSDictionary;

@interface RadioSearchStationResult : NSObject <NSCopying> {

	NSDictionary* _highlightRanges;
	NSDictionary* _stationDictionary;

}

@property (nonatomic,copy,readonly) NSDictionary * highlightRanges;                //@synthesize highlightRanges=_highlightRanges - In the implementation block
@property (nonatomic,copy,readonly) NSDictionary * stationDictionary;              //@synthesize stationDictionary=_stationDictionary - In the implementation block
-(char)isEqual:(id)arg1 ;
-(unsigned)hash;
-(id)copyWithZone:(NSZone*)arg1 ;
-(id)_initWithResponseDictionary:(id)arg1 ;
-(NSDictionary *)stationDictionary;
-(NSDictionary *)highlightRanges;
@end

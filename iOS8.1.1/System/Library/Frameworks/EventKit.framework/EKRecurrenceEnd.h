/*
* This header is generated by classdump-dyld 0.7
* on Tuesday, December 2, 2014 at 7:28:06 PM Japan Standard Time
* Operating System: Version 8.1.1 (Build 12B436)
* Image Source: /System/Library/Frameworks/EventKit.framework/EventKit
* classdump-dyld is licensed under GPLv3, Copyright © 2013 by Elias Limneos.
*/

#import <EventKit/EventKit-Structs.h>
#import <EventKit/NSCopying.h>

@class NSDate;

@interface EKRecurrenceEnd : NSObject <NSCopying> {

	NSDate* _endDate;
	unsigned long long _occurrenceCount;

}

@property (nonatomic,readonly) NSDate * endDate;                                //@synthesize endDate=_endDate - In the implementation block
@property (nonatomic,readonly) unsigned long long occurrenceCount;              //@synthesize occurrenceCount=_occurrenceCount - In the implementation block
@property (nonatomic,readonly) BOOL usesEndDate; 
+(id)recurrenceEndWithEndDate:(id)arg1 ;
+(id)recurrenceEndWithOccurrenceCount:(unsigned long long)arg1 ;
-(unsigned long long)occurrenceCount;
-(id)initWithEndDate:(id)arg1 ;
-(id)initWithOccurrenceCount:(unsigned long long)arg1 ;
-(BOOL)usesEndDate;
-(void)dealloc;
-(id)initWithCoder:(id)arg1 ;
-(void)encodeWithCoder:(id)arg1 ;
-(BOOL)isEqual:(id)arg1 ;
-(unsigned long long)hash;
-(id)description;
-(id)copyWithZone:(NSZone*)arg1 ;
-(NSDate *)endDate;
@end
